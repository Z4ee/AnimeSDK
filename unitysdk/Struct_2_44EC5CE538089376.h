#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169.h"
#include "unitysdk/System/Memory_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_44EC5CE538089376_GET_PACKEDARGS_OFFSET UNITYSDK_OFFSET(0x38C6080)
#define STRUCT_2_44EC5CE538089376_GET_SERVERTICK_OFFSET UNITYSDK_OFFSET(0x7A7FB0)
#define STRUCT_2_44EC5CE538089376_SET_PACKEDARGS_OFFSET UNITYSDK_OFFSET(0x394E4A0)
#define STRUCT_2_44EC5CE538089376_SET_SERVERTICK_OFFSET UNITYSDK_OFFSET(0x38ECC60)
#define STRUCT_2_44EC5CE538089376__CTOR_1_OFFSET UNITYSDK_OFFSET(0x39CB2E0)
#define STRUCT_2_44EC5CE538089376__CTOR_OFFSET UNITYSDK_OFFSET(0x39CB2A0)

inline static constexpr unsigned int Struct_2_44EC5CE538089376_TypeDefinitionIndex = 35345;

struct alignas(8) Struct_2_44EC5CE538089376
{
	::Struct_2_019938BC9C50B169 Field_2_0; // 0x10
	::System::Memory_1<::System::Byte> _PackedArgs_k__BackingField; // 0x18
	::System::UInt32 _ServerTick_k__BackingField; // 0x28

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_44EC5CE538089376__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_44EC5CE538089376__CTOR_1_OFFSET))(this);
	}

	::System::Memory_1<::System::Byte> get_PackedArgs()
	{
		return ((::System::Memory_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_44EC5CE538089376_GET_PACKEDARGS_OFFSET))(this);
	}

	::System::Void set_PackedArgs(::System::Memory_1<::System::Byte> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Memory_1<::System::Byte>))((::PBYTE)hIl2Cpp + STRUCT_2_44EC5CE538089376_SET_PACKEDARGS_OFFSET))(this, a1);
	}

	::System::UInt32 get_ServerTick()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_44EC5CE538089376_GET_SERVERTICK_OFFSET))(this);
	}

	::System::Void set_ServerTick(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_44EC5CE538089376_SET_SERVERTICK_OFFSET))(this, a1);
	}
};
