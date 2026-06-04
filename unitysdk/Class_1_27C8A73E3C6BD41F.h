#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwordTrainingProperty.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_27C8A73E3C6BD41F_METHOD_1_A24680A134F40BA4_OFFSET UNITYSDK_OFFSET(0x141E88E0)
#define CLASS_1_27C8A73E3C6BD41F_METHOD_1_BA0CBF264A2C26C5_OFFSET UNITYSDK_OFFSET(0x141E8960)
#define CLASS_1_27C8A73E3C6BD41F__CCTOR_OFFSET UNITYSDK_OFFSET(0x141E8B00)

inline static constexpr unsigned int Class_1_27C8A73E3C6BD41F_TypeDefinitionIndex = 50852;

class Class_1_27C8A73E3C6BD41F : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_27C8A73E3C6BD41F_TypeDefinitionIndex)->GetStaticField(0x81B0);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_27C8A73E3C6BD41F_TypeDefinitionIndex)->GetStaticField(0x81B4);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_27C8A73E3C6BD41F_TypeDefinitionIndex)->GetStaticField(0x81B8);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_27C8A73E3C6BD41F_TypeDefinitionIndex)->GetStaticField(0x81BC);
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
