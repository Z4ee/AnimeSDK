#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELLISTENSTANCECOUNTDOWN_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BE015B0)
#define RPG_GAMECORE_LEVELLISTENSTANCECOUNTDOWN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BE01650)
#define RPG_GAMECORE_LEVELLISTENSTANCECOUNTDOWN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BE01600)
#define RPG_GAMECORE_LEVELLISTENSTANCECOUNTDOWN_INIT_OFFSET UNITYSDK_OFFSET(0x1BE01540)
#define RPG_GAMECORE_LEVELLISTENSTANCECOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE016A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelListenStanceCountDown_TypeDefinitionIndex = 54242;

	class LevelListenStanceCountDown : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18
		::RPG::GameCore::GameEntity* Source; // 0x20
		::System::Boolean IsExtraStance; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLISTENSTANCECOUNTDOWN__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelListenStanceCountDown* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
		{
			return ((::RPG::GameCore::LevelListenStanceCountDown*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLISTENSTANCECOUNTDOWN_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLISTENSTANCECOUNTDOWN_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLISTENSTANCECOUNTDOWN_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLISTENSTANCECOUNTDOWN_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
