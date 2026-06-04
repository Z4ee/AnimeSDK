#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_561;
class Class_1_004034A1FAAF468A;
class Class_1_2A73EE3831056054;
class Class_1_35D97E4754CF0C2B;
class Class_1_43BD383C98B4C0C5_114;
class Class_1_47C4886CB6C61234;
class Class_1_4C501FFF2580446A;
class Class_1_5C7CF056970903B5;
class Class_1_827373C1CEDFE355;
class Class_1_843DD6330B22E422;
class Class_1_A3277CB5E1A07D47;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class LevelAreaManager; }
namespace RPG::GameCore { class TimeScaleStack; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define RPG_GAMECORE_GAMEWORLD_ADDALLENTITYTOLOD0_OFFSET UNITYSDK_OFFSET(0xCE1A7A0)
#define RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCE1AA80)
#define RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLOD0_OFFSET UNITYSDK_OFFSET(0xCE1ABB0)
#define RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLOD1_OFFSET UNITYSDK_OFFSET(0xCE1AC00)
#define RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLOD3_OFFSET UNITYSDK_OFFSET(0xCE1AC50)
#define RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLOD4_OFFSET UNITYSDK_OFFSET(0xCE1ACA0)
#define RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLODTICK_OFFSET UNITYSDK_OFFSET(0xCE02800)
#define RPG_GAMECORE_GAMEWORLD_ADDGLOBALTIMESCALE_OFFSET UNITYSDK_OFFSET(0xCE1B460)
#define RPG_GAMECORE_GAMEWORLD_CLEARPLUGINS_OFFSET UNITYSDK_OFFSET(0xCE1FB40)
#define RPG_GAMECORE_GAMEWORLD_CLEARTIMESCALE_OFFSET UNITYSDK_OFFSET(0xCE1C9E0)
#define RPG_GAMECORE_GAMEWORLD_CREATEEMPTYENTITYCLIENTONLY_OFFSET UNITYSDK_OFFSET(0xCE1CDB0)
#define RPG_GAMECORE_GAMEWORLD_CREATEEMPTYENTITY_OFFSET UNITYSDK_OFFSET(0xCE1CCD0)
#define RPG_GAMECORE_GAMEWORLD_CREATEEMPTYLEVELENTITY_OFFSET UNITYSDK_OFFSET(0xCE1CA40)
#define RPG_GAMECORE_GAMEWORLD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE1C5B0)
#define RPG_GAMECORE_GAMEWORLD_ENSUREENTITYTICKORDER_OFFSET UNITYSDK_OFFSET(0xCE1E230)
#define RPG_GAMECORE_GAMEWORLD_FINDPREFABGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xCE1EC20)
#define RPG_GAMECORE_GAMEWORLD_GETDYINGENTITYLIST_OFFSET UNITYSDK_OFFSET(0xCE1E080)
#define RPG_GAMECORE_GAMEWORLD_GETDYINGFRAMECOUNTER_OFFSET UNITYSDK_OFFSET(0xCE1D920)
#define RPG_GAMECORE_GAMEWORLD_GETGPTIMELINEHIERARCHYMANAGER_OFFSET UNITYSDK_OFFSET(0xCE1EDD0)
#define RPG_GAMECORE_GAMEWORLD_GETLEVELAREAMANAGER_OFFSET UNITYSDK_OFFSET(0xCE1ED80)
#define RPG_GAMECORE_GAMEWORLD_GETPLUGIN_OFFSET UNITYSDK_OFFSET(0xCE1FA80)
#define RPG_GAMECORE_GAMEWORLD_GET_BATTLEINSTANCEREF_OFFSET UNITYSDK_OFFSET(0xCE1F250)
#define RPG_GAMECORE_GAMEWORLD_GET_CURLOD0ENTITYLIST_OFFSET UNITYSDK_OFFSET(0xCE1B0A0)
#define RPG_GAMECORE_GAMEWORLD_GET_CURLOD1ENTITYLIST_OFFSET UNITYSDK_OFFSET(0xCE1B190)
#define RPG_GAMECORE_GAMEWORLD_GET_CURLOD3ENTITYLIST_OFFSET UNITYSDK_OFFSET(0xCE1B280)
#define RPG_GAMECORE_GAMEWORLD_GET_CURLOD4ENTITYLIST_OFFSET UNITYSDK_OFFSET(0xCE1B370)
#define RPG_GAMECORE_GAMEWORLD_GET_DAMAGEDATASTACK_OFFSET UNITYSDK_OFFSET(0xCE1F510)
#define RPG_GAMECORE_GAMEWORLD_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0xCE1F670)
#define RPG_GAMECORE_GAMEWORLD_GET_ENTITYMANAGERREF_OFFSET UNITYSDK_OFFSET(0xCE1F270)
#define RPG_GAMECORE_GAMEWORLD_GET_EVENTMANAGERREF_OFFSET UNITYSDK_OFFSET(0xCE1F280)
#define RPG_GAMECORE_GAMEWORLD_GET_ISBATTLEGAMEWORLD_OFFSET UNITYSDK_OFFSET(0xCE1F290)
#define RPG_GAMECORE_GAMEWORLD_GET_ISDISPOSING_OFFSET UNITYSDK_OFFSET(0xCE1F540)
#define RPG_GAMECORE_GAMEWORLD_GET_ISINTICK_OFFSET UNITYSDK_OFFSET(0xCE1F530)
#define RPG_GAMECORE_GAMEWORLD_GET_ISPAUSETICK_OFFSET UNITYSDK_OFFSET(0xCE1F550)
#define RPG_GAMECORE_GAMEWORLD_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0xCE1F5D0)
#define RPG_GAMECORE_GAMEWORLD_GET_PARAMREGISTER_OFFSET UNITYSDK_OFFSET(0xCE1F4F0)
#define RPG_GAMECORE_GAMEWORLD_GET_TIMESCALESTACK_OFFSET UNITYSDK_OFFSET(0xCE1F630)
#define RPG_GAMECORE_GAMEWORLD_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xCE1F570)
#define RPG_GAMECORE_GAMEWORLD_GET_UNSCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0xCE1F650)
#define RPG_GAMECORE_GAMEWORLD_INITCLIENTONLYPROPERTY_OFFSET UNITYSDK_OFFSET(0xCE1EBD0)
#define RPG_GAMECORE_GAMEWORLD_INITMAINLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xCE1E0D0)
#define RPG_GAMECORE_GAMEWORLD_INIT_OFFSET UNITYSDK_OFFSET(0xCE1C550)
#define RPG_GAMECORE_GAMEWORLD_ISENTITYENTERDYING_OFFSET UNITYSDK_OFFSET(0xCE1D870)
#define RPG_GAMECORE_GAMEWORLD_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCE1EA20)
#define RPG_GAMECORE_GAMEWORLD_MAKEDEFERDELETEENTITYDESTROY_OFFSET UNITYSDK_OFFSET(0xCE1D6B0)
#define RPG_GAMECORE_GAMEWORLD_MAKEENTITYDIE_OFFSET UNITYSDK_OFFSET(0xCE03BF0)
#define RPG_GAMECORE_GAMEWORLD_MAKEENTITYREVIVE_OFFSET UNITYSDK_OFFSET(0xCE1DB80)
#define RPG_GAMECORE_GAMEWORLD_MAKEKILLIMMEDIATELYDYINGENTITYDIE_OFFSET UNITYSDK_OFFSET(0xCE1EEE0)
#define RPG_GAMECORE_GAMEWORLD_MAKETEAMENTITYREVIVE_OFFSET UNITYSDK_OFFSET(0xCE1DEF0)
#define RPG_GAMECORE_GAMEWORLD_REMOVEALLENTITYFROMTICKBALANCE_OFFSET UNITYSDK_OFFSET(0xCE1A850)
#define RPG_GAMECORE_GAMEWORLD_REMOVEENTITYFROMLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCE1AB40)
#define RPG_GAMECORE_GAMEWORLD_REMOVEGLOBALTIMESCALE_OFFSET UNITYSDK_OFFSET(0xCE1B6F0)
#define RPG_GAMECORE_GAMEWORLD_SETALLENTITYSKINABLE_OFFSET UNITYSDK_OFFSET(0xCE1EE10)
#define RPG_GAMECORE_GAMEWORLD_SET_BATTLEINSTANCEREF_OFFSET UNITYSDK_OFFSET(0xCE1F260)
#define RPG_GAMECORE_GAMEWORLD_SET_DAMAGEDATASTACK_OFFSET UNITYSDK_OFFSET(0xCE1F520)
#define RPG_GAMECORE_GAMEWORLD_SET_ISBATTLEGAMEWORLD_OFFSET UNITYSDK_OFFSET(0xCE1F2A0)
#define RPG_GAMECORE_GAMEWORLD_SET_ISPAUSETICK_OFFSET UNITYSDK_OFFSET(0xCE1F560)
#define RPG_GAMECORE_GAMEWORLD_SET_PARAMREGISTER_OFFSET UNITYSDK_OFFSET(0xCE1F500)
#define RPG_GAMECORE_GAMEWORLD_SET_TIMESCALESTACK_OFFSET UNITYSDK_OFFSET(0xCE1F640)
#define RPG_GAMECORE_GAMEWORLD_SET_UNSCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0xCE1F660)
#define RPG_GAMECORE_GAMEWORLD_STARTMAINLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xCE1E190)
#define RPG_GAMECORE_GAMEWORLD_STRETCHGLOBALTIMESCALE_OFFSET UNITYSDK_OFFSET(0xCE1B920)
#define RPG_GAMECORE_GAMEWORLD_SYNCENTITYTICKTIME_OFFSET UNITYSDK_OFFSET(0xCE1A6E0)
#define RPG_GAMECORE_GAMEWORLD_TICK_OFFSET UNITYSDK_OFFSET(0xCE1E450)
#define RPG_GAMECORE_GAMEWORLD__BALANCELATEUPDATEENTITYALL_OFFSET UNITYSDK_OFFSET(0xCE1AFD0)
#define RPG_GAMECORE_GAMEWORLD__BALANCETICKENTITYALL_OFFSET UNITYSDK_OFFSET(0xCE1ACF0)
#define RPG_GAMECORE_GAMEWORLD__CCTOR_OFFSET UNITYSDK_OFFSET(0xCE1FD00)
#define RPG_GAMECORE_GAMEWORLD__CREATENEWENTITYIMPL_OFFSET UNITYSDK_OFFSET(0xCE1CB00)
#define RPG_GAMECORE_GAMEWORLD__CTOR_OFFSET UNITYSDK_OFFSET(0xCE1BE50)
#define RPG_GAMECORE_GAMEWORLD__DISPOSEALLMODULES_OFFSET UNITYSDK_OFFSET(0xCE1F710)
#define RPG_GAMECORE_GAMEWORLD__GETNEWDYINGINSTANCE_OFFSET UNITYSDK_OFFSET(0xCE1D560)
#define RPG_GAMECORE_GAMEWORLD__LATEUPDATEMODULES_OFFSET UNITYSDK_OFFSET(0xCE1F9B0)
#define RPG_GAMECORE_GAMEWORLD__MAKEENTITYDEFERDELETE_OFFSET UNITYSDK_OFFSET(0xCE1DA00)
#define RPG_GAMECORE_GAMEWORLD__MAKEENTITYDIEFINISH_OFFSET UNITYSDK_OFFSET(0xCE1D3D0)
#define RPG_GAMECORE_GAMEWORLD__MAKEGROUPENTITYDIE_OFFSET UNITYSDK_OFFSET(0xCE1CF30)
#define RPG_GAMECORE_GAMEWORLD__MAKELEVELENTITYDIE_OFFSET UNITYSDK_OFFSET(0xCE1D0C0)
#define RPG_GAMECORE_GAMEWORLD__ONGLOBALTIMESCALEREMOVE_OFFSET UNITYSDK_OFFSET(0xCE1BAF0)
#define RPG_GAMECORE_GAMEWORLD__ONWILLBEDESTROYCOMMONPROCESS_OFFSET UNITYSDK_OFFSET(0xCE1CE20)
#define RPG_GAMECORE_GAMEWORLD__POSTTICKGLOBALTIMESCALE_OFFSET UNITYSDK_OFFSET(0xCE1BD90)
#define RPG_GAMECORE_GAMEWORLD__PRETICKGLOBALTIMESCALE_OFFSET UNITYSDK_OFFSET(0xCE1BC20)
#define RPG_GAMECORE_GAMEWORLD__REMOVEDYINGENTITY_OFFSET UNITYSDK_OFFSET(0xCE1DDF0)
#define RPG_GAMECORE_GAMEWORLD__TICKDEFERDELETELIST_OFFSET UNITYSDK_OFFSET(0xCE1E840)
#define RPG_GAMECORE_GAMEWORLD__TICKDYINGENTITYLIST_OFFSET UNITYSDK_OFFSET(0xCE1E700)
#define RPG_GAMECORE_GAMEWORLD__TICKMODULES_OFFSET UNITYSDK_OFFSET(0xCE1F8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameWorld_TypeDefinitionIndex = 54020;

