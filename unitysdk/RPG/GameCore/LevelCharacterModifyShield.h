#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_GAMECORE_LEVELCHARACTERMODIFYSHIELD_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE3AEF0)
#define RPG_GAMECORE_LEVELCHARACTERMODIFYSHIELD_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE3AEA0)
#define RPG_GAMECORE_LEVELCHARACTERMODIFYSHIELD_INIT_OFFSET UNITYSDK_OFFSET(0xCE3AE20)
#define RPG_GAMECORE_LEVELCHARACTERMODIFYSHIELD__CTOR_OFFSET UNITYSDK_OFFSET(0xCE3AF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterModifyShield_TypeDefinitionIndex = 53035;

	class LevelCharacterModifyShield : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18
		::RPG::GameCore::TaskContext* Context; // 0x20
		::RPG::GameCore::GameEntity* Caster; // 0x28
		::RPG::GameCore::FixPoint Shield; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERMODIFYSHIELD__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterModifyShield* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::TaskContext* a4)
		{
			return ((::RPG::GameCore::LevelCharacterModifyShield*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERMODIFYSHIELD_INIT_OFFSET))(this, a1, a2, a3, a4);
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
