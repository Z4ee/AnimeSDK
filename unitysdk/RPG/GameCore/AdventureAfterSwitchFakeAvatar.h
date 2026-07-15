#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR_CLEAR_OFFSET UNITYSDK_OFFSET(0x153E2280)
#define RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x153E22D0)
#define RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x153E2320)
#define RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR_GET_LEADERENTITY_OFFSET UNITYSDK_OFFSET(0x153E2370)
#define RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR_INIT_OFFSET UNITYSDK_OFFSET(0x153E2230)
#define RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR_SET_LEADERENTITY_OFFSET UNITYSDK_OFFSET(0x153E2380)
#define RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x153E2390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAfterSwitchFakeAvatar_TypeDefinitionIndex = 54070;

	class AdventureAfterSwitchFakeAvatar : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* _LeaderEntity_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureAfterSwitchFakeAvatar* Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::AdventureAfterSwitchFakeAvatar*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR_CLEAR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_LeaderEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR_GET_LEADERENTITY_OFFSET))(this);
		}

		::System::Void set_LeaderEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERSWITCHFAKEAVATAR_SET_LEADERENTITY_OFFSET))(this, a1);
		}
	};
}
