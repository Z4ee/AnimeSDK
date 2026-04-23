#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AITargetSelectorType.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/ChildSkillUILayoutType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SkillActualAttackerType.h"
#include "unitysdk/RPG/GameCore/SkillAutoLockType.h"
#include "unitysdk/RPG/GameCore/SkillReadyDisplayOption.h"
#include "unitysdk/RPG/GameCore/SkillResPreloadRule.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/SkillUseType.h"
#include "unitysdk/RPG/GameCore/TeamFormationType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActionDelayPreshowConfig; }
namespace RPG::GameCore { class ComplexSkillAIConfig; }
namespace RPG::GameCore { class FakeSkillConfig; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class SkillConditionPreshowConfig; }
namespace RPG::GameCore { class SkillCustomFormationConfig; }
namespace RPG::GameCore { class SkillCustomReadyConfig; }
namespace RPG::GameCore { class SkillParamMapping; }
namespace RPG::GameCore { class SkillTargetConfig; }
namespace RPG::GameCore { class SkillUIConfig; }
namespace RPG::GameCore { class UsableConditionConfig; }
namespace RPG::GameCore { class VCameraConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SKILLCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18E6F740)
#define RPG_GAMECORE_SKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18E71310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillConfig_TypeDefinitionIndex = 17283;

	class SkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::SkillType SkillType; // 0x18
		::RPG::GameCore::SkillUseType UseType; // 0x1C
		::Il2CppArray<::RPG::GameCore::JsonEnum*>* Tags; // 0x20
		::System::Int32 AutoSelectPriority; // 0x28
		::System::Boolean ActivateAfterRevive; // 0x2C
		::RPG::GameCore::AITargetSelectorType DefaultTargetSelector; // 0x30
		::System::Boolean AlwaysDoAutoLock; // 0x34
		::RPG::GameCore::SkillAutoLockType AutoLockType; // 0x38
		::RPG::GameCore::ComplexSkillAIConfig* AutoLockBySource; // 0x40
		::System::Int32 InitCoolDown; // 0x48
		::System::Int32 CoolDown; // 0x4C
		::System::Int32 MaxCastTimes; // 0x50
		::RPG::GameCore::SkillSPProgressType ProgressDisplayType; // 0x54
		::RPG::GameCore::FixPoint SPNeed; // 0x58
		::RPG::GameCore::FixPoint SPAdd; // 0x60
		::RPG::GameCore::FixPoint BPNeed; // 0x68
		::RPG::GameCore::FixPoint BPAdd; // 0x70
		::RPG::GameCore::SkillTargetConfig* TargetInfo; // 0x78
		::System::Boolean UseReadyTransitAnim; // 0x80
		::System::Boolean SkillNameHUD; // 0x81
		::System::Boolean CanOverkill; // 0x82
		::System::String* ReadyAnimState; // 0x88
		::System::Single ReadyAnimWaitTime; // 0x90
		::System::String* ReadyEffectPath; // 0x98
		::RPG::GameCore::VCameraConfig* CameraConfig; // 0xA0
		::RPG::GameCore::VCameraConfig* CameraConfigAdded; // 0xA8
		::System::String* CameraConfigAddedReferenceKey; // 0xB0
		::System::String* CameraConfigReferenceKey; // 0xB8
		::Il2CppArray<::RPG::GameCore::SkillCustomReadyConfig*>* CustomReadyConfigs; // 0xC0
		::System::Boolean UseTwoCameraConfigOnSelect; // 0xC8
		::System::Boolean UseTwoCameraConfigOnEnterReady; // 0xC9
		::RPG::GameCore::SkillReadyDisplayOption ReadyDisplayOption; // 0xCA
		::System::Boolean IsCancelSkill; // 0xCC
		::RPG::GameCore::TeamFormationType FormationType; // 0xD0
		::System::String* TeamFormationConfigTemplateName; // 0xD8
		::RPG::GameCore::SkillCustomFormationConfig* CustomFormationConfig; // 0xE0
		::System::String* BoostSkill; // 0xE8
		::System::String* EntryAbility; // 0xF0
		::System::String* PrepareAbility; // 0xF8
		::System::Boolean WaitPrepareFinish; // 0x100
		::Il2CppArray<::RPG::GameCore::SkillParamMapping*>* ParaMapping; // 0x108
		::RPG::GameCore::FixPoint DelayRatio; // 0x110
		::Il2CppArray<::RPG::GameCore::SkillConditionPreshowConfig*>* CondPreshowConfigList; // 0x118
		::RPG::GameCore::ActionDelayPreshowConfig* ActionDelayPreshowConfig; // 0x120
		::System::Boolean CanTraversalByComplexSkillAIWhenNotInSlot; // 0x128
		::RPG::GameCore::ComplexSkillAIConfig* ComplexSkillAIPreCheck; // 0x130
		::RPG::GameCore::ComplexSkillAIConfig* ComplexSkillAI; // 0x138
		::System::String* AIUltraSkillPriority; // 0x140
		::Il2CppArray<::System::String*>* UsefulModifierList; // 0x148
		::System::Boolean CanBeInterrupted; // 0x150
		::System::Boolean ImmunizeProtect; // 0x151
		::System::Boolean Skill1To2AlwaysCut; // 0x152
		::System::Boolean Skill2To1AlwaysCut; // 0x153
		::System::Boolean IsSilence; // 0x154
		::System::Boolean CanUseInInsertAction; // 0x155
		::System::Boolean AutoCostSpNeed; // 0x156
		::Il2CppArray<::RPG::GameCore::UsableConditionConfig*>* UsableConditions; // 0x158
		::RPG::GameCore::PredicateConfig* VisibleCondition; // 0x160
		::Il2CppArray<::System::String*>* ChildSkillList; // 0x168
		::System::Boolean AutoStandbyOnSkillFinish; // 0x170
		::RPG::GameCore::FakeSkillConfig* FakeSkillConfig; // 0x178
		::System::Boolean IsLinkSkill; // 0x180
		::System::Boolean IsSkillInsertable; // 0x181
		::System::Boolean ForceSkillPanelActive; // 0x182
		::RPG::GameCore::PredicateConfig* InsertCondition; // 0x188
		::System::Boolean HoverSelectTarget; // 0x190
		::RPG::GameCore::SkillResPreloadRule PreloadRule; // 0x194
		::System::Boolean UseInputCache; // 0x198
		::System::Single InputCacheTime; // 0x19C
		::RPG::GameCore::BoolEx HasCutin; // 0x1A0
		::System::Boolean DisableHeadLookAt; // 0x1A4
		::System::Boolean EqualSplitDamageAndStancePreshow; // 0x1A5
		::System::String* PendingInsertAbilityPriority; // 0x1A8
		::RPG::GameCore::SkillUIConfig* UIConfig; // 0x1B0
		::RPG::GameCore::ChildSkillUILayoutType ChildSkillUILayout; // 0x1B8
		::RPG::GameCore::SkillActualAttackerType SkillActualAttacker; // 0x1BC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SkillConfig*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLCONFIG_FROMBINARY_OFFSET))(array, val);
		}
	};
}
