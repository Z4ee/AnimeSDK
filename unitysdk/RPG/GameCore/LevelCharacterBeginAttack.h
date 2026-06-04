#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

class Class_1_843DD6330B22E422;
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERBEGINATTACK_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE39D10)
#define RPG_GAMECORE_LEVELCHARACTERBEGINATTACK_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE39DB0)
#define RPG_GAMECORE_LEVELCHARACTERBEGINATTACK_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE39D60)
#define RPG_GAMECORE_LEVELCHARACTERBEGINATTACK_INIT_OFFSET UNITYSDK_OFFSET(0xCE39CA0)
#define RPG_GAMECORE_LEVELCHARACTERBEGINATTACK__CTOR_OFFSET UNITYSDK_OFFSET(0xCE39E00)
#define RPG_GAMECORE_LEVELCHARACTERBEGINATTACK___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE39E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterBeginAttack_TypeDefinitionIndex = 53030;

	class LevelCharacterBeginAttack : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Attacker; // 0x18
		::Class_1_843DD6330B22E422* DamageData; // 0x20
		::RPG::GameCore::GameEntity* Defender; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBEGINATTACK__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterBeginAttack* Init(::Class_1_843DD6330B22E422* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::RPG::GameCore::LevelCharacterBeginAttack*(*)(::PVOID, ::Class_1_843DD6330B22E422*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERBEGINATTACK_INIT_OFFSET))(this, a1, a2, a3);
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
