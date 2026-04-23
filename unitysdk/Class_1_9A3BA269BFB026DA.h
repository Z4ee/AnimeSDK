#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9A3BA269BFB026DA_Struct_2_E81A211B6662113C.h"
#include "unitysdk/Struct_2_FE49D2686B15EB31.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_9A3BA269BFB026DA_METHOD_1_2DF312D8F1F2AEB0_OFFSET UNITYSDK_OFFSET(0x17B35260)
#define CLASS_1_9A3BA269BFB026DA_METHOD_1_32D80D2E0A5C7BBB_OFFSET UNITYSDK_OFFSET(0x17B33B00)
#define CLASS_1_9A3BA269BFB026DA_METHOD_1_79B136329E63E31A_OFFSET UNITYSDK_OFFSET(0x17B344F0)
#define CLASS_1_9A3BA269BFB026DA_METHOD_1_97D0AD0D877DE9D8_OFFSET UNITYSDK_OFFSET(0x17B34950)
#define CLASS_1_9A3BA269BFB026DA_METHOD_1_9E606B1B650D2069_OFFSET UNITYSDK_OFFSET(0x17B34250)
#define CLASS_1_9A3BA269BFB026DA_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x17B341F0)
#define CLASS_1_9A3BA269BFB026DA_METHOD_1_C94D53EAB54146DC_OFFSET UNITYSDK_OFFSET(0x17B34A10)
#define CLASS_1_9A3BA269BFB026DA_METHOD_1_DFB3E3DF5DAF95EF_OFFSET UNITYSDK_OFFSET(0x17B33A50)
#define CLASS_1_9A3BA269BFB026DA__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B35510)
#define CLASS_1_9A3BA269BFB026DA__CTOR_OFFSET UNITYSDK_OFFSET(0x17B35500)

inline static constexpr unsigned int Class_1_9A3BA269BFB026DA_TypeDefinitionIndex = 37802;

class Class_1_9A3BA269BFB026DA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Byte>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A3BA269BFB026DA_TypeDefinitionIndex)->GetStaticField(0xC5B0);
	}
	::Il2CppArray<::Class_1_9A3BA269BFB026DA_Struct_2_E81A211B6662113C>* Field_1_0; // 0x10
	::Il2CppArray<::Struct_2_FE49D2686B15EB31>* Field_1_1; // 0x18
	::Il2CppArray<::System::UInt32>* Field_1_5; // 0x20
	::System::UInt32 Field_1_2; // 0x28
	::System::Int32 Field_1_4; // 0x2C
	::System::UInt32 Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A3BA269BFB026DA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9A3BA269BFB026DA__CCTOR_OFFSET))();
	}

	::System::Void Method_1_DFB3E3DF5DAF95EF(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9A3BA269BFB026DA_METHOD_1_DFB3E3DF5DAF95EF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_32D80D2E0A5C7BBB(::System::Int32 a1, ::System::Byte* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Byte*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9A3BA269BFB026DA_METHOD_1_32D80D2E0A5C7BBB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A3BA269BFB026DA_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Boolean Method_1_79B136329E63E31A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A3BA269BFB026DA_METHOD_1_79B136329E63E31A_OFFSET))(this);
	}

	::System::Void Method_1_C94D53EAB54146DC(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_9A3BA269BFB026DA_METHOD_1_C94D53EAB54146DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_2DF312D8F1F2AEB0(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9A3BA269BFB026DA_METHOD_1_2DF312D8F1F2AEB0_OFFSET))(this, a1);
	}

	::System::Void Method_1_97D0AD0D877DE9D8(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9A3BA269BFB026DA_METHOD_1_97D0AD0D877DE9D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_9E606B1B650D2069(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9A3BA269BFB026DA_METHOD_1_9E606B1B650D2069_OFFSET))(this, a1);
	}
};
