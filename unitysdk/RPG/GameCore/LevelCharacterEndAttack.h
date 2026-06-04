#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERENDATTACK_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE3A6B0)
#define RPG_GAMECORE_LEVELCHARACTERENDATTACK_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE3A750)
#define RPG_GAMECORE_LEVELCHARACTERENDATTACK_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE3A700)
#define RPG_GAMECORE_LEVELCHARACTERENDATTACK_INIT_OFFSET UNITYSDK_OFFSET(0xCE3A660)
#define RPG_GAMECORE_LEVELCHARACTERENDATTACK__CTOR_OFFSET UNITYSDK_OFFSET(0xCE3A7A0)
#define RPG_GAMECORE_LEVELCHARACTERENDATTACK___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCE3A7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterEndAttack_TypeDefinitionIndex = 53031;

	class LevelCharacterEndAttack : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Attacker; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERENDATTACK__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterEndAttack* Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::LevelCharacterEndAttack*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERENDATTACK_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERENDATTACK_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERENDATTACK_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERENDATTACK_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERENDATTACK___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
