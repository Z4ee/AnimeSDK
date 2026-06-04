#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/ModifierConfig.h"
#include "unitysdk/RPG/GameCore/ModifierLifeStepMoment.h"
#include "unitysdk/RPG/GameCore/ModifierUIPosition.h"
#include "unitysdk/RPG/GameCore/ModifierWorking.h"
#include "unitysdk/RPG/GameCore/SkillTargetType.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AbilityPropertyRangeGroup; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicValueRangeCallback; }
namespace RPG::GameCore { class DynamicValueRangeGroup; }
namespace RPG::GameCore { class ModifierAffectedPreshowConfig; }
namespace RPG::GameCore { class ModifierCreateEntityPreshowConfig; }
namespace RPG::GameCore { class ModifierStancePreshowConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TurnBasedModifierAdditionConfig; }
namespace RPG::GameCore { class TurnBasedModifierCallbackConfig; }
namespace RPG::GameCore { class TurnBasedModifierCallbackPriority; }
namespace RPG::GameCore { class TurnBasedModifierUIConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_TURNBASEDMODIFIERCONFIG_CHECKBEHAVIORFLAGLISTCONTAINS_OFFSET UNITYSDK_OFFSET(0x19E23960)
#define RPG_GAMECORE_TURNBASEDMODIFIERCONFIG_CONTAINSBEHAVIORFLAG_1_OFFSET UNITYSDK_OFFSET(0x19E23B40)
#define RPG_GAMECORE_TURNBASEDMODIFIERCONFIG_CONTAINSBEHAVIORFLAG_2_OFFSET UNITYSDK_OFFSET(0x19E23CB0)
#define RPG_GAMECORE_TURNBASEDMODIFIERCONFIG_CONTAINSBEHAVIORFLAG_OFFSET UNITYSDK_OFFSET(0x19E23A50)
#define RPG_GAMECORE_TURNBASEDMODIFIERCONFIG_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x19E22CC0)
#define RPG_GAMECORE_TURNBASEDMODIFIERCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19E22B60)
#define RPG_GAMECORE_TURNBASEDMODIFIERCONFIG_GETCALLBACKINFO_OFFSET UNITYSDK_OFFSET(0x19E23E30)
#define RPG_GAMECORE_TURNBASEDMODIFIERCONFIG_GETCALLBACK_OFFSET UNITYSDK_OFFSET(0x19E23E80)
#define RPG_GAMECORE_TURNBASEDMODIFIERCONFIG_GETUIEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x19E23F30)
#define RPG_GAMECORE_TURNBASEDMODIFIERCONFIG_GETUIMINIEFFECTPATH_OFFSET UNITYSDK_OFFSET(0x19E23F50)
#define RPG_GAMECORE_TURNBASEDMODIFIERCONFIG_GETUIPOSITION_OFFSET UNITYSDK_OFFSET(0x19E23F70)
#define RPG_GAMECORE_TURNBASEDMODIFIERCONFIG_HASCALLBACK_OFFSET UNITYSDK_OFFSET(0x19E23EE0)
#define RPG_GAMECORE_TURNBASEDMODIFIERCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E23F80)
#define RPG_GAMECORE_TURNBASEDMODIFIERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19E22C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedModifierConfig_TypeDefinitionIndex = 17325;

