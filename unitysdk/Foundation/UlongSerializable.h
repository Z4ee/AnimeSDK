#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_ULONGSERIALIZABLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E1EE990)
#define FOUNDATION_ULONGSERIALIZABLE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E1EEA30)
#define FOUNDATION_ULONGSERIALIZABLE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E1EEA90)
#define FOUNDATION_ULONGSERIALIZABLE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E1EE9A0)
#define FOUNDATION_ULONGSERIALIZABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1EEAF0)

namespace Foundation
{
	inline static constexpr unsigned int UlongSerializable_TypeDefinitionIndex = 8029;

	class UlongSerializable : public ::System::Object
	{
	public:
		::System::String* InputValue; // 0x10
		::System::UInt64 serializedValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ULONGSERIALIZABLE__CTOR_OFFSET))(this);
		}

		::System::UInt64 get_Value()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ULONGSERIALIZABLE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_ULONGSERIALIZABLE_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ULONGSERIALIZABLE_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ULONGSERIALIZABLE_ONAFTERDESERIALIZE_OFFSET))(this);
		}
	};
}
