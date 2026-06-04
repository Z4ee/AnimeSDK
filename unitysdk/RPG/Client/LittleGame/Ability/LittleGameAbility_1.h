#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_260;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class LittleGameAbilityConfig; }
namespace RPG::GameCore { class TaskContext; }

namespace RPG::Client::LittleGame::Ability
{
	inline static constexpr unsigned int LittleGameAbility_1_TypeDefinitionIndex = 71886;

	template <typename TEntity>
	class LittleGameAbility_1 : public ::System::Object
	{
	public:
		TEntity _AbilityOwner_k__BackingField; // 0x0
		::RPG::GameCore::TaskContext* _TaskContext_k__BackingField; // 0x0
		::Class_3_07C3C4D2990C49EE* _SequenceComposite_k__BackingField; // 0x0
		::RPG::GameCore::LittleGameAbilityConfig* _Config_k__BackingField; // 0x0
		::System::UInt32 _SkillID_k__BackingField; // 0x0
	};
}
