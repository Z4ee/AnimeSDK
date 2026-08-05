#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_STRINGEXTENSION_INT64VALUE_OFFSET UNITYSDK_OFFSET(0x1E1970B0)
#define FOUNDATION_STRINGEXTENSION_INTVALUE_OFFSET UNITYSDK_OFFSET(0x1E196FD0)
#define FOUNDATION_STRINGEXTENSION_UINTVALUE_OFFSET UNITYSDK_OFFSET(0x1E197040)

namespace Foundation
{
	inline static constexpr unsigned int StringExtension_TypeDefinitionIndex = 8031;

	class StringExtension : public ::System::Object
	{
	public:
		static ::System::Int32 IntValue(::System::String* s)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGEXTENSION_INTVALUE_OFFSET))(s);
		}

		static ::System::UInt32 UIntValue(::System::String* s)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGEXTENSION_UINTVALUE_OFFSET))(s);
		}

		static ::System::Int64 Int64Value(::System::String* s)
		{
			return ((::System::Int64(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STRINGEXTENSION_INT64VALUE_OFFSET))(s);
		}
	};
}
