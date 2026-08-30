#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE4ECBE0)
#define RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_GETONSTAGEENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4ECC70)
#define RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4ECC30)
#define RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0xE4ECCB0)
#define RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_GET_ONSTAGEENTITYID_OFFSET UNITYSDK_OFFSET(0xE4ECCD0)
#define RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_INIT_OFFSET UNITYSDK_OFFSET(0xE4ECB80)
#define RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0xE4ECCC0)
#define RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_SET_ONSTAGEENTITYID_OFFSET UNITYSDK_OFFSET(0xE4ECCE0)
#define RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xE4ECCF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePlayerOnUnstage_TypeDefinitionIndex = 56785;

	class AdventurePlayerOnUnstage : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::UInt32 _OnStageEntityID_k__BackingField; // 0x18
		::System::UInt32 _EntityID_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventurePlayerOnUnstage* Init(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::AdventurePlayerOnUnstage*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_INIT_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::System::UInt32 GetOnStageEntityRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_GETONSTAGEENTITYRUNTIMEID_OFFSET))(this);
		}

		::System::UInt32 get_EntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_GET_ENTITYID_OFFSET))(this);
		}

		::System::Void set_EntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_SET_ENTITYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_OnStageEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_GET_ONSTAGEENTITYID_OFFSET))(this);
		}

		::System::Void set_OnStageEntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONUNSTAGE_SET_ONSTAGEENTITYID_OFFSET))(this, a1);
		}
	};
}
