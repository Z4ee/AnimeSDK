#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityInstanceState.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/ModifierDeathSource.h"
#include "unitysdk/RPG/GameCore/ModifierStackingFlag.h"
#include "unitysdk/RPG/GameCore/ModifierStateFilter.h"
#include "unitysdk/RPG/GameCore/PauseAbilityReason.h"
#include "unitysdk/RPG/GameCore/UseAbilityOption.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_A5536A8EDCDEB606.h"
#include "unitysdk/Struct_2_BB220E16FE645E7C.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_343;
class Class_0_16E4307DCC419505_345;
class Class_1_0AD6129525BF5F86;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class Array; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define RPG_GAMECORE_ABILITYCOMPONENT_ADDABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0xB50B240)
#define RPG_GAMECORE_ABILITYCOMPONENT_ADDMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xB50C2E0)
#define RPG_GAMECORE_ABILITYCOMPONENT_CHECKTOREMOVECHILDMODIFIEROFABILITY_OFFSET UNITYSDK_OFFSET(0xB50E110)
#define RPG_GAMECORE_ABILITYCOMPONENT_CLEARALLMODIFIERINSTANCEWITHPREDICATE_OFFSET UNITYSDK_OFFSET(0xB50C770)
#define RPG_GAMECORE_ABILITYCOMPONENT_CLEARALLMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xB50C480)
#define RPG_GAMECORE_ABILITYCOMPONENT_CONTAINALIVEHITSHAPE_OFFSET UNITYSDK_OFFSET(0xB50C240)
#define RPG_GAMECORE_ABILITYCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB50A460)
#define RPG_GAMECORE_ABILITYCOMPONENT_ENDALLPROJECTILE_OFFSET UNITYSDK_OFFSET(0xB50BB20)
#define RPG_GAMECORE_ABILITYCOMPONENT_FINDABILITYINSTANCE_1_OFFSET UNITYSDK_OFFSET(0xB50B4A0)
#define RPG_GAMECORE_ABILITYCOMPONENT_FINDABILITYINSTANCE_2_OFFSET UNITYSDK_OFFSET(0xB50B720)
#define RPG_GAMECORE_ABILITYCOMPONENT_FINDABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0xB50B380)
#define RPG_GAMECORE_ABILITYCOMPONENT_FINDMODIFIERINSTANCES_1_OFFSET UNITYSDK_OFFSET(0xB50D470)
#define RPG_GAMECORE_ABILITYCOMPONENT_FINDMODIFIERINSTANCES_OFFSET UNITYSDK_OFFSET(0xB50D260)
#define RPG_GAMECORE_ABILITYCOMPONENT_FINDMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xB50CC60)
#define RPG_GAMECORE_ABILITYCOMPONENT_FINDUSABLEABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0xB50DC80)
#define RPG_GAMECORE_ABILITYCOMPONENT_FOREACHMODIFIER_1_OFFSET UNITYSDK_OFFSET(0xB50CAC0)
#define RPG_GAMECORE_ABILITYCOMPONENT_FOREACHMODIFIER_OFFSET UNITYSDK_OFFSET(0xB50CA20)
#define RPG_GAMECORE_ABILITYCOMPONENT_GETABILITYINSTANCEBYINDEX_OFFSET UNITYSDK_OFFSET(0xB50B310)
#define RPG_GAMECORE_ABILITYCOMPONENT_GETABILITYLIST_OFFSET UNITYSDK_OFFSET(0xB50C200)
#define RPG_GAMECORE_ABILITYCOMPONENT_GETINDEXBYMODIFIER_OFFSET UNITYSDK_OFFSET(0xB50C9A0)
#define RPG_GAMECORE_ABILITYCOMPONENT_GETMODIFIERBYINDEX_OFFSET UNITYSDK_OFFSET(0xB50C930)
#define RPG_GAMECORE_ABILITYCOMPONENT_GET_ABILITYCOUNT_OFFSET UNITYSDK_OFFSET(0xB50E370)
#define RPG_GAMECORE_ABILITYCOMPONENT_GET_ABILITYLIST_OFFSET UNITYSDK_OFFSET(0xB50E420)
#define RPG_GAMECORE_ABILITYCOMPONENT_GET_CURRENTMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xB50D120)
#define RPG_GAMECORE_ABILITYCOMPONENT_GET_LASTFINISHPROJECTILEPOS_OFFSET UNITYSDK_OFFSET(0xB50E430)
#define RPG_GAMECORE_ABILITYCOMPONENT_GET_LASTFINISHPROJECTILEVELOCITY_OFFSET UNITYSDK_OFFSET(0xB50E4C0)
#define RPG_GAMECORE_ABILITYCOMPONENT_GET_MODIFIERCOUNT_OFFSET UNITYSDK_OFFSET(0xB50E3C0)
#define RPG_GAMECORE_ABILITYCOMPONENT_GET_MODIFIERLIST_OFFSET UNITYSDK_OFFSET(0xB50E410)
#define RPG_GAMECORE_ABILITYCOMPONENT_GET_PAUSEABILITY_OFFSET UNITYSDK_OFFSET(0xB50B060)
#define RPG_GAMECORE_ABILITYCOMPONENT_HASMODIFIER_OFFSET UNITYSDK_OFFSET(0xB50D8C0)
#define RPG_GAMECORE_ABILITYCOMPONENT_HITTEST_OFFSET UNITYSDK_OFFSET(0xB50D9F0)
#define RPG_GAMECORE_ABILITYCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB50A3F0)
#define RPG_GAMECORE_ABILITYCOMPONENT_INTERRUPTALLPROJECTILES_OFFSET UNITYSDK_OFFSET(0xB50BC80)
#define RPG_GAMECORE_ABILITYCOMPONENT_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xB50AB00)
#define RPG_GAMECORE_ABILITYCOMPONENT_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xB50AC00)
#define RPG_GAMECORE_ABILITYCOMPONENT_PROCCESSPENDINGDISPOSEMODIFIERS_OFFSET UNITYSDK_OFFSET(0xB50A6D0)
#define RPG_GAMECORE_ABILITYCOMPONENT_REINITALLABILITIES_OFFSET UNITYSDK_OFFSET(0xB50A850)
#define RPG_GAMECORE_ABILITYCOMPONENT_REMOVEABILITY_1_OFFSET UNITYSDK_OFFSET(0xB50BFD0)
#define RPG_GAMECORE_ABILITYCOMPONENT_REMOVEABILITY_OFFSET UNITYSDK_OFFSET(0xB50BDE0)
#define RPG_GAMECORE_ABILITYCOMPONENT_REMOVEDIRTYMODIFIERS_OFFSET UNITYSDK_OFFSET(0xB50B070)
#define RPG_GAMECORE_ABILITYCOMPONENT_RESUMEPAUSEABILITY_OFFSET UNITYSDK_OFFSET(0xB50E320)
#define RPG_GAMECORE_ABILITYCOMPONENT_SETPAUSEABILITY_OFFSET UNITYSDK_OFFSET(0xB50E2D0)
#define RPG_GAMECORE_ABILITYCOMPONENT_SET_LASTFINISHPROJECTILEPOS_OFFSET UNITYSDK_OFFSET(0xB50E4B0)
#define RPG_GAMECORE_ABILITYCOMPONENT_SET_LASTFINISHPROJECTILEVELOCITY_OFFSET UNITYSDK_OFFSET(0xB50E540)
#define RPG_GAMECORE_ABILITYCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xB50AC40)
#define RPG_GAMECORE_ABILITYCOMPONENT_USEABILITYBYINSTANCE_OFFSET UNITYSDK_OFFSET(0xB50DE60)
#define RPG_GAMECORE_ABILITYCOMPONENT_USEABILITY_OFFSET UNITYSDK_OFFSET(0xB50E010)
#define RPG_GAMECORE_ABILITYCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xB50E550)
#define RPG_GAMECORE_ABILITYCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xB50A340)
#define RPG_GAMECORE_ABILITYCOMPONENT__ISMODIFIERMATCHSEARCH_OFFSET UNITYSDK_OFFSET(0xB50CDE0)
#define RPG_GAMECORE_ABILITYCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xB50E570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityComponent_TypeDefinitionIndex = 52399;

	class AbilityComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__TickAbilityListMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(AbilityComponent_TypeDefinitionIndex)->GetStaticField(0x3E720);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__RemoveDirtyModifiersMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(AbilityComponent_TypeDefinitionIndex)->GetStaticField(0x3E728);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__TickModifierListModifiersMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(AbilityComponent_TypeDefinitionIndex)->GetStaticField(0x3E730);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__TickProjectileGroupsMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(AbilityComponent_TypeDefinitionIndex)->GetStaticField(0x3E738);
		}
		::Class_1_0AD6129525BF5F86* LastFinishProjectile; // 0x18
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_343*>* _PendingDisposeMdfList; // 0x20
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_345*>* _AbilityList; // 0x28
		::System::Collections::Generic::Stack_1<::RPG::GameCore::GameEntityList*>* CachedTargetList; // 0x30
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_343*>* _ModifierList; // 0x38
		::System::Boolean _AbilityCanInit; // 0x40
		::UnityEngine::Vector3 _LastFinishProjectilePos; // 0x44
		::RPG::MVector3 HitBoxCenter; // 0x50
		::UnityEngine::Vector3 _LastFinishProjectileVelocity; // 0x5C
		::Struct_2_A5536A8EDCDEB606 HitBox; // 0x68
		::System::Int32 _PauseAbilityReason; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT__CCTOR_OFFSET))();
		}

		::System::Void InitComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_INITCOMPONENT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void ReinitAllAbilities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_REINITALLABILITIES_OFFSET))(this);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void ProccessPendingDisposeModifiers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_PROCCESSPENDINGDISPOSEMODIFIERS_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void AddAbilityInstance(::Class_0_16E4307DCC419505_345* pInstance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_345*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_ADDABILITYINSTANCE_OFFSET))(this, pInstance);
		}

		::Class_0_16E4307DCC419505_345* GetAbilityInstanceByIndex(::System::Int32 idx)
		{
			return ((::Class_0_16E4307DCC419505_345*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GETABILITYINSTANCEBYINDEX_OFFSET))(this, idx);
		}

		::Class_0_16E4307DCC419505_345* FindAbilityInstance(::System::String* strAbilityName)
		{
			return ((::Class_0_16E4307DCC419505_345*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FINDABILITYINSTANCE_OFFSET))(this, strAbilityName);
		}

		::Class_0_16E4307DCC419505_345* FindAbilityInstance_1(::RPG::GameCore::JsonEnum* eTag)
		{
			return ((::Class_0_16E4307DCC419505_345*(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FINDABILITYINSTANCE_1_OFFSET))(this, eTag);
		}

		::Class_0_16E4307DCC419505_345* FindAbilityInstance_2(::RPG::GameCore::JsonEnum* eTag, ::RPG::GameCore::AbilityInstanceState stateFilter)
		{
			return ((::Class_0_16E4307DCC419505_345*(*)(::PVOID, ::RPG::GameCore::JsonEnum*, ::RPG::GameCore::AbilityInstanceState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FINDABILITYINSTANCE_2_OFFSET))(this, eTag, stateFilter);
		}

		::System::Void EndAllProjectile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_ENDALLPROJECTILE_OFFSET))(this);
		}

		::System::Void InterruptAllProjectiles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_INTERRUPTALLPROJECTILES_OFFSET))(this);
		}

		::System::Boolean RemoveAbility(::System::String* strAbilityName, ::System::Boolean destroyChildModifiers)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_REMOVEABILITY_OFFSET))(this, strAbilityName, destroyChildModifiers);
		}

		::System::Boolean RemoveAbility_1(::Class_0_16E4307DCC419505_345* pAbilityInst, ::System::Boolean destroyChildModifiers)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_345*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_REMOVEABILITY_1_OFFSET))(this, pAbilityInst, destroyChildModifiers);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_345*>* GetAbilityList()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_345*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GETABILITYLIST_OFFSET))(this);
		}

		::System::Boolean ContainAliveHitShape()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_CONTAINALIVEHITSHAPE_OFFSET))(this);
		}

		::System::Void AddModifierInstance(::Class_0_16E4307DCC419505_343* pModifierInstance, ::System::Boolean activate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_343*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_ADDMODIFIERINSTANCE_OFFSET))(this, pModifierInstance, activate);
		}

		::System::Void ClearAllModifierInstance(::RPG::GameCore::ModifierDeathSource deathSource)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_CLEARALLMODIFIERINSTANCE_OFFSET))(this, deathSource);
		}

		::System::Void ClearAllModifierInstanceWithPredicate(::System::Predicate_1<::Class_0_16E4307DCC419505_343*>* checkToRemove, ::RPG::GameCore::ModifierDeathSource deathSource)
		{
			return ((::System::Void(*)(::PVOID, ::System::Predicate_1<::Class_0_16E4307DCC419505_343*>*, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_CLEARALLMODIFIERINSTANCEWITHPREDICATE_OFFSET))(this, checkToRemove, deathSource);
		}

		::Class_0_16E4307DCC419505_343* GetModifierByIndex(::System::Int32 nIndex)
		{
			return ((::Class_0_16E4307DCC419505_343*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GETMODIFIERBYINDEX_OFFSET))(this, nIndex);
		}

		::System::Int32 GetIndexByModifier(::Class_0_16E4307DCC419505_343* pModifierInstance)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_343*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GETINDEXBYMODIFIER_OFFSET))(this, pModifierInstance);
		}

		::System::Void ForeachModifier(::System::Action_1<::Class_0_16E4307DCC419505_343*>* loopBodyAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_0_16E4307DCC419505_343*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FOREACHMODIFIER_OFFSET))(this, loopBodyAction);
		}

		::System::Void ForeachModifier_1(::System::String* sModifierName, ::System::Action_1<::Class_0_16E4307DCC419505_343*>* loopBodyAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::Class_0_16E4307DCC419505_343*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FOREACHMODIFIER_1_OFFSET))(this, sModifierName, loopBodyAction);
		}

		::Class_0_16E4307DCC419505_343* FindModifierInstance(::System::String* sModifierName, ::System::UInt32 nRuntimeID, ::RPG::GameCore::ModifierStateFilter stateFilter, ::RPG::GameCore::ModifierStackingFlag stackingFlag, ::Class_0_16E4307DCC419505_345* abilityInstance)
		{
			return ((::Class_0_16E4307DCC419505_343*(*)(::PVOID, ::System::String*, ::System::UInt32, ::RPG::GameCore::ModifierStateFilter, ::RPG::GameCore::ModifierStackingFlag, ::Class_0_16E4307DCC419505_345*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FINDMODIFIERINSTANCE_OFFSET))(this, sModifierName, nRuntimeID, stateFilter, stackingFlag, abilityInstance);
		}

		::System::Int32 FindModifierInstances(::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* flagListFilter, ::System::UInt32 nRuntimeID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_343*>* pResultList)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>*, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_343*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FINDMODIFIERINSTANCES_OFFSET))(this, flagListFilter, nRuntimeID, pResultList);
		}

		::System::Int32 FindModifierInstances_1(::System::String* sModifierName, ::System::UInt32 nRuntimeID, ::System::Array* arrResults, ::RPG::GameCore::ModifierStateFilter stateFilter, ::RPG::GameCore::ModifierStackingFlag stackingFlag)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Array*, ::RPG::GameCore::ModifierStateFilter, ::RPG::GameCore::ModifierStackingFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FINDMODIFIERINSTANCES_1_OFFSET))(this, sModifierName, nRuntimeID, arrResults, stateFilter, stackingFlag);
		}

		::System::Boolean HasModifier(::System::String* modifierName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_HASMODIFIER_OFFSET))(this, modifierName);
		}

		::System::Void RemoveDirtyModifiers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_REMOVEDIRTYMODIFIERS_OFFSET))(this);
		}

		::System::Boolean HitTest(::Struct_2_BB220E16FE645E7C ray, ::RPG::MVector3& hitPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_BB220E16FE645E7C, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_HITTEST_OFFSET))(this, ray, hitPos);
		}

		::Class_0_16E4307DCC419505_345* FindUsableAbilityInstance(::System::String* strAbilityName)
		{
			return ((::Class_0_16E4307DCC419505_345*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FINDUSABLEABILITYINSTANCE_OFFSET))(this, strAbilityName);
		}

		::System::Void UseAbilityByInstance(::Class_0_16E4307DCC419505_345* abilityInstance, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* inheritTargetList, ::RPG::GameCore::UseAbilityOption option)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_345*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::UseAbilityOption))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_USEABILITYBYINSTANCE_OFFSET))(this, abilityInstance, inheritTargetList, option);
		}

		::Class_0_16E4307DCC419505_345* UseAbility(::System::String* strAbilityName, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* inheritTargetList, ::RPG::GameCore::UseAbilityOption option)
		{
			return ((::Class_0_16E4307DCC419505_345*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::UseAbilityOption))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_USEABILITY_OFFSET))(this, strAbilityName, inheritTargetList, option);
		}

		::System::Boolean _IsModifierMatchSearch(::Class_0_16E4307DCC419505_343* pModifier, ::System::String* sName, ::System::UInt32 nCasterRuntimeID, ::RPG::GameCore::ModifierStateFilter stateFilter, ::RPG::GameCore::ModifierStackingFlag stackingFlag, ::Class_0_16E4307DCC419505_345* abilityInstance)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_343*, ::System::String*, ::System::UInt32, ::RPG::GameCore::ModifierStateFilter, ::RPG::GameCore::ModifierStackingFlag, ::Class_0_16E4307DCC419505_345*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT__ISMODIFIERMATCHSEARCH_OFFSET))(this, pModifier, sName, nCasterRuntimeID, stateFilter, stackingFlag, abilityInstance);
		}

		::System::Void CheckToRemoveChildModifierOfAbility(::Class_0_16E4307DCC419505_345* pRemovedAbi)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_345*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_CHECKTOREMOVECHILDMODIFIEROFABILITY_OFFSET))(this, pRemovedAbi);
		}

		::System::Void SetPauseAbility(::RPG::GameCore::PauseAbilityReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PauseAbilityReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_SETPAUSEABILITY_OFFSET))(this, reason);
		}

		::System::Void ResumePauseAbility(::RPG::GameCore::PauseAbilityReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PauseAbilityReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_RESUMEPAUSEABILITY_OFFSET))(this, reason);
		}

		::System::Int32 get_AbilityCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GET_ABILITYCOUNT_OFFSET))(this);
		}

		::System::Int32 get_ModifierCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GET_MODIFIERCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_343*>* get_ModifierList()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_343*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GET_MODIFIERLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_345*>* get_AbilityList()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_345*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GET_ABILITYLIST_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_343* get_CurrentModifierInstance()
		{
			return ((::Class_0_16E4307DCC419505_343*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GET_CURRENTMODIFIERINSTANCE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_LastFinishProjectilePos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GET_LASTFINISHPROJECTILEPOS_OFFSET))(this);
		}

		::System::Void set_LastFinishProjectilePos(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_SET_LASTFINISHPROJECTILEPOS_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_LastFinishProjectileVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GET_LASTFINISHPROJECTILEVELOCITY_OFFSET))(this);
		}

		::System::Void set_LastFinishProjectileVelocity(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_SET_LASTFINISHPROJECTILEVELOCITY_OFFSET))(this, value);
		}

		::System::Boolean get_PauseAbility()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GET_PAUSEABILITY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
