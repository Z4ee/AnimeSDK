#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3906C24C646CC83F.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Delegate; }
namespace System { class Object; }

#define STRUCT_2_6C64084003D66585_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x38D6800)
#define STRUCT_2_6C64084003D66585_EQUALS_OFFSET UNITYSDK_OFFSET(0x38D67C0)
#define STRUCT_2_6C64084003D66585_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x38D6880)
#define STRUCT_2_6C64084003D66585_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x38D6740)
#define STRUCT_2_6C64084003D66585_METHOD_2_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x14BBDCC0)
#define STRUCT_2_6C64084003D66585_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x38D67B0)
#define STRUCT_2_6C64084003D66585_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x38D67A0)

inline static constexpr unsigned int Struct_2_6C64084003D66585_TypeDefinitionIndex = 6821;

struct alignas(8) Struct_2_6C64084003D66585
{
	::Struct_2_3906C24C646CC83F Field_2_0; // 0x10
	::Struct_2_3906C24C646CC83F Field_2_1; // 0x30
	::Struct_2_3906C24C646CC83F Field_2_2; // 0x50
	::Struct_2_3906C24C646CC83F Field_2_3; // 0x70
	::System::Delegate* Field_2_4; // 0x90

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6C64084003D66585_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6C64084003D66585_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6C64084003D66585_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}

	static ::System::Void Method_2_B072873681D4192B(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_6C64084003D66585_METHOD_2_B072873681D4192B_OFFSET))(a1);
	}

	::System::Boolean Equals(::Struct_2_6C64084003D66585 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_6C64084003D66585))((::PBYTE)hIl2Cpp + STRUCT_2_6C64084003D66585_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_6C64084003D66585_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6C64084003D66585_GETHASHCODE_OFFSET))(this);
	}
};
