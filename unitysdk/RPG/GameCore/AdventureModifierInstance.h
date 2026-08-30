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

class Class_1_43BD383C98B4C0C5_131;
class Class_1_5469D397DAE62876;
class Class_1_A2D8E5AB4B623162;
class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class AdventureModifierConfig; }
namespace RPG::GameCore { class AdventureModifierInitParams; }
namespace RPG::GameCore { class BaseModifierInstance_ModifierEffectData; }
namespace RPG::GameCore { class DynamicVector3; }
namespace RPG::GameCore { class GameComponentBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ADDADVFEATUREPARAM_OFFSET UNITYSDK_OFFSET(0xE4E45A0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ADDGLOBALWEAKNESS_OFFSET UNITYSDK_OFFSET(0xE4E4410)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ADDUNSTACKMODIFIER_OFFSET UNITYSDK_OFFSET(0xE4E41E0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ATTACHEFFECT_OFFSET UNITYSDK_OFFSET(0xE4DF8C0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_CONTAINSBEHAVIORFLAG_OFFSET UNITYSDK_OFFSET(0xE4E3C70)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_DESTROY_OFFSET UNITYSDK_OFFSET(0xE4E2F30)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_DETACHEFFECT_OFFSET UNITYSDK_OFFSET(0xE4E0190)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE4E2CA0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_EXECUTEEVENT_OFFSET UNITYSDK_OFFSET(0xE4E3830)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GENADVENTUREMODIFIERINSTANCEID_OFFSET UNITYSDK_OFFSET(0xE4E2C50)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GETADVFEATUREPARAM_OFFSET UNITYSDK_OFFSET(0xE4E4660)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GETOWNERABILITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xE4E1580)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GETOWNER_OFFSET UNITYSDK_OFFSET(0xE4E3070)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_CASTER_OFFSET UNITYSDK_OFFSET(0xE4E0130)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE4E4830)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_CURRENTLIFE_OFFSET UNITYSDK_OFFSET(0xE4E4050)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_ISCOUNTDOWNAFTERBATTLE_OFFSET UNITYSDK_OFFSET(0xE4E4810)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xE4E4740)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GET_OVERRIDEALERTLEVEL_OFFSET UNITYSDK_OFFSET(0xE4E4840)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_HASEVENT_OFFSET UNITYSDK_OFFSET(0xE4E3C00)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ONACTIVATE_OFFSET UNITYSDK_OFFSET(0xE4E3680)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ONADDED_OFFSET UNITYSDK_OFFSET(0xE4E39F0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ONMODIFIERCASTERCHANGED_OFFSET UNITYSDK_OFFSET(0xE4E3A60)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ONSTACK_OFFSET UNITYSDK_OFFSET(0xE4E38C0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_OVERRIDEBEHAVIORFLAGPARAM_OFFSET UNITYSDK_OFFSET(0xE4E4540)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_OVERRIDEONHITEFFECT_OFFSET UNITYSDK_OFFSET(0xE4DF7D0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_REATTACHEFFECTTARGET_OFFSET UNITYSDK_OFFSET(0xE4E0950)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_REMOVEUNSTACKMODIFIER_OFFSET UNITYSDK_OFFSET(0xE4E4300)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_SETMODIFIERCLIENTONLY_OFFSET UNITYSDK_OFFSET(0xE4E4190)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_SET_CURRENTLIFE_OFFSET UNITYSDK_OFFSET(0xE4E2BD0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xE4E4750)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_SET_OVERRIDEALERTLEVEL_OFFSET UNITYSDK_OFFSET(0xE4E4850)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_STACKPROPERTY_OFFSET UNITYSDK_OFFSET(0xE4E40B0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_TICK_OFFSET UNITYSDK_OFFSET(0xE4E3D00)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_UNSTACK_OFFSET UNITYSDK_OFFSET(0xE4E3AB0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__BINDBEHAVIORFLAGEFFECTS_OFFSET UNITYSDK_OFFSET(0xE4E1730)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xE4E22A0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__EVALUATEMVECTOR3_OFFSET UNITYSDK_OFFSET(0xE4E15D0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__ONASYNCLOADEFFECTFINISH_OFFSET UNITYSDK_OFFSET(0xE4E20F0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__ONMODIFIERDESTROY_OFFSET UNITYSDK_OFFSET(0xE4E30D0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__POPSTACKEDPROPERTIES_OFFSET UNITYSDK_OFFSET(0xE4E3B00)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__SETUPSEQUENCE_OFFSET UNITYSDK_OFFSET(0xE4E2AB0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__TRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0xE4E1D60)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__TRYATTACHMUTEXEFFECTS_OFFSET UNITYSDK_OFFSET(0xE4E0F20)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__TRYREMOVEASYNCLOADINGEFFECT_OFFSET UNITYSDK_OFFSET(0xE4E04C0)
#define RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__TRYUPDATEASYNCLOADINGEFFECTTARGET_OFFSET UNITYSDK_OFFSET(0xE4E0C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureModifierInstance_TypeDefinitionIndex = 54624;

	class AdventureModifierInstance : public ::RPG::GameCore::BaseModifierInstance
	{
	public:
		static ::System::UInt32* StaticGet_AdventureModifierInstanceCount()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(AdventureModifierInstance_TypeDefinitionIndex)->GetStaticField(0x140B0);
		}
		::Il2CppArray<::Class_3_07C3C4D2990C49EE*>* _EventSequenceArr; // 0xA0
		::RPG::GameCore::GameEntity* _SpecifiedCaster; // 0xA8
		::RPG::GameCore::AdventureAbilityComponent* _OwnerAbilityComponent; // 0xB0
		::Class_3_07C3C4D2990C49EE* _ModifierTaskList; // 0xB8
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BindingAffectedEntities; // 0xC0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AdventureModifierBehaviorFlag, ::Class_1_43BD383C98B4C0C5_131*>* _FeatureParams; // 0xC8
		::RPG::GameCore::AdventureModifierConfig* _ConfigRef; // 0xD0
		::System::Collections::Generic::List_1<::RPG::GameCore::AdventureModifierInstance_StackPropertySlot>* _StackPropertyList; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* _AsycLoadingEffects; // 0xE0
		::System::Collections::Generic::List_1<::RPG::GameCore::AdventureModifierInstance*>* _UnStackByModifierList; // 0xE8
		::System::Int32 _HitEffectOverride; // 0xF0
		::System::Nullable_1<::RPG::GameCore::AdventureBehaviorClampAlertLevel> _OverrideAlertLevel_k__BackingField; // 0xF4
		::RPG::GameCore::ModifierHitEffectStacking _HitEffectStacking; // 0xFC
		::System::Boolean ServerSynced; // 0x100
		::System::Boolean IsClientOnly; // 0x101
		::System::Boolean _AddGlobalWeakness; // 0x102
		::System::UInt32 _Level; // 0x104
		::System::Single _LifeAccumulated; // 0x108
		::System::UInt32 SkillSeqID; // 0x10C
		::System::UInt32 ModifierInstanceID; // 0x110
		::System::UInt32 BuffID; // 0x114
		::System::Single InitLifeTime; // 0x118
		::System::Single _LifeLimitation; // 0x11C

		::System::Void _ctor(::System::String* a1, ::RPG::GameCore::AdventureModifierConfig* a2, ::RPG::GameCore::AdventureAbilityComponent* a3, ::Class_1_A2D8E5AB4B623162* a4, ::System::UInt32 a5, ::RPG::GameCore::AdventureModifierInitParams* a6, ::RPG::GameCore::GameEntity* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::AdventureModifierConfig*, ::RPG::GameCore::AdventureAbilityComponent*, ::Class_1_A2D8E5AB4B623162*, ::System::UInt32, ::RPG::GameCore::AdventureModifierInitParams*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void OverrideOnHitEffect(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3, ::RPG::MVector3 a4, ::RPG::GameCore::ModifierHitEffectStacking a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean, ::RPG::MVector3, ::RPG::GameCore::ModifierHitEffectStacking))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_OVERRIDEONHITEFFECT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void AttachEffect(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::String* a3, ::RPG::MVector3 a4, ::RPG::MVector3 a5, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* a6, ::RPG::GameCore::EffectMutexType a7, ::System::Single a8, ::System::Int32 a9, ::System::Single a10, ::System::String* a11)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*, ::RPG::MVector3, ::RPG::MVector3, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*, ::RPG::GameCore::EffectMutexType, ::System::Single, ::System::Int32, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ATTACHEFFECT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
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

		::RPG::MVector3 _EvaluateMVector3(::RPG::GameCore::DynamicVector3* a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::GameCore::DynamicVector3*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__EVALUATEMVECTOR3_OFFSET))(this, a1);
		}

		::System::Void _BindBehaviorFlagEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__BINDBEHAVIORFLAGEFFECTS_OFFSET))(this);
		}

		::System::Void _TriggerEffect(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::String* a3, ::RPG::MVector3 a4, ::RPG::MVector3 a5, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* a6, ::RPG::GameCore::EffectMutexType a7, ::System::Single a8, ::System::Int32 a9, ::System::Single a10, ::System::String* a11)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::String*, ::RPG::MVector3, ::RPG::MVector3, ::Il2CppArray<::RPG::GameCore::MonoEffectFlag>*, ::RPG::GameCore::EffectMutexType, ::System::Single, ::System::Int32, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__TRIGGEREFFECT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Boolean _TryRemoveAsyncLoadingEffect(::System::String* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__TRYREMOVEASYNCLOADINGEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void _TryUpdateAsyncLoadingEffectTarget(::System::String* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE__TRYUPDATEASYNCLOADINGEFFECTTARGET_OFFSET))(this, a1, a2);
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

		::System::Void AddAdvFeatureParam(::RPG::GameCore::AdventureModifierBehaviorFlag a1, ::Class_1_43BD383C98B4C0C5_131* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag, ::Class_1_43BD383C98B4C0C5_131*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_ADDADVFEATUREPARAM_OFFSET))(this, a1, a2);
		}

		::Class_1_43BD383C98B4C0C5_131* GetAdvFeatureParam(::RPG::GameCore::AdventureModifierBehaviorFlag a1)
		{
			return ((::Class_1_43BD383C98B4C0C5_131*(*)(::PVOID, ::RPG::GameCore::AdventureModifierBehaviorFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINSTANCE_GETADVFEATUREPARAM_OFFSET))(this, a1);
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
	};
}
