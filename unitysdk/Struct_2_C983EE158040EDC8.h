#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169.h"
#include "unitysdk/System/Memory_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_C983EE158040EDC8_GET_PACKEDARGS_OFFSET UNITYSDK_OFFSET(0x164DBE0)
#define STRUCT_2_C983EE158040EDC8_SET_PACKEDARGS_OFFSET UNITYSDK_OFFSET(0x22B0750)
#define STRUCT_2_C983EE158040EDC8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x22B0800)
#define STRUCT_2_C983EE158040EDC8__CTOR_OFFSET UNITYSDK_OFFSET(0x22B0760)

inline static constexpr unsigned int Struct_2_C983EE158040EDC8_TypeDefinitionIndex = 34396;

struct alignas(8) Struct_2_C983EE158040EDC8
{
	::Struct_2_019938BC9C50B169 Field_2_0; // 0x10
	::System::Memory_1<::System::Byte> _PackedArgs_k__BackingField; // 0x18

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_C983EE158040EDC8__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C983EE158040EDC8__CTOR_1_OFFSET))(this);
	}

	::System::Memory_1<::System::Byte> get_PackedArgs()
	{
		return ((::System::Memory_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C983EE158040EDC8_GET_PACKEDARGS_OFFSET))(this);
	}

	::System::Void set_PackedArgs(::System::Memory_1<::System::Byte> value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Memory_1<::System::Byte>))((::PBYTE)hIl2Cpp + STRUCT_2_C983EE158040EDC8_SET_PACKEDARGS_OFFSET))(this, value);
	}
};
