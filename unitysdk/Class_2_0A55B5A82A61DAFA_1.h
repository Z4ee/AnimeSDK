#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_237.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_474.h"

class Class_0_16E4307DCC419505_13;

#define CLASS_2_0A55B5A82A61DAFA_1_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x194F1FC0)
#define CLASS_2_0A55B5A82A61DAFA_1_METHOD_2_C599DDDFCD4659A7_OFFSET UNITYSDK_OFFSET(0x194F1F20)
#define CLASS_2_0A55B5A82A61DAFA_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x194F1FB0)
#define CLASS_2_0A55B5A82A61DAFA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x194F1F30)

inline static constexpr unsigned int Class_2_0A55B5A82A61DAFA_1_TypeDefinitionIndex = 18065;

class Class_2_0A55B5A82A61DAFA_1 : public ::Class_1_5DA2E7556103D5A3_237
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_0A55B5A82A61DAFA_1_TypeDefinitionIndex)->GetStaticField(0x4400);
	}
	::Il2CppArray<::System::Int32>* Field_2_1; // 0xA8

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_474 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_474, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_0A55B5A82A61DAFA_1__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0A55B5A82A61DAFA_1__CCTOR_OFFSET))();
	}

	::Il2CppArray<::System::Int32>* Method_2_C599DDDFCD4659A7()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A55B5A82A61DAFA_1_METHOD_2_C599DDDFCD4659A7_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A55B5A82A61DAFA_1_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}
};
