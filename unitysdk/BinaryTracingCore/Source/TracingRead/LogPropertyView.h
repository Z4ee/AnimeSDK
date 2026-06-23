#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryTracingCore/Source/TracingRead/LogPropertyUnionValue.h"
#include "unitysdk/BinaryTracingCore/Source/TracingTools/LogProperty.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGPROPERTYVIEW_GET_PROPERTYKEY_OFFSET UNITYSDK_OFFSET(0x1E22A7F0)
#define BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGPROPERTYVIEW_GET_PROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1E22A800)
#define BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGPROPERTYVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E22A900)

namespace BinaryTracingCore::Source::TracingRead
{
	inline static constexpr unsigned int LogPropertyView_TypeDefinitionIndex = 33967;

	class LogPropertyView : public ::System::Object
	{
	public:
		::BinaryTracingCore::Source::TracingTools::LogProperty LogProperty; // 0x10
		::BinaryTracingCore::Source::TracingRead::LogPropertyUnionValue Value; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGPROPERTYVIEW__CTOR_OFFSET))(this);
		}

		::System::String* get_PropertyKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGPROPERTYVIEW_GET_PROPERTYKEY_OFFSET))(this);
		}

		::System::String* get_PropertyValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGREAD_LOGPROPERTYVIEW_GET_PROPERTYVALUE_OFFSET))(this);
		}
	};
}
