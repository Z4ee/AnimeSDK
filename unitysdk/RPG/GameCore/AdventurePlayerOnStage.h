#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x19406180)
#define RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x194061D0)
#define RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x19406210)
#define RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_INIT_OFFSET UNITYSDK_OFFSET(0x19406130)
#define RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x19406220)
#define RPG_GAMECORE_ADVENTUREPLAYERONSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19406230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePlayerOnStage_TypeDefinitionIndex = 56784;

	class AdventurePlayerOnStage : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::UInt32 _EntityID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONSTAGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventurePlayerOnStage* Init(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AdventurePlayerOnStage*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_INIT_OFFSET))(this, a1);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::System::UInt32 get_EntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_GET_ENTITYID_OFFSET))(this);
		}

		::System::Void set_EntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_SET_ENTITYID_OFFSET))(this, a1);
		}
	};
}
