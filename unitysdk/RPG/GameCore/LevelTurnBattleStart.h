#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_LEVELTURNBATTLESTART_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6E0710)
#define RPG_GAMECORE_LEVELTURNBATTLESTART_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6E06C0)
#define RPG_GAMECORE_LEVELTURNBATTLESTART__CTOR_OFFSET UNITYSDK_OFFSET(0xB6E06B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnBattleStart_TypeDefinitionIndex = 52293;

	class LevelTurnBattleStart : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBATTLESTART__CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBATTLESTART_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNBATTLESTART_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
