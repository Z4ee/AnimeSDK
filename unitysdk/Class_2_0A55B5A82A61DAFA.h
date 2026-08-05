#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_35.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_127.h"

class Class_0_16E4307DCC419505_7;

#define CLASS_2_0A55B5A82A61DAFA_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x17F616E0)
#define CLASS_2_0A55B5A82A61DAFA_METHOD_2_C599DDDFCD4659A7_OFFSET UNITYSDK_OFFSET(0x17F61640)
#define CLASS_2_0A55B5A82A61DAFA__CCTOR_OFFSET UNITYSDK_OFFSET(0x17F616D0)
#define CLASS_2_0A55B5A82A61DAFA__CTOR_OFFSET UNITYSDK_OFFSET(0x17F61650)

inline static constexpr unsigned int Class_2_0A55B5A82A61DAFA_TypeDefinitionIndex = 9236;

class Class_2_0A55B5A82A61DAFA : public ::Class_1_5DA2E7556103D5A3_35
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0A55B5A82A61DAFA_TypeDefinitionIndex)->GetStaticField(0x3E90);
	}
	::Il2CppArray<::System::Int32>* Field_2_7; // 0xA8

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_127 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_127, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_0A55B5A82A61DAFA__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0A55B5A82A61DAFA__CCTOR_OFFSET))();
	}

	::Il2CppArray<::System::Int32>* Method_2_C599DDDFCD4659A7()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A55B5A82A61DAFA_METHOD_2_C599DDDFCD4659A7_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A55B5A82A61DAFA_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}
};
