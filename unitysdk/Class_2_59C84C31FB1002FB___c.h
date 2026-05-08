#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/System/Object.h"

class Class_3_D92ADC48CDFCC09B;

#define CLASS_2_59C84C31FB1002FB___C_METHOD_1_602A336CBD30C930_OFFSET UNITYSDK_OFFSET(0x16AD6010)
#define CLASS_2_59C84C31FB1002FB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AD5FC0)
#define CLASS_2_59C84C31FB1002FB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16AD6000)

inline static constexpr unsigned int Class_2_59C84C31FB1002FB___c_TypeDefinitionIndex = 76297;

class Class_2_59C84C31FB1002FB___c : public ::System::Object
{
public:
	static ::Class_3_D92ADC48CDFCC09B** StaticGet___9__52_15()
	{
		return (::Class_3_D92ADC48CDFCC09B**)Il2CppClass::FromTypeDefinitionIndex(Class_2_59C84C31FB1002FB___c_TypeDefinitionIndex)->GetStaticField(0x39340);
	}
	static ::Class_2_59C84C31FB1002FB___c** StaticGet___9()
	{
		return (::Class_2_59C84C31FB1002FB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_59C84C31FB1002FB___c_TypeDefinitionIndex)->GetStaticField(0x39348);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_59C84C31FB1002FB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_59C84C31FB1002FB___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_602A336CBD30C930(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_2_59C84C31FB1002FB___C_METHOD_1_602A336CBD30C930_OFFSET))(this, a1);
	}
};
