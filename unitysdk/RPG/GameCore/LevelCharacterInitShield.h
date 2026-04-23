#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_LEVELCHARACTERINITSHIELD_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6CC6D0)
#define RPG_GAMECORE_LEVELCHARACTERINITSHIELD_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6CC680)
#define RPG_GAMECORE_LEVELCHARACTERINITSHIELD__CTOR_OFFSET UNITYSDK_OFFSET(0xB6CC660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterInitShield_TypeDefinitionIndex = 52339;

	class LevelCharacterInitShield : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Caster; // 0x10
		::RPG::GameCore::GameEntity* Target; // 0x18
		::RPG::GameCore::TaskContext* Context; // 0x20
		::RPG::GameCore::FixPoint Shield; // 0x28

		::System::Void _ctor(::RPG::GameCore::GameEntity* pCaster, ::RPG::GameCore::GameEntity* pTarget, ::RPG::GameCore::FixPoint fShield, ::RPG::GameCore::TaskContext* pContext)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERINITSHIELD__CTOR_OFFSET))(this, pCaster, pTarget, fShield, pContext);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERINITSHIELD_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERINITSHIELD_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
