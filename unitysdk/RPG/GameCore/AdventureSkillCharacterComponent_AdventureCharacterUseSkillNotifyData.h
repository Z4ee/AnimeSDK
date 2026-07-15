#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillAbortReason.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ADVENTURECHARACTERUSESKILLNOTIFYDATA_RESET_OFFSET UNITYSDK_OFFSET(0x154149E0)
#define RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ADVENTURECHARACTERUSESKILLNOTIFYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15414C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureSkillCharacterComponent_AdventureCharacterUseSkillNotifyData_TypeDefinitionIndex = 54323;

	class AdventureSkillCharacterComponent_AdventureCharacterUseSkillNotifyData : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Caster; // 0x10
		::RPG::GameCore::GameEntity* Target; // 0x18
		::RPG::GameCore::AdventureSkillType Slot; // 0x20
		::System::Int32 SkillIndex; // 0x24
		::RPG::GameCore::AdventureSkillAbortReason AbortReason; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ADVENTURECHARACTERUSESKILLNOTIFYDATA__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLCHARACTERCOMPONENT_ADVENTURECHARACTERUSESKILLNOTIFYDATA_RESET_OFFSET))(this);
		}
	};
}
