#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGTAGDEFINE_LOGTAG_GET_TAGNAME_OFFSET UNITYSDK_OFFSET(0x1F652060)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGTAGDEFINE_LOGTAG_GET_TAGVALUE_OFFSET UNITYSDK_OFFSET(0x1F652050)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGTAGDEFINE_LOGTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1F652000)

namespace BinaryTracingCore::Source::TracingTools
{
	inline static constexpr unsigned int LogTagDefine_LogTag_TypeDefinitionIndex = 34598;

	class LogTagDefine_LogTag : public ::System::Object
	{
	public:
		::System::String* tagName; // 0x10
		::System::Int32 tagValue; // 0x18
		::System::Boolean Enable; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGTAGDEFINE_LOGTAG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_TagValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGTAGDEFINE_LOGTAG_GET_TAGVALUE_OFFSET))(this);
		}

		::System::String* get_TagName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGTAGDEFINE_LOGTAG_GET_TAGNAME_OFFSET))(this);
		}
	};
}
