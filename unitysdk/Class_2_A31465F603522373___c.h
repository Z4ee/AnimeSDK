#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_45B62668F0BA5CF8.h"
#include "unitysdk/Struct_2_EB409772687773A2.h"
#include "unitysdk/System/Object.h"

class Class_3_D92ADC48CDFCC09B_1;

#define CLASS_2_A31465F603522373___C_METHOD_1_86843C648953ACC3_OFFSET UNITYSDK_OFFSET(0x14621C30)
#define CLASS_2_A31465F603522373___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14621BE0)
#define CLASS_2_A31465F603522373___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14621C20)

inline static constexpr unsigned int Class_2_A31465F603522373___c_TypeDefinitionIndex = 78247;

class Class_2_A31465F603522373___c : public ::System::Object
{
public:
	static ::Class_2_A31465F603522373___c** StaticGet___9()
	{
		return (::Class_2_A31465F603522373___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A31465F603522373___c_TypeDefinitionIndex)->GetStaticField(0x44EF0);
	}
	static ::Class_3_D92ADC48CDFCC09B_1** StaticGet___9__29_0()
	{
		return (::Class_3_D92ADC48CDFCC09B_1**)Il2CppClass::FromTypeDefinitionIndex(Class_2_A31465F603522373___c_TypeDefinitionIndex)->GetStaticField(0x44EF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373___C__CTOR_OFFSET))(this);
	}

	::Struct_2_45B62668F0BA5CF8 Method_1_86843C648953ACC3(::Struct_2_EB409772687773A2& a1)
	{
		return ((::Struct_2_45B62668F0BA5CF8(*)(::PVOID, ::Struct_2_EB409772687773A2&))((::PBYTE)hIl2Cpp + CLASS_2_A31465F603522373___C_METHOD_1_86843C648953ACC3_OFFSET))(this, a1);
	}
};
