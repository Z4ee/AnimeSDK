#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCLASSREGISTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F650C40)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCLASSREGISTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F650D60)

namespace BinaryTracingCore::Source::TracingTools
{
	inline static constexpr unsigned int LogClassRegister_TypeDefinitionIndex = 34587;

	class LogClassRegister : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCLASSREGISTER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGCLASSREGISTER__CTOR_OFFSET))(this);
		}
	};
}
