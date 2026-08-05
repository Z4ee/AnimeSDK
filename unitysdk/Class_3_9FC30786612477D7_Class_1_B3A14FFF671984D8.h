#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_1115;
class Class_3_9FC30786612477D7;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_3_9FC30786612477D7_CLASS_1_B3A14FFF671984D8_METHOD_1_0F2138E056F9294A_OFFSET UNITYSDK_OFFSET(0x1479F910)
#define CLASS_3_9FC30786612477D7_CLASS_1_B3A14FFF671984D8_METHOD_1_DB3251D835DBE895_OFFSET UNITYSDK_OFFSET(0x1479FB00)
#define CLASS_3_9FC30786612477D7_CLASS_1_B3A14FFF671984D8__CTOR_OFFSET UNITYSDK_OFFSET(0x1479F900)

inline static constexpr unsigned int Class_3_9FC30786612477D7_Class_1_B3A14FFF671984D8_TypeDefinitionIndex = 83174;

class Class_3_9FC30786612477D7_Class_1_B3A14FFF671984D8 : public ::System::Object
{
public:
	::System::String* Field_1_6; // 0x10
	::MoleMole::Battle::Entity* Field_1_3; // 0x18
	::MoleMole::Battle::Entity* Field_1_7; // 0x20
	::Class_2_208CC9941471731A_1115* Field_1_2; // 0x28
	::Class_3_C93CC3D2C2AC4067* Field_1_5; // 0x30
	::Class_3_9FC30786612477D7* Field_1_0; // 0x38
	::System::Int32 Field_1_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9FC30786612477D7_CLASS_1_B3A14FFF671984D8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0F2138E056F9294A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9FC30786612477D7_CLASS_1_B3A14FFF671984D8_METHOD_1_0F2138E056F9294A_OFFSET))(this);
	}

	::System::Void Method_1_DB3251D835DBE895(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_9FC30786612477D7_CLASS_1_B3A14FFF671984D8_METHOD_1_DB3251D835DBE895_OFFSET))(this, a1);
	}
};
