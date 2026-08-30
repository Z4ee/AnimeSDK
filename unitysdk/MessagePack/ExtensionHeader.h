#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MESSAGEPACK_EXTENSIONHEADER_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B58EB0)
#define MESSAGEPACK_EXTENSIONHEADER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1E120)
#define MESSAGEPACK_EXTENSIONHEADER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x2FC10)
#define MESSAGEPACK_EXTENSIONHEADER_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x2200)
#define MESSAGEPACK_EXTENSIONHEADER_SET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x14E860)
#define MESSAGEPACK_EXTENSIONHEADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B58E70)
#define MESSAGEPACK_EXTENSIONHEADER__CTOR_OFFSET UNITYSDK_OFFSET(0x150F00)

namespace MessagePack
{
	inline static constexpr unsigned int ExtensionHeader_TypeDefinitionIndex = 7106;

	struct alignas(4) ExtensionHeader
	{
		::System::SByte _TypeCode_k__BackingField; // 0x10
		::System::UInt32 _Length_k__BackingField; // 0x14

		::System::Void _ctor(::System::SByte a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONHEADER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::SByte a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONHEADER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::SByte get_TypeCode()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONHEADER_GET_TYPECODE_OFFSET))(this);
		}

		::System::Void set_TypeCode(::System::SByte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONHEADER_SET_TYPECODE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Length()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONHEADER_GET_LENGTH_OFFSET))(this);
		}

		::System::Void set_Length(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONHEADER_SET_LENGTH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::MessagePack::ExtensionHeader a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::ExtensionHeader))((::PBYTE)hIl2Cpp + MESSAGEPACK_EXTENSIONHEADER_EQUALS_OFFSET))(this, a1);
		}
	};
}
