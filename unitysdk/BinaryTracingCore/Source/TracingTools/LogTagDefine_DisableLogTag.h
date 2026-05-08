#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGTAGDEFINE_DISABLELOGTAG_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0x304470)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGTAGDEFINE_DISABLELOGTAG_GET_TAGNAME_OFFSET UNITYSDK_OFFSET(0x39A4B0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGTAGDEFINE_DISABLELOGTAG_GET_TAGVALUE_OFFSET UNITYSDK_OFFSET(0x93AF90)

namespace BinaryTracingCore::Source::TracingTools
{
	inline static constexpr unsigned int LogTagDefine_DisableLogTag_TypeDefinitionIndex = 32412;

	struct alignas(1) LogTagDefine_DisableLogTag
	{
		::System::Boolean get_Enable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGTAGDEFINE_DISABLELOGTAG_GET_ENABLE_OFFSET))(this);
		}

		::System::String* get_TagName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGTAGDEFINE_DISABLELOGTAG_GET_TAGNAME_OFFSET))(this);
		}

		::System::Int32 get_TagValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_LOGTAGDEFINE_DISABLELOGTAG_GET_TAGVALUE_OFFSET))(this);
		}
	};
}
