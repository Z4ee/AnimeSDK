#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }

#define RPG_GAMECORE_GAMEWORLDSTATIC_ISALLTEAMLIGHTENTITYDIED_OFFSET UNITYSDK_OFFSET(0x18439000)
#define RPG_GAMECORE_GAMEWORLDSTATIC_TRIGGERADVENTUREENTITYCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x18439280)
#define RPG_GAMECORE_GAMEWORLDSTATIC_TRIGGERADVENTUREGROUPCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x184391F0)
#define RPG_GAMECORE_GAMEWORLDSTATIC_TRIGGERCUSTOMSTRINGEVENT_OFFSET UNITYSDK_OFFSET(0x18439160)
#define RPG_GAMECORE_GAMEWORLDSTATIC__CTOR_OFFSET UNITYSDK_OFFSET(0x18439400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameWorldStatic_TypeDefinitionIndex = 59206;

	class GameWorldStatic : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLDSTATIC__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsAllTeamLightEntityDied(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLDSTATIC_ISALLTEAMLIGHTENTITYDIED_OFFSET))(a1);
		}

		static ::System::Void TriggerCustomStringEvent(::RPG::GameCore::GameWorld* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLDSTATIC_TRIGGERCUSTOMSTRINGEVENT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void TriggerAdventureGroupCustomEvent(::RPG::GameCore::GameWorld* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLDSTATIC_TRIGGERADVENTUREGROUPCUSTOMEVENT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void TriggerAdventureEntityCustomEvent(::RPG::GameCore::GameWorld* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLDSTATIC_TRIGGERADVENTUREENTITYCUSTOMEVENT_OFFSET))(a1, a2, a3);
		}
	};
}
