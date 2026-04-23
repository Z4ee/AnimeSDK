#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwordTrainingProperty.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_27C8A73E3C6BD41F_METHOD_1_A24680A134F40BA4_OFFSET UNITYSDK_OFFSET(0x11DD50B0)
#define CLASS_1_27C8A73E3C6BD41F_METHOD_1_BA0CBF264A2C26C5_OFFSET UNITYSDK_OFFSET(0x11DD5130)
#define CLASS_1_27C8A73E3C6BD41F__CCTOR_OFFSET UNITYSDK_OFFSET(0x11DD52D0)

inline static constexpr unsigned int Class_1_27C8A73E3C6BD41F_TypeDefinitionIndex = 50185;

class Class_1_27C8A73E3C6BD41F : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_27C8A73E3C6BD41F_TypeDefinitionIndex)->GetStaticField(0xFC20);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_27C8A73E3C6BD41F_TypeDefinitionIndex)->GetStaticField(0xFC24);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_27C8A73E3C6BD41F_TypeDefinitionIndex)->GetStaticField(0xFC28);
	}
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_27C8A73E3C6BD41F_TypeDefinitionIndex)->GetStaticField(0xFC2C);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_27C8A73E3C6BD41F__CCTOR_OFFSET))();
	}

	static ::System::Int32 Method_1_A24680A134F40BA4(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_27C8A73E3C6BD41F_METHOD_1_A24680A134F40BA4_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_BA0CBF264A2C26C5(::RPG::GameCore::SwordTrainingProperty a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::SwordTrainingProperty))((::PBYTE)hIl2Cpp + CLASS_1_27C8A73E3C6BD41F_METHOD_1_BA0CBF264A2C26C5_OFFSET))(a1);
	}
};