	class TurnBasedModifierConfig : public ::RPG::GameCore::ModifierConfig
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet__ModifierEventNameList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TurnBasedModifierConfig_TypeDefinitionIndex)->GetStaticField(0x7BB0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__ModifierEventPriorityNameList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TurnBasedModifierConfig_TypeDefinitionIndex)->GetStaticField(0x7BB8);
		}
		static ::System::Boolean* StaticGet_EnableInlineCheck()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TurnBasedModifierConfig_TypeDefinitionIndex)->GetStaticField(0x36C0);
		}
		::System::Int32 LifeTime; // 0x38
		::System::Int32 MaxLayer; // 0x3C
		::RPG::GameCore::DynamicFloat* LayerAddWhenStack; // 0x40
		::RPG::GameCore::ModifierWorking WorkingTurn; // 0x48
		::RPG::GameCore::ModifierLifeStepMoment LifeStepMoment; // 0x4C
		::RPG::GameCore::DynamicFloat* PerformTime; // 0x50
		::RPG::GameCore::TargetEvaluator* TargetSelectRestrict; // 0x58
		::RPG::GameCore::SkillTargetType TargetSelectRestrictType; // 0x60
		::System::Boolean ApplyBehaviorFlagBindEffects; // 0x64
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* BehaviorFlagList; // 0x68
		::System::Boolean UseSnapshotEntity; // 0x70
		::RPG::GameCore::TurnBasedModifierUIConfig* UIConfig; // 0x78
		::System::String* EffectPriority; // 0x80
		::RPG::GameCore::ModifierAffectedPreshowConfig* ModifierAffectedPreshowConfig; // 0x88
		::RPG::GameCore::ModifierCreateEntityPreshowConfig* ModifierCreateEntityPreshowConfig; // 0x90
		::RPG::GameCore::ModifierStancePreshowConfig* ModifierStancePreshowConfig; // 0x98
		::Il2CppArray<::RPG::GameCore::DynamicValueRangeGroup*>* OnDynamicValueChange; // 0xA0
		::Il2CppArray<::RPG::GameCore::AbilityPropertyRangeGroup*>* OnAbilityPropertyChange; // 0xA8
		::Il2CppArray<::RPG::GameCore::DynamicValueRangeCallback*>* OnElationPointChange; // 0xB0
		::Il2CppArray<::RPG::GameCore::TurnBasedModifierCallbackConfig*>* _CallbackList; // 0xB8
		::Il2CppArray<::RPG::GameCore::TurnBasedModifierCallbackPriority*>* _PriorityList; // 0xC0
		::RPG::GameCore::TurnBasedModifierAdditionConfig* AdditionConfig; // 0xC8
		::System::Boolean IsGlobalModifier; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERCONFIG__CCTOR_OFFSET))();
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TurnBasedModifierConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TurnBasedModifierConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TurnBasedModifierConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERCONFIG_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

		::System::Boolean CheckBehaviorFlagListContains(::RPG::GameCore::ModifierBehaviorFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ModifierBehaviorFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERCONFIG_CHECKBEHAVIORFLAGLISTCONTAINS_OFFSET))(this, a1);
		}

		::System::Boolean ContainsBehaviorFlag(::RPG::GameCore::ModifierBehaviorFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ModifierBehaviorFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERCONFIG_CONTAINSBEHAVIORFLAG_OFFSET))(this, a1);
		}

		::System::Boolean ContainsBehaviorFlag_1(::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERCONFIG_CONTAINSBEHAVIORFLAG_1_OFFSET))(this, a1);
		}

		::System::Boolean ContainsBehaviorFlag_2(::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorFlag>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorFlag>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERCONFIG_CONTAINSBEHAVIORFLAG_2_OFFSET))(this, a1);
		}

		::RPG::GameCore::TurnBasedModifierCallbackConfig* GetCallbackInfo(::RPG::GameCore::TurnBasedModifierEvent a1)
		{
			return ((::RPG::GameCore::TurnBasedModifierCallbackConfig*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierEvent))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERCONFIG_GETCALLBACKINFO_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::TaskConfig*>* GetCallback(::RPG::GameCore::TurnBasedModifierEvent a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::TaskConfig*>*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierEvent))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERCONFIG_GETCALLBACK_OFFSET))(this, a1);
		}

		::System::Boolean HasCallback(::RPG::GameCore::TurnBasedModifierEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierEvent))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERCONFIG_HASCALLBACK_OFFSET))(this, a1);
		}

		::System::String* GetUIEffectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERCONFIG_GETUIEFFECTPATH_OFFSET))(this);
		}

		::System::String* GetUIMiniEffectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERCONFIG_GETUIMINIEFFECTPATH_OFFSET))(this);
		}

		::RPG::GameCore::ModifierUIPosition GetUIPosition()
		{
			return ((::RPG::GameCore::ModifierUIPosition(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDMODIFIERCONFIG_GETUIPOSITION_OFFSET))(this);
		}
	};
}
