#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_LEVELCHARACTERMODIFYSHIELD_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA97EAC0)
#define RPG_GAMECORE_LEVELCHARACTERMODIFYSHIELD_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA97EA70)
#define RPG_GAMECORE_LEVELCHARACTERMODIFYSHIELD_INIT_OFFSET UNITYSDK_OFFSET(0xA97E9F0)
#define RPG_GAMECORE_LEVELCHARACTERMODIFYSHIELD__CTOR_OFFSET UNITYSDK_OFFSET(0xA97EB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterModifyShield_TypeDefinitionIndex = 45686;

	class LevelCharacterModifyShield : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::TaskContext* Context; // 0x18
		::RPG::GameCore::GameEntity* Target; // 0x20
		::RPG::GameCore::GameEntity* Caster; // 0x28
		::RPG::GameCore::FixPoint Shield; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERMODIFYSHIELD__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterModifyShield* Init(::RPG::GameCore::GameEntity* pCaster, ::RPG::GameCore::GameEntity* pTarget, ::RPG::GameCore::FixPoint fShield, ::RPG::GameCore::TaskContext* pContext)
		{
			return ((::RPG::GameCore::LevelCharacterModifyShield*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERMODIFYSHIELD_INIT_OFFSET))(this, pCaster, pTarget, fShield, pContext);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERMODIFYSHIELD_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERMODIFYSHIELD_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
