#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatAbilityConfig; }
namespace RPG::GameCore { class DiceCombatBossPersistentTipsConfig; }
namespace RPG::GameCore { class DiceCombatInsertAbilityConfig; }
namespace RPG::GameCore { class DiceCombatModifierConfig; }
namespace RPG::GameCore { class DiceCombatSkillAIEffectConfig; }
namespace RPG::GameCore { class DiceCombatSkillPreviewConfig; }

#define RPG_GAMECORE_DICECOMBATSKILLCONFIG_METHOD_2_F08447824247E7E9_OFFSET UNITYSDK_OFFSET(0x196AFD70)
#define RPG_GAMECORE_DICECOMBATSKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x196AFF80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatSkillConfig_TypeDefinitionIndex = 15348;

	class DiceCombatSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DiceCombatAbilityConfig* RootAbility; // 0x10
		::Il2CppArray<::RPG::GameCore::DiceCombatInsertAbilityConfig*>* InsertAbilitys; // 0x18
		::Il2CppArray<::RPG::GameCore::DiceCombatModifierConfig*>* Modifiers; // 0x20
		::RPG::GameCore::DiceCombatSkillPreviewConfig* PreviewOnRollFinish; // 0x28
		::RPG::GameCore::DiceCombatSkillPreviewConfig* PreviewOnSelectDice; // 0x30
		::RPG::GameCore::DiceCombatSkillAIEffectConfig* AIEffect; // 0x38
		::RPG::GameCore::DiceCombatBossPersistentTipsConfig* TryShowBossPersistentTips; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATSKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F08447824247E7E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatSkillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATSKILLCONFIG_METHOD_2_F08447824247E7E9_OFFSET))(a1, a2);
		}
	};
}
