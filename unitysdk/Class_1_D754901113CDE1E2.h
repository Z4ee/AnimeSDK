#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierState.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleInitPosition.h"
#include "unitysdk/RPG/GameCore/ChenLingSoldierScale.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D754901113CDE1E2__CTOR_OFFSET UNITYSDK_OFFSET(0x17EDE3D0)

inline static constexpr unsigned int Class_1_D754901113CDE1E2_TypeDefinitionIndex = 39526;

class Class_1_D754901113CDE1E2 : public ::System::Object
{
public:
	::RPG::GameCore::ChenLingSoldierScale Field_1_2; // 0x10
	::RPG::Client::LittleGame::ChenLing::ChenLingSoldierState Field_1_3; // 0x14
	::System::Boolean Field_1_5; // 0x18
	::System::UInt32 Field_1_1; // 0x1C
	::System::UInt32 Field_1_0; // 0x20
	::RPG::GameCore::ChenLingBattleInitPosition Field_1_4; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D754901113CDE1E2__CTOR_OFFSET))(this);
	}
};
