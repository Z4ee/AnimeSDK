#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARMMAKEDAMAGE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BDF1830)
#define RPG_GAMECORE_LEVELCHARMMAKEDAMAGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BDF18D0)
#define RPG_GAMECORE_LEVELCHARMMAKEDAMAGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BDF1880)
#define RPG_GAMECORE_LEVELCHARMMAKEDAMAGE_INIT_OFFSET UNITYSDK_OFFSET(0x1BDF17D0)
#define RPG_GAMECORE_LEVELCHARMMAKEDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDF1920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharmMakeDamage_TypeDefinitionIndex = 54197;

	class LevelCharmMakeDamage : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* CharmAttack; // 0x18
		::RPG::GameCore::GameEntity* CharmTarget; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARMMAKEDAMAGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharmMakeDamage* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::LevelCharmMakeDamage*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARMMAKEDAMAGE_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARMMAKEDAMAGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARMMAKEDAMAGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARMMAKEDAMAGE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
