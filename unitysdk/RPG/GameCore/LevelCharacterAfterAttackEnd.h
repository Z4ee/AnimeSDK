#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND_CLEAR_OFFSET UNITYSDK_OFFSET(0x18451EF0)
#define RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x18451F90)
#define RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x18451F40)
#define RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND_INIT_OFFSET UNITYSDK_OFFSET(0x18451EA0)
#define RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND__CTOR_OFFSET UNITYSDK_OFFSET(0x18451FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterAfterAttackEnd_TypeDefinitionIndex = 56966;

	class LevelCharacterAfterAttackEnd : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Attacker; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterAfterAttackEnd* Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::LevelCharacterAfterAttackEnd*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND_INIT_OFFSET))(this, a1);
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
	};
}
