#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MESSAGEPACK_EXTENSIONHEADER_EQUALS_OFFSET UNITYSDK_OFFSET(0x2298BD0)
#define MESSAGEPACK_EXTENSIONHEADER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1DA80)
#define MESSAGEPACK_EXTENSIONHEADER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x2A500)
#define MESSAGEPACK_EXTENSIONHEADER_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1D50)
#define MESSAGEPACK_EXTENSIONHEADER_SET_TYPECODE_OFFSET UNITYSDK_OFFSET(0xD87E0)
#define MESSAGEPACK_EXTENSIONHEADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2298B90)
#define MESSAGEPACK_EXTENSIONHEADER__CTOR_OFFSET UNITYSDK_OFFSET(0xD8180)

namespace MessagePack
{
	inline static constexpr unsigned int ExtensionHeader_TypeDefinitionIndex = 9211;

	struct alignas(4) ExtensionHeader
	{
		::System::SByte _TypeCode_k__BackingField; // 0x10
		::System::UInt32 _Length_k__BackingField; // 0x14

		::System::Void _ctor(::System::SByte typeCode, ::System::UInt32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONHEADER__CTOR_OFFSET))(this, typeCode, length);
		}

		::System::Void _ctor_1(::System::SByte typeCode, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONHEADER__CTOR_1_OFFSET))(this, typeCode, length);
		}

		::System::SByte get_TypeCode()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONHEADER_GET_TYPECODE_OFFSET))(this);
		}

		::System::Void set_TypeCode(::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONHEADER_SET_TYPECODE_OFFSET))(this, value);
		}

		::System::UInt32 get_Length()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONHEADER_GET_LENGTH_OFFSET))(this);
		}

		::System::Void set_Length(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONHEADER_SET_LENGTH_OFFSET))(this, value);
		}

		::System::Boolean Equals(::MessagePack::ExtensionHeader other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::ExtensionHeader))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONHEADER_EQUALS_OFFSET))(this, other);
		}
	};
}
