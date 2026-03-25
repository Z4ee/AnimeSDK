#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xA97DB00)
#define RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA97DBA0)
#define RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA97DB50)
#define RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE_INIT_1_OFFSET UNITYSDK_OFFSET(0xA97DA80)
#define RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xA97D9F0)
#define RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA97DBF0)
#define RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA97DC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterBreakStateChange_TypeDefinitionIndex = 45696;

	class LevelCharacterBreakStateChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x18
		::RPG::GameCore::GameEntity* AttackerEntity; // 0x20
		::System::Boolean IsRedStance; // 0x28
		::System::Boolean IsBreak; // 0x29
		::RPG::GameCore::AttackDamageType StanceDamageType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterBreakStateChange* Init(::RPG::GameCore::GameEntity* pEntity, ::RPG::GameCore::GameEntity* pAttackerEntity, ::System::Boolean bIsBreak, ::RPG::GameCore::AttackDamageType stanceDamageType, ::System::Boolean isRedStance)
		{
			return ((::RPG::GameCore::LevelCharacterBreakStateChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::RPG::GameCore::AttackDamageType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE_INIT_OFFSET))(this, pEntity, pAttackerEntity, bIsBreak, stanceDamageType, isRedStance);
		}

		::RPG::GameCore::LevelCharacterBreakStateChange* Init_1(::RPG::GameCore::GameEntity* pEntity, ::System::Boolean bIsBreak, ::RPG::GameCore::AttackDamageType stanceDamageType, ::System::Boolean isRedStance)
		{
			return ((::RPG::GameCore::LevelCharacterBreakStateChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::RPG::GameCore::AttackDamageType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE_INIT_1_OFFSET))(this, pEntity, bIsBreak, stanceDamageType, isRedStance);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBREAKSTATECHANGE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
