#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_280;
namespace RPG::GameCore { class LittleGameAbilityConfig; }
namespace RPG::GameCore { class PixAirCastCondition; }

#define CLASS_1_D2C97E5E9F60802E__CTOR_OFFSET UNITYSDK_OFFSET(0x187E14C0)

inline static constexpr unsigned int Class_1_D2C97E5E9F60802E_TypeDefinitionIndex = 41071;

class Class_1_D2C97E5E9F60802E : public ::System::Object
{
public:
	::RPG::GameCore::LittleGameAbilityConfig* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_280* Field_1_1; // 0x18
	::RPG::GameCore::PixAirCastCondition* Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D2C97E5E9F60802E__CTOR_OFFSET))(this);
	}
};
