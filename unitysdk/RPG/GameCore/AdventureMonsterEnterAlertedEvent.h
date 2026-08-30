#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTUREMONSTERENTERALERTEDEVENT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE4E4920)
#define RPG_GAMECORE_ADVENTUREMONSTERENTERALERTEDEVENT_GETMONSTER_OFFSET UNITYSDK_OFFSET(0xE4E4970)
#define RPG_GAMECORE_ADVENTUREMONSTERENTERALERTEDEVENT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4E48D0)
#define RPG_GAMECORE_ADVENTUREMONSTERENTERALERTEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xE4E48C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureMonsterEnterAlertedEvent_TypeDefinitionIndex = 56795;

	class AdventureMonsterEnterAlertedEvent : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _Monster; // 0x10

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERENTERALERTEDEVENT__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERENTERALERTEDEVENT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERENTERALERTEDEVENT_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetMonster()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERENTERALERTEDEVENT_GETMONSTER_OFFSET))(this);
		}
	};
}
