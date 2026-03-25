#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELACTIONCOUNTACTIVE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA976570)
#define RPG_GAMECORE_LEVELACTIONCOUNTACTIVE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA976520)
#define RPG_GAMECORE_LEVELACTIONCOUNTACTIVE_INIT_OFFSET UNITYSDK_OFFSET(0xA9764D0)
#define RPG_GAMECORE_LEVELACTIONCOUNTACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0xA9765C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelActionCountActive_TypeDefinitionIndex = 45713;

	class LevelActionCountActive : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* ActiveEntity; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELACTIONCOUNTACTIVE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelActionCountActive* Init(::RPG::GameCore::GameEntity* active)
		{
			return ((::RPG::GameCore::LevelActionCountActive*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELACTIONCOUNTACTIVE_INIT_OFFSET))(this, active);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELACTIONCOUNTACTIVE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELACTIONCOUNTACTIVE_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
