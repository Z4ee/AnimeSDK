#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_BYTEARRAYENCODE_FROMNUMBER_OFFSET UNITYSDK_OFFSET(0x1C00CB20)
#define FOUNDATION_BYTEARRAYENCODE_TONUMBER_OFFSET UNITYSDK_OFFSET(0x1C00CC00)
#define FOUNDATION_BYTEARRAYENCODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C00CD00)

namespace Foundation
{
	inline static constexpr unsigned int ByteArrayEncode_TypeDefinitionIndex = 8146;

	class ByteArrayEncode : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* bytes; // 0x10
		::System::Int32 length; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BYTEARRAYENCODE__CTOR_OFFSET))(this);
		}

		::System::Void FromNumber(::System::UInt64 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_BYTEARRAYENCODE_FROMNUMBER_OFFSET))(this, val);
		}

		::System::UInt64 ToNumber()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BYTEARRAYENCODE_TONUMBER_OFFSET))(this);
		}
	};
}
