#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA84BDB0)
#define RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA84BE00)
#define RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0xA84BE40)
#define RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_INIT_OFFSET UNITYSDK_OFFSET(0xA84BD60)
#define RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0xA84BE50)
#define RPG_GAMECORE_ADVENTUREPLAYERONSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA84BE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePlayerOnStage_TypeDefinitionIndex = 45504;

	class AdventurePlayerOnStage : public ::Class_1_9988289E7F8AA214
	{
	public:
		::System::UInt32 _EntityID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONSTAGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventurePlayerOnStage* Init(::System::UInt32 eid)
		{
			return ((::RPG::GameCore::AdventurePlayerOnStage*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_INIT_OFFSET))(this, eid);
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

		::System::Void set_EntityID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONSTAGE_SET_ENTITYID_OFFSET))(this, value);
		}
	};
}
