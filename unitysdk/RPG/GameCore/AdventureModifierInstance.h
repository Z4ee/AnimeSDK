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

class Class_1_43BD383C98B4C0C5_120;
class Class_1_5469D397DAE62876;
class Class_1_A2D8E5AB4B623162;
class Class_3_07C3C4D2990C49EE;
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

#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ADDADVFEATUREPARAM_OFFSET UNITYSDK_OFFSET(0xCCE7B40)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ADDGLOBALWEAKNESS_OFFSET UNITYSDK_OFFSET(0xCCE79A0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ADDUNSTACKMODIFIER_OFFSET UNITYSDK_OFFSET(0xCCBFBA0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ATTACHEFFECT_OFFSET UNITYSDK_OFFSET(0xCCE4700)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_CONTAINSBEHAVIORFLAG_OFFSET UNITYSDK_OFFSET(0xCCBAE20)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_DESTROY_OFFSET UNITYSDK_OFFSET(0xCCB8D60)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_DETACHEFFECT_OFFSET UNITYSDK_OFFSET(0xCCE4EE0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCCE6980)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_EXECUTEEVENT_OFFSET UNITYSDK_OFFSET(0xCCBAB60)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GENADVENTUREMODIFIERINSTANCEID_OFFSET UNITYSDK_OFFSET(0xCCE6930)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GETADVFEATUREPARAM_OFFSET UNITYSDK_OFFSET(0xCCE7C00)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GETOWNERABILITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCCE5DD0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GETOWNER_OFFSET UNITYSDK_OFFSET(0xCCE6B20)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_CASTER_OFFSET UNITYSDK_OFFSET(0xCCBAEB0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xCCE7D10)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_CURRENTLIFE_OFFSET UNITYSDK_OFFSET(0xCCB89F0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_ISCOUNTDOWNAFTERBATTLE_OFFSET UNITYSDK_OFFSET(0xCCE7CF0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xCCE7CE0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_OVERRIDEALERTLEVEL_OFFSET UNITYSDK_OFFSET(0xCCE7D20)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_HASEVENT_OFFSET UNITYSDK_OFFSET(0xCCE7500)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ONACTIVATE_OFFSET UNITYSDK_OFFSET(0xCCE7030)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ONADDED_OFFSET UNITYSDK_OFFSET(0xCCE72F0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ONMODIFIERCASTERCHANGED_OFFSET UNITYSDK_OFFSET(0xCCE7360)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ONSTACK_OFFSET UNITYSDK_OFFSET(0xCCE71D0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_OVERRIDEBEHAVIORFLAGPARAM_OFFSET UNITYSDK_OFFSET(0xCCE7AE0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_OVERRIDEONHITEFFECT_OFFSET UNITYSDK_OFFSET(0xCCE4610)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_REATTACHEFFECTTARGET_OFFSET UNITYSDK_OFFSET(0xCCE5390)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_REMOVEUNSTACKMODIFIER_OFFSET UNITYSDK_OFFSET(0xCCBFED0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_SETMODIFIERCLIENTONLY_OFFSET UNITYSDK_OFFSET(0xCCB8A50)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_SET_CURRENTLIFE_OFFSET UNITYSDK_OFFSET(0xCCB8970)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xCCB8AA0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_SET_OVERRIDEALERTLEVEL_OFFSET UNITYSDK_OFFSET(0xCCE7D30)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_STACKPROPERTY_OFFSET UNITYSDK_OFFSET(0xCCE78C0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_TICK_OFFSET UNITYSDK_OFFSET(0xCCE7570)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_UNSTACK_OFFSET UNITYSDK_OFFSET(0xCCE73B0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__BINDBEHAVIORFLAGEFFECTS_OFFSET UNITYSDK_OFFSET(0xCCE5E20)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xCCB9A30)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__ONASYNCLOADEFFECTFINISH_OFFSET UNITYSDK_OFFSET(0xCCE6630)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__ONMODIFIERDESTROY_OFFSET UNITYSDK_OFFSET(0xCCE6B80)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__POPSTACKEDPROPERTIES_OFFSET UNITYSDK_OFFSET(0xCCE7400)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__SETUPSEQUENCE_OFFSET UNITYSDK_OFFSET(0xCCE6810)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__TRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0xCCE6350)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__TRYATTACHMUTEXEFFECTS_OFFSET UNITYSDK_OFFSET(0xCCE5750)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE___IFIXBASEPROXY_DESTROY_OFFSET UNITYSDK_OFFSET(0xCCE7D50)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCCE7D40)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xCCE7D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureModifierInstance_TypeDefinitionIndex = 50855;

	class AdventureModifierInstance : public ::RPG::GameCore::BaseModifierInstance
	{
	public:
		static ::System::UInt32* StaticGet_AdventureModifierInstanceCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AdventureModifierInstance_TypeDefinitionIndex)->GetStaticField(0xB830);
		}
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureModifierBehaviorFlag, ::Class_1_43BD383C98B4C0C5_120*>* _FeatureParams; // 0xA0
		::Il2CppArray<::Class_3_07C3C4D2990C49EE*>* _EventSequenceArr; // 0xA8
		::RPG::GameCore::AdventureAbilityComponent* _OwnerAbilityComponent; // 0xB0
		::System::Collections::Generic::List_1<::RPG::GameCore::AdventureModifierInstance_StackPropertySlot>* _StackPropertyList; // 0xB8
		::RPG::GameCore::AdventureModifierConfig* _ConfigRef; // 0xC0
		::RPG::GameCore::GameEntity* _SpecifiedCaster; // 0xC8
		::Class_3_07C3C4D2990C49EE* _ModifierTaskList; // 0xD0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BindingAffectedEntities; // 0xD8
		::System::Collections::Generic::List_1<::RPG::GameCore::AdventureModifierInstance*>* _UnStackByModifierList; // 0xE0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* _AsycLoadingEffects; // 0xE8
		::System::UInt32 BuffID; // 0xF0
		::System::Nullable_1<::RPG::GameCore::AdventureBehaviorClampAlertLevel> _OverrideAlertLevel_k__BackingField; // 0xF4
		::System::Boolean _AddGlobalWeakness; // 0xFC
		::System::Boolean IsClientOnly; // 0xFD
		::System::Boolean ServerSynced; // 0xFE
		::System::Single _LifeAccumulated; // 0x100
		::System::Single InitLifeTime; // 0x104
		::System::Single _LifeLimitation; // 0x108
		::System::UInt32 _Level; // 0x10C
		::System::Int32 _HitEffectOverride; // 0x110
		::System::UInt32 ModifierInstanceID; // 0x114
		::System::UInt32 SkillSeqID; // 0x118
		::RPG::GameCore::ModifierHitEffectStacking _HitEffectStacking; // 0x11C

		::System::Void _ctor(::System::String* a1, ::RPG::GameCore::AdventureModifierConfig* a2, ::RPG::GameCore::AdventureAbilityComponent* a3, ::Class_1_A2D8E5AB4B623162* a4, ::System::UInt32 a5, ::RPG::GameCore::AdventureModifierInitParams* a6, ::RPG::GameCore::GameEntity* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::AdventureModifierConfig*, ::RPG::GameCore::AdventureAbilityComponent*, ::Class_1_A2D8E5AB4B623162*, ::System::UInt32, ::RPG::GameCore::AdventureModifierInitParams*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void OverrideOnHitEffect(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3, ::RPG::MVector3 a4, ::RPG::GameCore::ModifierHitEffectStacking a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean, ::RPG::MVector3, ::RPG::GameCore::ModifierHitEffectStacking))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_OVERRIDEONHITEFFECT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void AttachEffect(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::String* a3, ::RPG::MVector3 a4, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* a5, ::RPG::GameCore::EffectMutexType a6, ::System::Single a7, ::System::Int32 a8, ::System::Single a9, ::System::String* a10)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*, ::RPG::MVector3, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*, ::RPG::GameCore::EffectMutexType, ::System::Single, ::System::Int32, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ATTACHEFFECT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void DetachEffect(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_DETACHEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReattachEffectTarget(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::System::Nullable_1<::RPG::MVector3> a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::Nullable_1<::RPG::MVector3>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_REATTACHEFFECTTARGET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _TryAttachMutexEffects(::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::BaseModifierInstance_ModifierEffectData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__TRYATTACHMUTEXEFFECTS_OFFSET))(this, a1, a2);
		}

		::System::Void _BindBehaviorFlagEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__BINDBEHAVIORFLAGEFFECTS_OFFSET))(this);
		}

		::System::Void _TriggerEffect(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::String* a3, ::RPG::MVector3 a4, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* a5, ::RPG::GameCore::EffectMutexType a6, ::System::Single a7, ::System::Int32 a8, ::System::Single a9, ::System::String* a10)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*, ::RPG::MVector3, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*, ::RPG::GameCore::EffectMutexType, ::System::Single, ::System::Int32, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__TRIGGEREFFECT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void _OnAsyncLoadEffectFinish(::RPG::GameCore::BaseModifierInstance_ModifierEffectData* a1, ::RPG::Client::MonoEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseModifierInstance_ModifierEffectData*, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__ONASYNCLOADEFFECTFINISH_OFFSET))(this, a1, a2);
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

		::System::Void Destroy(::RPG::GameCore::ModifierDeathSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_DESTROY_OFFSET))(this, a1);
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

		::System::Boolean HasEvent(::RPG::GameCore::AdventureModifierEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureModifierEvent))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_HASEVENT_OFFSET))(this, a1);
		}

		::System::Void ExecuteEvent(::RPG::GameCore::AdventureModifierEvent a1, ::Class_1_5469D397DAE62876* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierEvent, ::Class_1_5469D397DAE62876*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_EXECUTEEVENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ContainsBehaviorFlag(::RPG::GameCore::AdventureModifierBehaviorFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_CONTAINSBEHAVIORFLAG_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_TICK_OFFSET))(this, a1);
		}

		::System::Void StackProperty(::RPG::GameCore::AdventureAbilityProperty a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::AdventureAbilityComponent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAbilityProperty, ::RPG::GameCore::FixPoint, ::RPG::GameCore::AdventureAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_STACKPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetModifierClientOnly(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_SETMODIFIERCLIENTONLY_OFFSET))(this, a1);
		}

		::System::Void AddUnStackModifier(::RPG::GameCore::AdventureModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ADDUNSTACKMODIFIER_OFFSET))(this, a1);
		}

		::System::Void RemoveUnStackModifier(::RPG::GameCore::AdventureModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_REMOVEUNSTACKMODIFIER_OFFSET))(this, a1);
		}

		static ::System::UInt32 GenAdventureModifierInstanceID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GENADVENTUREMODIFIERINSTANCEID_OFFSET))();
		}

		::System::Void AddGlobalWeakness(::RPG::GameCore::AttackDamageType a1, ::RPG::GameCore::MonsterRank a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType, ::RPG::GameCore::MonsterRank))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ADDGLOBALWEAKNESS_OFFSET))(this, a1, a2);
		}

		::System::Void OverrideBehaviorFlagParam(::RPG::GameCore::AdventureBehaviorClampAlertLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureBehaviorClampAlertLevel))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_OVERRIDEBEHAVIORFLAGPARAM_OFFSET))(this, a1);
		}

		::System::Void AddAdvFeatureParam(::RPG::GameCore::AdventureModifierBehaviorFlag a1, ::Class_1_43BD383C98B4C0C5_120* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag, ::Class_1_43BD383C98B4C0C5_120*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ADDADVFEATUREPARAM_OFFSET))(this, a1, a2);
		}

		::Class_1_43BD383C98B4C0C5_120* GetAdvFeatureParam(::RPG::GameCore::AdventureModifierBehaviorFlag a1)
		{
			return ((::Class_1_43BD383C98B4C0C5_120*(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GETADVFEATUREPARAM_OFFSET))(this, a1);
		}

		::System::Void _OnModifierDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__ONMODIFIERDESTROY_OFFSET))(this);
		}

		::System::Void _SetupSequence(::RPG::GameCore::AdventureModifierEvent a1, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierEvent, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__SETUPSEQUENCE_OFFSET))(this, a1, a2);
		}

		::System::Void _PopStackedProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__POPSTACKEDPROPERTIES_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_SET_LEVEL_OFFSET))(this, a1);
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

		::System::Void set_CurrentLife(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_SET_CURRENTLIFE_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_Caster()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_CASTER_OFFSET))(this);
		}

		::System::Nullable_1<::RPG::GameCore::AdventureBehaviorClampAlertLevel> get_OverrideAlertLevel()
		{
			return ((::System::Nullable_1<::RPG::GameCore::AdventureBehaviorClampAlertLevel>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_OVERRIDEALERTLEVEL_OFFSET))(this);
		}

		::System::Void set_OverrideAlertLevel(::System::Nullable_1<::RPG::GameCore::AdventureBehaviorClampAlertLevel> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::GameCore::AdventureBehaviorClampAlertLevel>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_SET_OVERRIDEALERTLEVEL_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Destroy(::RPG::GameCore::ModifierDeathSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE___IFIXBASEPROXY_DESTROY_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}
	};
}
