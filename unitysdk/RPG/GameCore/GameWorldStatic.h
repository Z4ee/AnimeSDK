#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }

#define RPG_GAMECORE_GAMEWORLDSTATIC_ISALLTEAMLIGHTENTITYDIED_OFFSET UNITYSDK_OFFSET(0xB6B3840)
#define RPG_GAMECORE_GAMEWORLDSTATIC_TRIGGERADVENTUREENTITYCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xB6B3AD0)
#define RPG_GAMECORE_GAMEWORLDSTATIC_TRIGGERADVENTUREGROUPCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xB6B3A40)
#define RPG_GAMECORE_GAMEWORLDSTATIC_TRIGGERCUSTOMSTRINGEVENT_OFFSET UNITYSDK_OFFSET(0xB6B39A0)
#define RPG_GAMECORE_GAMEWORLDSTATIC__CTOR_OFFSET UNITYSDK_OFFSET(0xB6B3C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameWorldStatic_TypeDefinitionIndex = 54462;

	class GameWorldStatic : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLDSTATIC__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsAllTeamLightEntityDied(::RPG::GameCore::GameWorld* pGameWorld)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLDSTATIC_ISALLTEAMLIGHTENTITYDIED_OFFSET))(pGameWorld);
		}

		static ::System::Void TriggerCustomStringEvent(::RPG::GameCore::GameWorld* pWorld, ::RPG::GameCore::GameEntity* pCastEntity, ::System::String* strContent)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLDSTATIC_TRIGGERCUSTOMSTRINGEVENT_OFFSET))(pWorld, pCastEntity, strContent);
		}

		static ::System::Void TriggerAdventureGroupCustomEvent(::RPG::GameCore::GameWorld* pWorld, ::RPG::GameCore::GameEntity* pCastEntity, ::System::String* strContent)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLDSTATIC_TRIGGERADVENTUREGROUPCUSTOMEVENT_OFFSET))(pWorld, pCastEntity, strContent);
		}

		static ::System::Void TriggerAdventureEntityCustomEvent(::RPG::GameCore::GameWorld* pWorld, ::RPG::GameCore::GameEntity* pCastEntity, ::System::String* strContent)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameWorld*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLDSTATIC_TRIGGERADVENTUREENTITYCUSTOMEVENT_OFFSET))(pWorld, pCastEntity, strContent);
		}
	};
}
