#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTURNACTIONPHASEBEGIN_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE69AAA0)
#define RPG_GAMECORE_LEVELTURNACTIONPHASEBEGIN_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE69AA50)
#define RPG_GAMECORE_LEVELTURNACTIONPHASEBEGIN_GET_ACTIVEENTITY_OFFSET UNITYSDK_OFFSET(0xE69AAF0)
#define RPG_GAMECORE_LEVELTURNACTIONPHASEBEGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xE69AA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnActionPhaseBegin_TypeDefinitionIndex = 56886;

	class LevelTurnActionPhaseBegin : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _ActiveEntity; // 0x10

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNACTIONPHASEBEGIN__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNACTIONPHASEBEGIN_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNACTIONPHASEBEGIN_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_ActiveEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNACTIONPHASEBEGIN_GET_ACTIVEENTITY_OFFSET))(this);
		}
	};
}
