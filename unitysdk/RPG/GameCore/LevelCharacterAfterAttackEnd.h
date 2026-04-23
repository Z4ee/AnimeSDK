#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6CB5A0)
#define RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6CB640)
#define RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6CB5F0)
#define RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND_INIT_OFFSET UNITYSDK_OFFSET(0xB6CB550)
#define RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND__CTOR_OFFSET UNITYSDK_OFFSET(0xB6CB690)
#define RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xB6CB6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterAfterAttackEnd_TypeDefinitionIndex = 52335;

	class LevelCharacterAfterAttackEnd : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* Attacker; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterAfterAttackEnd* Init(::RPG::GameCore::GameEntity* pAttacker)
		{
			return ((::RPG::GameCore::LevelCharacterAfterAttackEnd*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND_INIT_OFFSET))(this, pAttacker);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
