#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELRANDOMCHANCETASKEVENT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6DEA60)
#define RPG_GAMECORE_LEVELRANDOMCHANCETASKEVENT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6DEA10)
#define RPG_GAMECORE_LEVELRANDOMCHANCETASKEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xB6DEA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelRandomChanceTaskEvent_TypeDefinitionIndex = 52351;

	class LevelRandomChanceTaskEvent : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* CasterEntity; // 0x10
		::System::String* LogComment; // 0x18
		::System::Single Chance; // 0x20

		::System::Void _ctor(::RPG::GameCore::GameEntity* pEntity, ::System::Single chance, ::System::String* log)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELRANDOMCHANCETASKEVENT__CTOR_OFFSET))(this, pEntity, chance, log);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELRANDOMCHANCETASKEVENT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELRANDOMCHANCETASKEVENT_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
