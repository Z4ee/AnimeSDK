#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BinaryTracingCore::Source::TracingTools { class LogTagDefine_LogTag; }
namespace System { class String; }

#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGTAGDEFINE_DEFINELOGTAG_OFFSET UNITYSDK_OFFSET(0x1E22DFF0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGTAGDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E22E070)

namespace BinaryTracingCore::Source::TracingTools
{
	inline static constexpr unsigned int LogTagDefine_TypeDefinitionIndex = 33961;

	class LogTagDefine : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGTAGDEFINE__CTOR_OFFSET))(this);
		}

		static ::BinaryTracingCore::Source::TracingTools::LogTagDefine_LogTag* DefineLogTag(::System::String* name, ::System::Int32 value, ::System::Boolean enable)
		{
			return ((::BinaryTracingCore::Source::TracingTools::LogTagDefine_LogTag*(*)(::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGTAGDEFINE_DEFINELOGTAG_OFFSET))(name, value, enable);
		}
	};
}
