#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierState.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleInitPosition.h"
#include "unitysdk/RPG/GameCore/ChenLingSoldierScale.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D754901113CDE1E2__CTOR_OFFSET UNITYSDK_OFFSET(0x169E7B20)

inline static constexpr unsigned int Class_1_D754901113CDE1E2_TypeDefinitionIndex = 33725;

class Class_1_D754901113CDE1E2 : public ::System::Object
{
public:
	::System::Boolean Field_1_5; // 0x10
	::System::UInt32 Field_1_0; // 0x14
	::RPG::GameCore::ChenLingSoldierScale Field_1_2; // 0x18
	::RPG::Client::LittleGame::ChenLing::ChenLingSoldierState Field_1_3; // 0x1C
	::RPG::GameCore::ChenLingBattleInitPosition Field_1_4; // 0x20
	::System::UInt32 Field_1_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D754901113CDE1E2__CTOR_OFFSET))(this);
	}
};
