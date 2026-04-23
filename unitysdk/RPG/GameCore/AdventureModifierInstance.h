#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAbilityProperty.h"
#include "unitysdk/RPG/GameCore/AdventureBehaviorClampAlertLevel.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/AdventureModifierEvent.h"
#include "unitysdk/RPG/GameCore/AdventureModifierInstance_StackPropertySlot.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/BaseModifierInstance.h"
#include "unitysdk/RPG/GameCore/EffectMutexType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierDeathSource.h"
#include "unitysdk/RPG/GameCore/ModifierHitEffectStacking.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_43BD383C98B4C0C5_109;
class Class_1_5469D397DAE62876;
class Class_1_A2D8E5AB4B623162;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class AdventureModifierConfig; }
namespace RPG::GameCore { class AdventureModifierInitParams; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }
namespace RPG::GameCore { class GameComponentBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ADDADVFEATUREPARAM_OFFSET UNITYSDK_OFFSET(0xB588FF0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ADDGLOBALWEAKNESS_OFFSET UNITYSDK_OFFSET(0xB588E50)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ADDUNSTACKMODIFIER_OFFSET UNITYSDK_OFFSET(0xB588CC0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ATTACHEFFECT_OFFSET UNITYSDK_OFFSET(0xB585030)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_CONTAINSBEHAVIORFLAG_OFFSET UNITYSDK_OFFSET(0xB588800)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_DESTROY_OFFSET UNITYSDK_OFFSET(0xB587BF0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_DETACHEFFECT_OFFSET UNITYSDK_OFFSET(0xB5857E0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB587A30)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_EXECUTEEVENT_OFFSET UNITYSDK_OFFSET(0xB588440)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GENADVENTUREMODIFIERINSTANCEID_OFFSET UNITYSDK_OFFSET(0xB5879E0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GETADVFEATUREPARAM_OFFSET UNITYSDK_OFFSET(0xB5890B0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GETOWNERABILITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB5865F0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GETOWNER_OFFSET UNITYSDK_OFFSET(0xB587D40)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_CASTER_OFFSET UNITYSDK_OFFSET(0xB585710)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB589290)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_CURRENTLIFE_OFFSET UNITYSDK_OFFSET(0xB588B70)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_ISCOUNTDOWNAFTERBATTLE_OFFSET UNITYSDK_OFFSET(0xB589270)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB5891A0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_OVERRIDEALERTLEVEL_OFFSET UNITYSDK_OFFSET(0xB5892A0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_HASEVENT_OFFSET UNITYSDK_OFFSET(0xB588780)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ONACTIVATE_OFFSET UNITYSDK_OFFSET(0xB588310)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ONADDED_OFFSET UNITYSDK_OFFSET(0xB588590)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ONMODIFIERCASTERCHANGED_OFFSET UNITYSDK_OFFSET(0xB588600)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ONSTACK_OFFSET UNITYSDK_OFFSET(0xB5884E0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_OVERRIDEBEHAVIORFLAGPARAM_OFFSET UNITYSDK_OFFSET(0xB588F90)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_OVERRIDEONHITEFFECT_OFFSET UNITYSDK_OFFSET(0xB584F40)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_REATTACHEFFECTTARGET_OFFSET UNITYSDK_OFFSET(0xB585C00)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_REMOVEUNSTACKMODIFIER_OFFSET UNITYSDK_OFFSET(0xB588D80)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_SETMODIFIERCLIENTONLY_OFFSET UNITYSDK_OFFSET(0xB588C70)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_SET_CURRENTLIFE_OFFSET UNITYSDK_OFFSET(0xB587960)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB5891B0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_SET_OVERRIDEALERTLEVEL_OFFSET UNITYSDK_OFFSET(0xB5892B0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_STACKPROPERTY_OFFSET UNITYSDK_OFFSET(0xB588BD0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_TICK_OFFSET UNITYSDK_OFFSET(0xB588890)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_UNSTACK_OFFSET UNITYSDK_OFFSET(0xB588650)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__BINDBEHAVIORFLAGEFFECTS_OFFSET UNITYSDK_OFFSET(0xB586640)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xB587050)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__ONASYNCLOADEFFECTFINISH_OFFSET UNITYSDK_OFFSET(0xB586E70)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__ONMODIFIERDESTROY_OFFSET UNITYSDK_OFFSET(0xB587DA0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__POPSTACKEDPROPERTIES_OFFSET UNITYSDK_OFFSET(0xB5886A0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__SETUPSEQUENCE_OFFSET UNITYSDK_OFFSET(0xB587830)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__TRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0xB586B90)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__TRYATTACHMUTEXEFFECTS_OFFSET UNITYSDK_OFFSET(0xB585FC0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE___IFIXBASEPROXY_DESTROY_OFFSET UNITYSDK_OFFSET(0xB5892D0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5892C0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xB5892E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureModifierInstance_TypeDefinitionIndex = 50188;

	class AdventureModifierInstance : public ::RPG::GameCore::BaseModifierInstance
	{
	public:
		static ::System::UInt32* StaticGet_AdventureModifierInstanceCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AdventureModifierInstance_TypeDefinitionIndex)->GetStaticField(0xA430);
		}
		::RPG::GameCore::AdventureModifierConfig* _ConfigRef; // 0xA0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BindingAffectedEntities; // 0xA8
		::Class_3_E21F6DE9B7FA4D05* _ModifierTaskList; // 0xB0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureModifierBehaviorFlag, ::Class_1_43BD383C98B4C0C5_109*>* _FeatureParams; // 0xB8
		::System::Collections::Generic::List_1<::RPG::GameCore::AdventureModifierInstance_StackPropertySlot>* _StackPropertyList; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* _AsycLoadingEffects; // 0xC8
		::System::Collections::Generic::List_1<::RPG::GameCore::AdventureModifierInstance*>* _UnStackByModifierList; // 0xD0
		::Il2CppArray<::Class_3_E21F6DE9B7FA4D05*>* _EventSequenceArr; // 0xD8
		::RPG::GameCore::GameEntity* _SpecifiedCaster; // 0xE0
		::RPG::GameCore::AdventureAbilityComponent* _OwnerAbilityComponent; // 0xE8
		::System::Int32 _HitEffectOverride; // 0xF0
		::System::UInt32 _Level; // 0xF4
		::System::Nullable_1<::RPG::GameCore::AdventureBehaviorClampAlertLevel> _OverrideAlertLevel_k__BackingField; // 0xF8
		::RPG::GameCore::ModifierHitEffectStacking _HitEffectStacking; // 0x100
		::System::UInt32 ModifierInstanceID; // 0x104
		::System::Single _LifeLimitation; // 0x108
		::System::Single InitLifeTime; // 0x10C
		::System::UInt32 BuffID; // 0x110
		::System::Boolean IsClientOnly; // 0x114
		::System::Boolean _AddGlobalWeakness; // 0x115
		::System::UInt32 SkillSeqID; // 0x118
		::System::Single _LifeAccumulated; // 0x11C

		::System::Void _ctor(::System::String* sName, ::RPG::GameCore::AdventureModifierConfig* pConfig, ::RPG::GameCore::AdventureAbilityComponent* pOwner, ::Class_1_A2D8E5AB4B623162* pParentAbility, ::System::UInt32 buffID, ::RPG::GameCore::AdventureModifierInitParams* pInitParams, ::RPG::GameCore::GameEntity* specifiedCaster)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::AdventureModifierConfig*, ::RPG::GameCore::AdventureAbilityComponent*, ::Class_1_A2D8E5AB4B623162*, ::System::UInt32, ::RPG::GameCore::AdventureModifierInitParams*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__CTOR_OFFSET))(this, sName, pConfig, pOwner, pParentAbility, buffID, pInitParams, specifiedCaster);
		}

		::System::Void OverrideOnHitEffect(::System::String* strEffectPath, ::System::Int32 priority, ::System::Boolean useOverrideOffset, ::RPG::MVector3 overrideOffset, ::RPG::GameCore::ModifierHitEffectStacking stacking)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean, ::RPG::MVector3, ::RPG::GameCore::ModifierHitEffectStacking))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_OVERRIDEONHITEFFECT_OFFSET))(this, strEffectPath, priority, useOverrideOffset, overrideOffset, stacking);
		}

		::System::Void AttachEffect(::RPG::GameCore::GameEntity* pTarget, ::System::String* strEffectPath, ::System::String* strDynamicAttach, ::RPG::MVector3 vPositionOffset, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* flag, ::RPG::GameCore::EffectMutexType pMutexType, ::System::Single fMinMutexTime, ::System::Int32 iMaxMutexCount, ::System::Single delay, ::System::String* uniqueName)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*, ::RPG::MVector3, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*, ::RPG::GameCore::EffectMutexType, ::System::Single, ::System::Int32, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ATTACHEFFECT_OFFSET))(this, pTarget, strEffectPath, strDynamicAttach, vPositionOffset, flag, pMutexType, fMinMutexTime, iMaxMutexCount, delay, uniqueName);
		}

		::System::Void DetachEffect(::System::String* strEffectPath, ::RPG::GameCore::GameEntity* pTarget, ::System::Boolean bIsFadeOut)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_DETACHEFFECT_OFFSET))(this, strEffectPath, pTarget, bIsFadeOut);
		}

		::System::Void ReattachEffectTarget(::System::String* strEffectPath, ::RPG::GameCore::GameEntity* pTarget, ::System::Nullable_1<::RPG::MVector3> overridePositionOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::Nullable_1<::RPG::MVector3>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_REATTACHEFFECTTARGET_OFFSET))(this, strEffectPath, pTarget, overridePositionOffset);
		}

		::System::Void _TryAttachMutexEffects(::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* destroyEffList, ::System::Boolean replay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__TRYATTACHMUTEXEFFECTS_OFFSET))(this, destroyEffList, replay);
		}

		::System::Void _BindBehaviorFlagEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__BINDBEHAVIORFLAGEFFECTS_OFFSET))(this);
		}

		::System::Void _TriggerEffect(::RPG::GameCore::GameEntity* pTarget, ::System::String* strEffectPath, ::System::String* strDynamicAttach, ::RPG::MVector3 vPositionOffset, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* flag, ::RPG::GameCore::EffectMutexType pMutexType, ::System::Single fMinMutexTime, ::System::Int32 iMaxMutexCount, ::System::Single delay, ::System::String* uniqueName)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*, ::RPG::MVector3, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*, ::RPG::GameCore::EffectMutexType, ::System::Single, ::System::Int32, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__TRIGGEREFFECT_OFFSET))(this, pTarget, strEffectPath, strDynamicAttach, vPositionOffset, flag, pMutexType, fMinMutexTime, iMaxMutexCount, delay, uniqueName);
		}

		::System::Void _OnAsyncLoadEffectFinish(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* effectData, ::RPG::Client::MonoEffect* effectObject)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__ONASYNCLOADEFFECTFINISH_OFFSET))(this, effectData, effectObject);
		}

		::RPG::GameCore::GameComponentBase* GetOwnerAbilityComponent()
		{
			return ((::RPG::GameCore::GameComponentBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GETOWNERABILITYCOMPONENT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetOwner()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GETOWNER_OFFSET))(this);
		}

		::System::Void Destroy(::RPG::GameCore::ModifierDeathSource deathSource)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_DESTROY_OFFSET))(this, deathSource);
		}

		::System::Void OnActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ONACTIVATE_OFFSET))(this);
		}

		::System::Void OnAdded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ONADDED_OFFSET))(this);
		}

		::System::Void OnModifierCasterChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ONMODIFIERCASTERCHANGED_OFFSET))(this);
		}

		::System::Void OnStack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ONSTACK_OFFSET))(this);
		}

		::System::Void UnStack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_UNSTACK_OFFSET))(this);
		}

		::System::Boolean HasEvent(::RPG::GameCore::AdventureModifierEvent eEvent)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureModifierEvent))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_HASEVENT_OFFSET))(this, eEvent);
		}

		::System::Void ExecuteEvent(::RPG::GameCore::AdventureModifierEvent eEvent, ::Class_1_5469D397DAE62876* pParamData, ::System::Boolean bExecuteWhenModifierDestroyed)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierEvent, ::Class_1_5469D397DAE62876*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_EXECUTEEVENT_OFFSET))(this, eEvent, pParamData, bExecuteWhenModifierDestroyed);
		}

		::System::Boolean ContainsBehaviorFlag(::RPG::GameCore::AdventureModifierBehaviorFlag eFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_CONTAINSBEHAVIORFLAG_OFFSET))(this, eFlag);
		}

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_TICK_OFFSET))(this, deltaTime);
		}

		::System::Void StackProperty(::RPG::GameCore::AdventureAbilityProperty eProperty, ::RPG::GameCore::FixPoint fVal, ::RPG::GameCore::AdventureAbilityComponent* pTarget)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty, ::RPG::GameCore::FixPoint, ::RPG::GameCore::AdventureAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_STACKPROPERTY_OFFSET))(this, eProperty, fVal, pTarget);
		}

		::System::Void SetModifierClientOnly(::System::Boolean bIsClientOnly)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_SETMODIFIERCLIENTONLY_OFFSET))(this, bIsClientOnly);
		}

		::System::Void AddUnStackModifier(::RPG::GameCore::AdventureModifierInstance* pInstance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ADDUNSTACKMODIFIER_OFFSET))(this, pInstance);
		}

		::System::Void RemoveUnStackModifier(::RPG::GameCore::AdventureModifierInstance* pInstance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_REMOVEUNSTACKMODIFIER_OFFSET))(this, pInstance);
		}

		static ::System::UInt32 GenAdventureModifierInstanceID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GENADVENTUREMODIFIERINSTANCEID_OFFSET))();
		}

		::System::Void AddGlobalWeakness(::RPG::GameCore::AttackDamageType weakness, ::RPG::GameCore::MonsterRank minRank)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType, ::RPG::GameCore::MonsterRank))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ADDGLOBALWEAKNESS_OFFSET))(this, weakness, minRank);
		}

		::System::Void OverrideBehaviorFlagParam(::RPG::GameCore::AdventureBehaviorClampAlertLevel alertLevel)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureBehaviorClampAlertLevel))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_OVERRIDEBEHAVIORFLAGPARAM_OFFSET))(this, alertLevel);
		}

		::System::Void AddAdvFeatureParam(::RPG::GameCore::AdventureModifierBehaviorFlag flag, ::Class_1_43BD383C98B4C0C5_109* param)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag, ::Class_1_43BD383C98B4C0C5_109*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ADDADVFEATUREPARAM_OFFSET))(this, flag, param);
		}

		::Class_1_43BD383C98B4C0C5_109* GetAdvFeatureParam(::RPG::GameCore::AdventureModifierBehaviorFlag flag)
		{
			return ((::Class_1_43BD383C98B4C0C5_109*(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GETADVFEATUREPARAM_OFFSET))(this, flag);
		}

		::System::Void _OnModifierDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__ONMODIFIERDESTROY_OFFSET))(this);
		}

		::System::Void _SetupSequence(::RPG::GameCore::AdventureModifierEvent eEvt, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* pTaskArr)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierEvent, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__SETUPSEQUENCE_OFFSET))(this, eEvt, pTaskArr);
		}

		::System::Void _PopStackedProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__POPSTACKEDPROPERTIES_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_SET_LEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_IsCountDownAfterBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_ISCOUNTDOWNAFTERBATTLE_OFFSET))(this);
		}

		::RPG::GameCore::AdventureModifierConfig* get_Config()
		{
			return ((::RPG::GameCore::AdventureModifierConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_CONFIG_OFFSET))(this);
		}

		::System::Single get_CurrentLife()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_CURRENTLIFE_OFFSET))(this);
		}

		::System::Void set_CurrentLife(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_SET_CURRENTLIFE_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_Caster()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_CASTER_OFFSET))(this);
		}

		::System::Nullable_1<::RPG::GameCore::AdventureBehaviorClampAlertLevel> get_OverrideAlertLevel()
		{
			return ((::System::Nullable_1<::RPG::GameCore::AdventureBehaviorClampAlertLevel>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_OVERRIDEALERTLEVEL_OFFSET))(this);
		}

		::System::Void set_OverrideAlertLevel(::System::Nullable_1<::RPG::GameCore::AdventureBehaviorClampAlertLevel> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::GameCore::AdventureBehaviorClampAlertLevel>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_SET_OVERRIDEALERTLEVEL_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Destroy(::RPG::GameCore::ModifierDeathSource P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE___IFIXBASEPROXY_DESTROY_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
