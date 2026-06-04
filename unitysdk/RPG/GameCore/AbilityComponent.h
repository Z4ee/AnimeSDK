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

class Class_0_16E4307DCC419505_356;
class Class_0_16E4307DCC419505_358;
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

#define RPG_GAMECORE_ABILITYCOMPONENT_ADDABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0xCC72270)
#define RPG_GAMECORE_ABILITYCOMPONENT_ADDMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xCC73540)
#define RPG_GAMECORE_ABILITYCOMPONENT_CHECKTOREMOVECHILDMODIFIEROFABILITY_OFFSET UNITYSDK_OFFSET(0xCC755A0)
#define RPG_GAMECORE_ABILITYCOMPONENT_CLEARALLMODIFIERINSTANCEWITHPREDICATE_OFFSET UNITYSDK_OFFSET(0xCC73AD0)
#define RPG_GAMECORE_ABILITYCOMPONENT_CLEARALLMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xCC73740)
#define RPG_GAMECORE_ABILITYCOMPONENT_CONTAINALIVEHITSHAPE_OFFSET UNITYSDK_OFFSET(0xCC73490)
#define RPG_GAMECORE_ABILITYCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC71330)
#define RPG_GAMECORE_ABILITYCOMPONENT_ENDALLPROJECTILE_OFFSET UNITYSDK_OFFSET(0xCC72C90)
#define RPG_GAMECORE_ABILITYCOMPONENT_FINDABILITYINSTANCE_1_OFFSET UNITYSDK_OFFSET(0xCC72580)
#define RPG_GAMECORE_ABILITYCOMPONENT_FINDABILITYINSTANCE_2_OFFSET UNITYSDK_OFFSET(0xCC72830)
#define RPG_GAMECORE_ABILITYCOMPONENT_FINDABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0xCC72440)
#define RPG_GAMECORE_ABILITYCOMPONENT_FINDMODIFIERINSTANCES_1_OFFSET UNITYSDK_OFFSET(0xCC748E0)
#define RPG_GAMECORE_ABILITYCOMPONENT_FINDMODIFIERINSTANCES_OFFSET UNITYSDK_OFFSET(0xCC74640)
#define RPG_GAMECORE_ABILITYCOMPONENT_FINDMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xCC74030)
#define RPG_GAMECORE_ABILITYCOMPONENT_FINDUSABLEABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0xCC75140)
#define RPG_GAMECORE_ABILITYCOMPONENT_FOREACHMODIFIER_1_OFFSET UNITYSDK_OFFSET(0xCC73EC0)
#define RPG_GAMECORE_ABILITYCOMPONENT_FOREACHMODIFIER_OFFSET UNITYSDK_OFFSET(0xCC73E00)
#define RPG_GAMECORE_ABILITYCOMPONENT_GETABILITYINSTANCEBYINDEX_OFFSET UNITYSDK_OFFSET(0xCC723B0)
#define RPG_GAMECORE_ABILITYCOMPONENT_GETABILITYLIST_OFFSET UNITYSDK_OFFSET(0xCC73450)
#define RPG_GAMECORE_ABILITYCOMPONENT_GETINDEXBYMODIFIER_OFFSET UNITYSDK_OFFSET(0xCC73D60)
#define RPG_GAMECORE_ABILITYCOMPONENT_GETMODIFIERBYINDEX_OFFSET UNITYSDK_OFFSET(0xCC73CD0)
#define RPG_GAMECORE_ABILITYCOMPONENT_GET_ABILITYCOUNT_OFFSET UNITYSDK_OFFSET(0xCC75830)
#define RPG_GAMECORE_ABILITYCOMPONENT_GET_ABILITYLIST_OFFSET UNITYSDK_OFFSET(0xCC758E0)
#define RPG_GAMECORE_ABILITYCOMPONENT_GET_CURRENTMODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0xCC74510)
#define RPG_GAMECORE_ABILITYCOMPONENT_GET_LASTFINISHPROJECTILEPOS_OFFSET UNITYSDK_OFFSET(0xCC758F0)
#define RPG_GAMECORE_ABILITYCOMPONENT_GET_LASTFINISHPROJECTILEVELOCITY_OFFSET UNITYSDK_OFFSET(0xCC75980)
#define RPG_GAMECORE_ABILITYCOMPONENT_GET_MODIFIERCOUNT_OFFSET UNITYSDK_OFFSET(0xCC75880)
#define RPG_GAMECORE_ABILITYCOMPONENT_GET_MODIFIERLIST_OFFSET UNITYSDK_OFFSET(0xCC758D0)
#define RPG_GAMECORE_ABILITYCOMPONENT_GET_PAUSEABILITY_OFFSET UNITYSDK_OFFSET(0xCC72080)
#define RPG_GAMECORE_ABILITYCOMPONENT_HASMODIFIER_OFFSET UNITYSDK_OFFSET(0xCC74D60)
#define RPG_GAMECORE_ABILITYCOMPONENT_HITTEST_OFFSET UNITYSDK_OFFSET(0xCC74EC0)
#define RPG_GAMECORE_ABILITYCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCC712C0)
#define RPG_GAMECORE_ABILITYCOMPONENT_INTERRUPTALLPROJECTILES_OFFSET UNITYSDK_OFFSET(0xCC72E20)
#define RPG_GAMECORE_ABILITYCOMPONENT_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xCC71AB0)
#define RPG_GAMECORE_ABILITYCOMPONENT_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xCC71BD0)
#define RPG_GAMECORE_ABILITYCOMPONENT_PROCCESSPENDINGDISPOSEMODIFIERS_OFFSET UNITYSDK_OFFSET(0xCC715F0)
#define RPG_GAMECORE_ABILITYCOMPONENT_REINITALLABILITIES_OFFSET UNITYSDK_OFFSET(0xCC71780)
#define RPG_GAMECORE_ABILITYCOMPONENT_REMOVEABILITY_1_OFFSET UNITYSDK_OFFSET(0xCC731A0)
#define RPG_GAMECORE_ABILITYCOMPONENT_REMOVEABILITY_OFFSET UNITYSDK_OFFSET(0xCC72FB0)
#define RPG_GAMECORE_ABILITYCOMPONENT_REMOVEDIRTYMODIFIERS_OFFSET UNITYSDK_OFFSET(0xCC72090)
#define RPG_GAMECORE_ABILITYCOMPONENT_RESUMEPAUSEABILITY_OFFSET UNITYSDK_OFFSET(0xCC757E0)
#define RPG_GAMECORE_ABILITYCOMPONENT_SETPAUSEABILITY_OFFSET UNITYSDK_OFFSET(0xCC75790)
#define RPG_GAMECORE_ABILITYCOMPONENT_SET_LASTFINISHPROJECTILEPOS_OFFSET UNITYSDK_OFFSET(0xCC75970)
#define RPG_GAMECORE_ABILITYCOMPONENT_SET_LASTFINISHPROJECTILEVELOCITY_OFFSET UNITYSDK_OFFSET(0xCC75A00)
#define RPG_GAMECORE_ABILITYCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xCC71C10)
#define RPG_GAMECORE_ABILITYCOMPONENT_USEABILITYBYINSTANCE_OFFSET UNITYSDK_OFFSET(0xCC752F0)
#define RPG_GAMECORE_ABILITYCOMPONENT_USEABILITY_OFFSET UNITYSDK_OFFSET(0xCC754A0)
#define RPG_GAMECORE_ABILITYCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xCC75A20)
#define RPG_GAMECORE_ABILITYCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCC71210)
#define RPG_GAMECORE_ABILITYCOMPONENT__ISMODIFIERMATCHSEARCH_OFFSET UNITYSDK_OFFSET(0xCC741D0)
#define RPG_GAMECORE_ABILITYCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xCC75A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityComponent_TypeDefinitionIndex = 53099;

	class AbilityComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__TickModifierListModifiersMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(AbilityComponent_TypeDefinitionIndex)->GetStaticField(0x62FE0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__TickProjectileGroupsMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(AbilityComponent_TypeDefinitionIndex)->GetStaticField(0x62FE8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__TickAbilityListMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(AbilityComponent_TypeDefinitionIndex)->GetStaticField(0x62FF0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__RemoveDirtyModifiersMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(AbilityComponent_TypeDefinitionIndex)->GetStaticField(0x62FF8);
		}
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_358*>* _AbilityList; // 0x18
		::System::Collections::Generic::Stack_1<::RPG::GameCore::GameEntityList*>* CachedTargetList; // 0x20
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_356*>* _ModifierList; // 0x28
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_356*>* _PendingDisposeMdfList; // 0x30
		::Class_1_0AD6129525BF5F86* LastFinishProjectile; // 0x38
		::UnityEngine::Vector3 _LastFinishProjectilePos; // 0x40
		::RPG::MVector3 HitBoxCenter; // 0x4C
		::Struct_2_A5536A8EDCDEB606 HitBox; // 0x58
		::System::Int32 _PauseAbilityReason; // 0x98
		::UnityEngine::Vector3 _LastFinishProjectileVelocity; // 0x9C
		::System::Boolean _AbilityCanInit; // 0xA8

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

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_TICK_OFFSET))(this, a1);
		}

		::System::Void AddAbilityInstance(::Class_0_16E4307DCC419505_358* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_358*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_ADDABILITYINSTANCE_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_358* GetAbilityInstanceByIndex(::System::Int32 a1)
		{
			return ((::Class_0_16E4307DCC419505_358*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GETABILITYINSTANCEBYINDEX_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_358* FindAbilityInstance(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_358*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FINDABILITYINSTANCE_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_358* FindAbilityInstance_1(::RPG::GameCore::JsonEnum* a1)
		{
			return ((::Class_0_16E4307DCC419505_358*(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FINDABILITYINSTANCE_1_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_358* FindAbilityInstance_2(::RPG::GameCore::JsonEnum* a1, ::RPG::GameCore::AbilityInstanceState a2)
		{
			return ((::Class_0_16E4307DCC419505_358*(*)(::PVOID, ::RPG::GameCore::JsonEnum*, ::RPG::GameCore::AbilityInstanceState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FINDABILITYINSTANCE_2_OFFSET))(this, a1, a2);
		}

		::System::Void EndAllProjectile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_ENDALLPROJECTILE_OFFSET))(this);
		}

		::System::Void InterruptAllProjectiles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_INTERRUPTALLPROJECTILES_OFFSET))(this);
		}

		::System::Boolean RemoveAbility(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_REMOVEABILITY_OFFSET))(this, a1, a2);
		}

		::System::Boolean RemoveAbility_1(::Class_0_16E4307DCC419505_358* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_358*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_REMOVEABILITY_1_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_358*>* GetAbilityList()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_358*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GETABILITYLIST_OFFSET))(this);
		}

		::System::Boolean ContainAliveHitShape()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_CONTAINALIVEHITSHAPE_OFFSET))(this);
		}

		::System::Void AddModifierInstance(::Class_0_16E4307DCC419505_356* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_356*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_ADDMODIFIERINSTANCE_OFFSET))(this, a1, a2);
		}

		::System::Void ClearAllModifierInstance(::RPG::GameCore::ModifierDeathSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_CLEARALLMODIFIERINSTANCE_OFFSET))(this, a1);
		}

		::System::Void ClearAllModifierInstanceWithPredicate(::System::Predicate_1<::Class_0_16E4307DCC419505_356*>* a1, ::RPG::GameCore::ModifierDeathSource a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Predicate_1<::Class_0_16E4307DCC419505_356*>*, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_CLEARALLMODIFIERINSTANCEWITHPREDICATE_OFFSET))(this, a1, a2);
		}

		::Class_0_16E4307DCC419505_356* GetModifierByIndex(::System::Int32 a1)
		{
			return ((::Class_0_16E4307DCC419505_356*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GETMODIFIERBYINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetIndexByModifier(::Class_0_16E4307DCC419505_356* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_356*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GETINDEXBYMODIFIER_OFFSET))(this, a1);
		}

		::System::Void ForeachModifier(::System::Action_1<::Class_0_16E4307DCC419505_356*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_0_16E4307DCC419505_356*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FOREACHMODIFIER_OFFSET))(this, a1);
		}

		::System::Void ForeachModifier_1(::System::String* a1, ::System::Action_1<::Class_0_16E4307DCC419505_356*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::Class_0_16E4307DCC419505_356*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FOREACHMODIFIER_1_OFFSET))(this, a1, a2);
		}

		::Class_0_16E4307DCC419505_356* FindModifierInstance(::System::String* a1, ::System::UInt32 a2, ::RPG::GameCore::ModifierStateFilter a3, ::RPG::GameCore::ModifierStackingFlag a4, ::Class_0_16E4307DCC419505_358* a5)
		{
			return ((::Class_0_16E4307DCC419505_356*(*)(::PVOID, ::System::String*, ::System::UInt32, ::RPG::GameCore::ModifierStateFilter, ::RPG::GameCore::ModifierStackingFlag, ::Class_0_16E4307DCC419505_358*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FINDMODIFIERINSTANCE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 FindModifierInstances(::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_356*>* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>*, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_356*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FINDMODIFIERINSTANCES_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 FindModifierInstances_1(::System::String* a1, ::System::UInt32 a2, ::System::Array* a3, ::RPG::GameCore::ModifierStateFilter a4, ::RPG::GameCore::ModifierStackingFlag a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Array*, ::RPG::GameCore::ModifierStateFilter, ::RPG::GameCore::ModifierStackingFlag))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FINDMODIFIERINSTANCES_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean HasModifier(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_HASMODIFIER_OFFSET))(this, a1);
		}

		::System::Void RemoveDirtyModifiers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_REMOVEDIRTYMODIFIERS_OFFSET))(this);
		}

		::System::Boolean HitTest(::Struct_2_BB220E16FE645E7C a1, ::RPG::MVector3& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_BB220E16FE645E7C, ::RPG::MVector3&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_HITTEST_OFFSET))(this, a1, a2);
		}

		::Class_0_16E4307DCC419505_358* FindUsableAbilityInstance(::System::String* a1)
		{
			return ((::Class_0_16E4307DCC419505_358*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_FINDUSABLEABILITYINSTANCE_OFFSET))(this, a1);
		}

		::System::Void UseAbilityByInstance(::Class_0_16E4307DCC419505_358* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::UseAbilityOption a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_358*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::UseAbilityOption))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_USEABILITYBYINSTANCE_OFFSET))(this, a1, a2, a3);
		}

		::Class_0_16E4307DCC419505_358* UseAbility(::System::String* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::UseAbilityOption a3)
		{
			return ((::Class_0_16E4307DCC419505_358*(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::UseAbilityOption))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_USEABILITY_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _IsModifierMatchSearch(::Class_0_16E4307DCC419505_356* a1, ::System::String* a2, ::System::UInt32 a3, ::RPG::GameCore::ModifierStateFilter a4, ::RPG::GameCore::ModifierStackingFlag a5, ::Class_0_16E4307DCC419505_358* a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_356*, ::System::String*, ::System::UInt32, ::RPG::GameCore::ModifierStateFilter, ::RPG::GameCore::ModifierStackingFlag, ::Class_0_16E4307DCC419505_358*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT__ISMODIFIERMATCHSEARCH_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void CheckToRemoveChildModifierOfAbility(::Class_0_16E4307DCC419505_358* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_358*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_CHECKTOREMOVECHILDMODIFIEROFABILITY_OFFSET))(this, a1);
		}

		::System::Void SetPauseAbility(::RPG::GameCore::PauseAbilityReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PauseAbilityReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_SETPAUSEABILITY_OFFSET))(this, a1);
		}

		::System::Void ResumePauseAbility(::RPG::GameCore::PauseAbilityReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PauseAbilityReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_RESUMEPAUSEABILITY_OFFSET))(this, a1);
		}

		::System::Int32 get_AbilityCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GET_ABILITYCOUNT_OFFSET))(this);
		}

		::System::Int32 get_ModifierCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GET_MODIFIERCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_356*>* get_ModifierList()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_356*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GET_MODIFIERLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_358*>* get_AbilityList()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_358*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GET_ABILITYLIST_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_356* get_CurrentModifierInstance()
		{
			return ((::Class_0_16E4307DCC419505_356*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GET_CURRENTMODIFIERINSTANCE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_LastFinishProjectilePos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GET_LASTFINISHPROJECTILEPOS_OFFSET))(this);
		}

		::System::Void set_LastFinishProjectilePos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_SET_LASTFINISHPROJECTILEPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_LastFinishProjectileVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GET_LASTFINISHPROJECTILEVELOCITY_OFFSET))(this);
		}

		::System::Void set_LastFinishProjectileVelocity(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_SET_LASTFINISHPROJECTILEVELOCITY_OFFSET))(this, a1);
		}

		::System::Boolean get_PauseAbility()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT_GET_PAUSEABILITY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYCOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}
	};
}
