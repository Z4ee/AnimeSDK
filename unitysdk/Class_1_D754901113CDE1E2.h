#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierState.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleInitPosition.h"
#include "unitysdk/RPG/GameCore/ChenLingSoldierScale.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_D754901113CDE1E2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C52E540)

inline static constexpr unsigned int Class_1_D754901113CDE1E2_TypeDefinitionIndex = 42124;

class Class_1_D754901113CDE1E2 : public ::System::Object
{
public:
	::System::UInt32 GJKEMDINKGO; // 0x10
	::RPG::GameCore::ChenLingSoldierScale NEMDKBKDFDN; // 0x14
	::RPG::Client::LittleGame::ChenLing::ChenLingSoldierState MEPFOEEGBEA; // 0x18
	::RPG::GameCore::ChenLingBattleInitPosition LDDBFJDDNJO; // 0x1C
	::System::UInt32 BHDDBJBGENI; // 0x20
	::System::Boolean HFINPNHFENI; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D754901113CDE1E2__CTOR_OFFSET))(this);
	}
};