	class GameWorld : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_RuntimeIDStartForBattle()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GameWorld_TypeDefinitionIndex)->GetStaticField(0xB20);
		}
		static ::System::UInt32* StaticGet_RuntimeIDStart()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GameWorld_TypeDefinitionIndex)->GetStaticField(0xB24);
		}
		static ::System::UInt32* StaticGet_RuntimeIDStartClientOnly()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GameWorld_TypeDefinitionIndex)->GetStaticField(0xB28);
		}
		static ::System::UInt32* StaticGet_AdventureLevelEntityRuntimeID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GameWorld_TypeDefinitionIndex)->GetStaticField(0xB2C);
		}
		static ::System::UInt32* StaticGet_CommonLevelEntityRuntimeID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GameWorld_TypeDefinitionIndex)->GetStaticField(0xB30);
		}
		static ::System::UInt32* StaticGet_BattleLevelEntityRuntimeID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GameWorld_TypeDefinitionIndex)->GetStaticField(0xB34);
		}
		::Class_1_A3277CB5E1A07D47* _GPTimelineHierarchyManager; // 0x10
		::Il2CppArray<::Class_0_16E4307DCC419505_561*>* _PluginsArray; // 0x18
		::Class_1_5C7CF056970903B5* _ParamRegister_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::Class_1_47C4886CB6C61234*>* _NeedLateUpdateModules; // 0x28
		::RPG::GameCore::TimeScaleStack* _TimeScaleStack_k__BackingField; // 0x30
		::RPG::GameCore::BattleInstance* _BattleInstanceRef_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _EntityList; // 0x40
		::System::Action_3<::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState, ::Class_1_43BD383C98B4C0C5_114*>* EntityReviveCallback; // 0x48
		::System::Collections::Generic::List_1<::Class_1_47C4886CB6C61234*>* _NeedTickModules; // 0x50
		::RPG::Client::MonoEffectManager* MonoEffectManagerRef; // 0x58
		::RPG::Client::AdventurePhase* BindAdventurePhase; // 0x60
		::System::Collections::Generic::Stack_1<::Class_1_843DD6330B22E422*>* _DamageDataStack_k__BackingField; // 0x68
		::System::Collections::Generic::List_1<::Class_1_47C4886CB6C61234*>* _Modules; // 0x70
		::System::Collections::Generic::List_1<::Class_1_35D97E4754CF0C2B*>* _GlobalTimeScaleDatas; // 0x78
		::RPG::GameCore::EventManager* _EventManager; // 0x80
		::System::Action_1<::RPG::GameCore::GameEntity*>* NewEntityCallback; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4C501FFF2580446A*>* _EntityTickList; // 0x90
		::System::Collections::Generic::List_1<::Class_1_2A73EE3831056054*>* _DyingEntityList; // 0x98
		::RPG::GameCore::EntityManager* _EntityManager; // 0xA0
		::RPG::GameCore::LevelAreaManager* _LevelAreaManager; // 0xA8
		::System::Action_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState>* EntityWillDestroyCallback; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_004034A1FAAF468A*>* _PrefabGameObjectMap; // 0xB8
		::System::Action_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState>* EntityDiedCallback; // 0xC0
		::Class_1_827373C1CEDFE355* LogicRandom; // 0xC8
		::System::Action_3<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState>* EntityBeforeDyingCallback; // 0xD0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _EnterDyingEntityList; // 0xD8
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _DeferDeleteEntityList; // 0xE0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _TickedEntityListPerFrame; // 0xE8
		::System::UInt32 _IDFactory; // 0xF0
		::System::Int32 _BalanceTickDurationBucket; // 0xF4
		::System::Int32 _NextTickDeferDeleteCount; // 0xF8
		::System::UInt32 _IDFactory_Battle; // 0xFC
		::System::Boolean _IsPauseTick; // 0x100
		::System::Boolean _IsDisposing; // 0x101
		::System::Boolean _IsBattleGameWorld_k__BackingField; // 0x102
		::System::Boolean _IsInTick; // 0x103
		::System::UInt32 _IDFactory_ClientOnly; // 0x104
		::System::Single _UnscaledDeltaTime_k__BackingField; // 0x108
		::System::Single _BalanceTickDurationTime; // 0x10C

		::System::Void _ctor(::Class_1_827373C1CEDFE355* a1, ::System::Boolean a2, ::RPG::GameCore::BattleInstance* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_827373C1CEDFE355*, ::System::Boolean, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__CCTOR_OFFSET))();
		}

		::System::Void SyncEntityTickTime(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SYNCENTITYTICKTIME_OFFSET))(this, a1);
		}

		::System::Void AddAllEntityToLOD0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ADDALLENTITYTOLOD0_OFFSET))(this);
		}

		::System::Void RemoveAllEntityFromTickBalance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_REMOVEALLENTITYFROMTICKBALANCE_OFFSET))(this);
		}

		::System::Void AddEntityToLateUpdate(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void RemoveEntityFromLateUpdate(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_REMOVEENTITYFROMLATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void AddEntityToLODTick(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLODTICK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddEntityToLOD0(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLOD0_OFFSET))(this, a1, a2);
		}

		::System::Void AddEntityToLOD1(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLOD1_OFFSET))(this, a1, a2);
		}

		::System::Void AddEntityToLOD3(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLOD3_OFFSET))(this, a1, a2);
		}

		::System::Void AddEntityToLOD4(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLOD4_OFFSET))(this, a1);
		}

		::System::Void _BalanceTickEntityAll(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__BALANCETICKENTITYALL_OFFSET))(this, a1);
		}

		::System::Void _BalanceLateUpdateEntityAll(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__BALANCELATEUPDATEENTITYALL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>* get_CurLOD0EntityList()
		{
			return ((::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_CURLOD0ENTITYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>* get_CurLOD1EntityList()
		{
			return ((::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_CURLOD1ENTITYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>* get_CurLOD3EntityList()
		{
			return ((::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_CURLOD3ENTITYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>* get_CurLOD4EntityList()
		{
			return ((::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_CURLOD4ENTITYLIST_OFFSET))(this);
		}

		::Class_1_35D97E4754CF0C2B* AddGlobalTimeScale(::System::String* a1, ::System::Int32 a2, ::RPG::GameCore::EntityTypeMask a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::Class_1_35D97E4754CF0C2B*(*)(::PVOID, ::System::String*, ::System::Int32, ::RPG::GameCore::EntityTypeMask, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ADDGLOBALTIMESCALE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RemoveGlobalTimeScale(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_REMOVEGLOBALTIMESCALE_OFFSET))(this, a1, a2);
		}

		::System::Void StretchGlobalTimeScale(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_STRETCHGLOBALTIMESCALE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGlobalTimeScaleRemove(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__ONGLOBALTIMESCALEREMOVE_OFFSET))(this, a1);
		}

		::System::Void _PreTickGlobalTimeScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__PRETICKGLOBALTIMESCALE_OFFSET))(this);
		}

		::System::Void _PostTickGlobalTimeScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__POSTTICKGLOBALTIMESCALE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_DISPOSE_OFFSET))(this);
		}

		::System::Void ClearTimeScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_CLEARTIMESCALE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CreateEmptyLevelEntity(::RPG::GameCore::TeamType a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_CREATEEMPTYLEVELENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* CreateEmptyEntity(::RPG::GameCore::TeamType a1, ::RPG::GameCore::EntityType a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_CREATEEMPTYENTITY_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* CreateEmptyEntityClientOnly(::RPG::GameCore::TeamType a1, ::RPG::GameCore::EntityType a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_CREATEEMPTYENTITYCLIENTONLY_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* _CreateNewEntityImpl(::System::UInt32 a1, ::RPG::GameCore::TeamType a2, ::RPG::GameCore::EntityType a3)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::TeamType, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__CREATENEWENTITYIMPL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnWillBeDestroyCommonProcess(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__ONWILLBEDESTROYCOMMONPROCESS_OFFSET))(this, a1);
		}

		::System::Void _MakeGroupEntityDie(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__MAKEGROUPENTITYDIE_OFFSET))(this, a1);
		}

		::System::Void _MakeLevelEntityDie(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__MAKELEVELENTITYDIE_OFFSET))(this, a1, a2);
		}

		::System::Void MakeEntityDie(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_MAKEENTITYDIE_OFFSET))(this, a1, a2);
		}

		::System::Void MakeDeferDeleteEntityDestroy(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_MAKEDEFERDELETEENTITYDESTROY_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsEntityEnterDying(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ISENTITYENTERDYING_OFFSET))(this, a1);
		}

		::System::Int32 GetDyingFrameCounter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GETDYINGFRAMECOUNTER_OFFSET))(this, a1);
		}

		::Class_1_2A73EE3831056054* _GetNewDyingInstance()
		{
			return ((::Class_1_2A73EE3831056054*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__GETNEWDYINGINSTANCE_OFFSET))(this);
		}

		::System::Void _MakeEntityDieFinish(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__MAKEENTITYDIEFINISH_OFFSET))(this, a1);
		}

		::System::Void _MakeEntityDeferDelete(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__MAKEENTITYDEFERDELETE_OFFSET))(this, a1);
		}

		::System::Void MakeEntityRevive(::RPG::GameCore::GameEntity* a1, ::Class_1_43BD383C98B4C0C5_114* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_43BD383C98B4C0C5_114*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_MAKEENTITYREVIVE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntityList* MakeTeamEntityRevive(::RPG::GameCore::TeamType a1, ::Class_1_43BD383C98B4C0C5_114* a2)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::RPG::GameCore::TeamType, ::Class_1_43BD383C98B4C0C5_114*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_MAKETEAMENTITYREVIVE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::Class_1_2A73EE3831056054*>* GetDyingEntityList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_2A73EE3831056054*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GETDYINGENTITYLIST_OFFSET))(this);
		}

		::System::Void InitMainLevelGraph(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_INITMAINLEVELGRAPH_OFFSET))(this, a1);
		}

		::System::Void StartMainLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_STARTMAINLEVELGRAPH_OFFSET))(this);
		}

		::System::Void EnsureEntityTickOrder(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ENSUREENTITYTICKORDER_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void InitClientOnlyProperty(::RPG::Client::MonoEffectManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_INITCLIENTONLYPROPERTY_OFFSET))(this, a1);
		}

		::Class_1_004034A1FAAF468A* FindPrefabGameObject(::System::String* a1)
		{
			return ((::Class_1_004034A1FAAF468A*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_FINDPREFABGAMEOBJECT_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelAreaManager* GetLevelAreaManager()
		{
			return ((::RPG::GameCore::LevelAreaManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GETLEVELAREAMANAGER_OFFSET))(this);
		}

		::Class_1_A3277CB5E1A07D47* GetGPTimelineHierarchyManager()
		{
			return ((::Class_1_A3277CB5E1A07D47*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GETGPTIMELINEHIERARCHYMANAGER_OFFSET))(this);
		}

		::System::Void SetAllEntitySkinable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SETALLENTITYSKINABLE_OFFSET))(this, a1);
		}

		::System::Void MakeKillImmediatelyDyingEntityDie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_MAKEKILLIMMEDIATELYDYINGENTITYDIE_OFFSET))(this);
		}

		::System::Void _RemoveDyingEntity(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__REMOVEDYINGENTITY_OFFSET))(this, a1);
		}

		::System::Void _TickDyingEntityList(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__TICKDYINGENTITYLIST_OFFSET))(this, a1);
		}

		::System::Void _TickDeferDeleteList(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__TICKDEFERDELETELIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleInstance* get_BattleInstanceRef()
		{
			return ((::RPG::GameCore::BattleInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_BATTLEINSTANCEREF_OFFSET))(this);
		}

		::System::Void set_BattleInstanceRef(::RPG::GameCore::BattleInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SET_BATTLEINSTANCEREF_OFFSET))(this, a1);
		}

		::RPG::GameCore::EntityManager* get_EntityManagerRef()
		{
			return ((::RPG::GameCore::EntityManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_ENTITYMANAGERREF_OFFSET))(this);
		}

		::RPG::GameCore::EventManager* get_EventManagerRef()
		{
			return ((::RPG::GameCore::EventManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_EVENTMANAGERREF_OFFSET))(this);
		}

		::System::Boolean get_IsBattleGameWorld()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_ISBATTLEGAMEWORLD_OFFSET))(this);
		}

		::System::Void set_IsBattleGameWorld(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SET_ISBATTLEGAMEWORLD_OFFSET))(this, a1);
		}

		::Class_1_5C7CF056970903B5* get_ParamRegister()
		{
			return ((::Class_1_5C7CF056970903B5*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_PARAMREGISTER_OFFSET))(this);
		}

		::System::Void set_ParamRegister(::Class_1_5C7CF056970903B5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5C7CF056970903B5*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SET_PARAMREGISTER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Stack_1<::Class_1_843DD6330B22E422*>* get_DamageDataStack()
		{
			return ((::System::Collections::Generic::Stack_1<::Class_1_843DD6330B22E422*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_DAMAGEDATASTACK_OFFSET))(this);
		}

		::System::Void set_DamageDataStack(::System::Collections::Generic::Stack_1<::Class_1_843DD6330B22E422*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Stack_1<::Class_1_843DD6330B22E422*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SET_DAMAGEDATASTACK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_ISINTICK_OFFSET))(this);
		}

		::System::Boolean get_IsDisposing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_ISDISPOSING_OFFSET))(this);
		}

		::System::Boolean get_IsPauseTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_ISPAUSETICK_OFFSET))(this);
		}

		::System::Void set_IsPauseTick(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SET_ISPAUSETICK_OFFSET))(this, a1);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Boolean get_IsPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_ISPAUSE_OFFSET))(this);
		}

		::RPG::GameCore::TimeScaleStack* get_TimeScaleStack()
		{
			return ((::RPG::GameCore::TimeScaleStack*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_TIMESCALESTACK_OFFSET))(this);
		}

		::System::Void set_TimeScaleStack(::RPG::GameCore::TimeScaleStack* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeScaleStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SET_TIMESCALESTACK_OFFSET))(this, a1);
		}

		::System::Single get_UnscaledDeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_UNSCALEDDELTATIME_OFFSET))(this);
		}

		::System::Void set_UnscaledDeltaTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SET_UNSCALEDDELTATIME_OFFSET))(this, a1);
		}

		::System::Single get_DeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_DELTATIME_OFFSET))(this);
		}

		::System::Void _DisposeAllModules()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__DISPOSEALLMODULES_OFFSET))(this);
		}

		::System::Void _TickModules(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__TICKMODULES_OFFSET))(this, a1);
		}

		::System::Void _LateUpdateModules(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__LATEUPDATEMODULES_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_561* GetPlugin(::System::Type* a1)
		{
			return ((::Class_0_16E4307DCC419505_561*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GETPLUGIN_OFFSET))(this, a1);
		}

		::System::Void ClearPlugins()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_CLEARPLUGINS_OFFSET))(this);
		}
	};
}
