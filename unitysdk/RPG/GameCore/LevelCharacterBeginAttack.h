#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

class Class_1_256D9F63CEA2C6FD;
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERBEGINATTACK_CLEAR_OFFSET UNITYSDK_OFFSET(0xA97D880)
#define RPG_GAMECORE_LEVELCHARACTERBEGINATTACK_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA97D920)
#define RPG_GAMECORE_LEVELCHARACTERBEGINATTACK_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA97D8D0)
#define RPG_GAMECORE_LEVELCHARACTERBEGINATTACK_INIT_OFFSET UNITYSDK_OFFSET(0xA97D810)
#define RPG_GAMECORE_LEVELCHARACTERBEGINATTACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA97D970)
#define RPG_GAMECORE_LEVELCHARACTERBEGINATTACK___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA97D980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterBeginAttack_TypeDefinitionIndex = 45681;

	class LevelCharacterBeginAttack : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* Attacker; // 0x18
		::RPG::GameCore::GameEntity* Defender; // 0x20
		::Class_1_256D9F63CEA2C6FD* DamageData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBEGINATTACK__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterBeginAttack* Init(::Class_1_256D9F63CEA2C6FD* damageData, ::RPG::GameCore::GameEntity* attacker, ::RPG::GameCore::GameEntity* defender)
		{
			return ((::RPG::GameCore::LevelCharacterBeginAttack*(*)(::PVOID, ::Class_1_256D9F63CEA2C6FD*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBEGINATTACK_INIT_OFFSET))(this, damageData, attacker, defender);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBEGINATTACK_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBEGINATTACK_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBEGINATTACK_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBEGINATTACK___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
