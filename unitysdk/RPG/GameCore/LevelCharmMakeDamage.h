#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARMMAKEDAMAGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6CD440)
#define RPG_GAMECORE_LEVELCHARMMAKEDAMAGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6CD4E0)
#define RPG_GAMECORE_LEVELCHARMMAKEDAMAGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6CD490)
#define RPG_GAMECORE_LEVELCHARMMAKEDAMAGE_INIT_OFFSET UNITYSDK_OFFSET(0xB6CD3E0)
#define RPG_GAMECORE_LEVELCHARMMAKEDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB6CD530)
#define RPG_GAMECORE_LEVELCHARMMAKEDAMAGE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6CD540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharmMakeDamage_TypeDefinitionIndex = 52287;

	class LevelCharmMakeDamage : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* CharmAttack; // 0x18
		::RPG::GameCore::GameEntity* CharmTarget; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARMMAKEDAMAGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharmMakeDamage* Init(::RPG::GameCore::GameEntity* pAttacker, ::RPG::GameCore::GameEntity* pTarget)
		{
			return ((::RPG::GameCore::LevelCharmMakeDamage*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARMMAKEDAMAGE_INIT_OFFSET))(this, pAttacker, pTarget);
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

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARMMAKEDAMAGE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
