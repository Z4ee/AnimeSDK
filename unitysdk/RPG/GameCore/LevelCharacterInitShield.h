#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_LEVELCHARACTERINITSHIELD_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1BDF0CE0)
#define RPG_GAMECORE_LEVELCHARACTERINITSHIELD_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BDF0C90)
#define RPG_GAMECORE_LEVELCHARACTERINITSHIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDF0C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterInitShield_TypeDefinitionIndex = 54249;

	class LevelCharacterInitShield : public ::System::Object
	{
	public:
		::RPG::GameCore::TaskContext* Context; // 0x10
		::RPG::GameCore::GameEntity* Caster; // 0x18
		::RPG::GameCore::GameEntity* Target; // 0x20
		::RPG::GameCore::FixPoint Shield; // 0x28

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::TaskContext* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERINITSHIELD__CTOR_OFFSET))(this, a1, a2, a3, a4);
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
