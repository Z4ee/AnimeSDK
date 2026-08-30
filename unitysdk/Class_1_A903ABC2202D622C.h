#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/LittleGameAbilityAttributeModifierType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A903ABC2202D622C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE04DE0)

inline static constexpr unsigned int Class_1_A903ABC2202D622C_TypeDefinitionIndex = 40414;

class Class_1_A903ABC2202D622C : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint MNDFOPKBHKP; // 0x10
	::RPG::Client::LittleGame::LittleGameAbilityAttributeModifierType JMNJLFACCLM; // 0x18
	::System::Int32 EHDGNHHPNMK; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A903ABC2202D622C__CTOR_OFFSET))(this);
	}
};
