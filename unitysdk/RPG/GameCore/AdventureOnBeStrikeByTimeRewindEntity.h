#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_CLEAR_OFFSET UNITYSDK_OFFSET(0xE4EB290)
#define RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE4EB360)
#define RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4EB310)
#define RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_INIT_OFFSET UNITYSDK_OFFSET(0xE4EB230)
#define RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0xE4EB3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureOnBeStrikeByTimeRewindEntity_TypeDefinitionIndex = 56829;

	class AdventureOnBeStrikeByTimeRewindEntity : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* BeStrikeEntity; // 0x18
		::RPG::GameCore::GameEntity* SourceTimeRewindEntity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureOnBeStrikeByTimeRewindEntity* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::AdventureOnBeStrikeByTimeRewindEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
