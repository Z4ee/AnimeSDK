#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_ADVENTUREPLAYERONSTAGEBYSTORY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x15413C70)
#define RPG_GAMECORE_ADVENTUREPLAYERONSTAGEBYSTORY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x15413CC0)
#define RPG_GAMECORE_ADVENTUREPLAYERONSTAGEBYSTORY_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x15413D00)
#define RPG_GAMECORE_ADVENTUREPLAYERONSTAGEBYSTORY_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x15413D10)
#define RPG_GAMECORE_ADVENTUREPLAYERONSTAGEBYSTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x15413C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePlayerOnStageByStory_TypeDefinitionIndex = 54071;

	class AdventurePlayerOnStageByStory : public ::System::Object
	{
	public:
		::System::UInt32 _EntityID_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONSTAGEBYSTORY__CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONSTAGEBYSTORY_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONSTAGEBYSTORY_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::System::UInt32 get_EntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONSTAGEBYSTORY_GET_ENTITYID_OFFSET))(this);
		}

		::System::Void set_EntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERONSTAGEBYSTORY_SET_ENTITYID_OFFSET))(this, a1);
		}
	};
}
