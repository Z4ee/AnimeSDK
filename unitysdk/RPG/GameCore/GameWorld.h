#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

class Class_1_004034A1FAAF468A;
class Class_1_16C753786E6D9BD1;
class Class_1_1D69C498887B554B;
class Class_1_256D9F63CEA2C6FD;
class Class_1_2A73EE3831056054;
class Class_1_2E7E8FCA88CEACA0;
class Class_1_43BD383C98B4C0C5_102;
class Class_1_47C4886CB6C61234;
class Class_1_4C501FFF2580446A;
class Class_1_827373C1CEDFE355;
class Class_1_E35153BF9989DFD3;
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
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define RPG_GAMECORE_GAMEWORLD_ADDALLENTITYTOLOD0_OFFSET UNITYSDK_OFFSET(0xA962060)
#define RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA962690)
#define RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLOD0_OFFSET UNITYSDK_OFFSET(0xA962770)
#define RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLOD1_OFFSET UNITYSDK_OFFSET(0xA9627C0)
#define RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLOD3_OFFSET UNITYSDK_OFFSET(0xA962810)
#define RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLOD4_OFFSET UNITYSDK_OFFSET(0xA962860)
#define RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLODTICK_OFFSET UNITYSDK_OFFSET(0xA962100)
#define RPG_GAMECORE_GAMEWORLD_ADDGLOBALTIMESCALE_OFFSET UNITYSDK_OFFSET(0xA962DE0)
#define RPG_GAMECORE_GAMEWORLD_CLEARTIMESCALE_OFFSET UNITYSDK_OFFSET(0xA9645B0)
#define RPG_GAMECORE_GAMEWORLD_CREATEEMPTYENTITYCLIENTONLY_OFFSET UNITYSDK_OFFSET(0xA964D00)
#define RPG_GAMECORE_GAMEWORLD_CREATEEMPTYENTITY_OFFSET UNITYSDK_OFFSET(0xA964C20)
#define RPG_GAMECORE_GAMEWORLD_CREATEEMPTYLEVELENTITY_OFFSET UNITYSDK_OFFSET(0xA9649E0)
#define RPG_GAMECORE_GAMEWORLD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA964040)
#define RPG_GAMECORE_GAMEWORLD_ENSUREENTITYTICKORDER_OFFSET UNITYSDK_OFFSET(0xA966090)
#define RPG_GAMECORE_GAMEWORLD_FINDPREFABGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA966C40)
#define RPG_GAMECORE_GAMEWORLD_GETDYINGENTITYLIST_OFFSET UNITYSDK_OFFSET(0xA965EF0)
#define RPG_GAMECORE_GAMEWORLD_GETDYINGFRAMECOUNTER_OFFSET UNITYSDK_OFFSET(0xA9657C0)
#define RPG_GAMECORE_GAMEWORLD_GETGPTIMELINEHIERARCHYMANAGER_OFFSET UNITYSDK_OFFSET(0xA966D70)
#define RPG_GAMECORE_GAMEWORLD_GETLEVELAREAMANAGER_OFFSET UNITYSDK_OFFSET(0xA966D30)
#define RPG_GAMECORE_GAMEWORLD_GET_BATTLEINSTANCEREF_OFFSET UNITYSDK_OFFSET(0xA9671C0)
#define RPG_GAMECORE_GAMEWORLD_GET_BATTLEMODEREF_OFFSET UNITYSDK_OFFSET(0xA9671E0)
#define RPG_GAMECORE_GAMEWORLD_GET_CURLOD0ENTITYLIST_OFFSET UNITYSDK_OFFSET(0xA962B60)
#define RPG_GAMECORE_GAMEWORLD_GET_CURLOD1ENTITYLIST_OFFSET UNITYSDK_OFFSET(0xA962C00)
#define RPG_GAMECORE_GAMEWORLD_GET_CURLOD3ENTITYLIST_OFFSET UNITYSDK_OFFSET(0xA962CA0)
#define RPG_GAMECORE_GAMEWORLD_GET_CURLOD4ENTITYLIST_OFFSET UNITYSDK_OFFSET(0xA962D40)
#define RPG_GAMECORE_GAMEWORLD_GET_DAMAGEDATASTACK_OFFSET UNITYSDK_OFFSET(0xA967260)
#define RPG_GAMECORE_GAMEWORLD_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0xA967360)
#define RPG_GAMECORE_GAMEWORLD_GET_ENTITYMANAGERREF_OFFSET UNITYSDK_OFFSET(0xA967200)
#define RPG_GAMECORE_GAMEWORLD_GET_EVENTMANAGERREF_OFFSET UNITYSDK_OFFSET(0xA967210)
#define RPG_GAMECORE_GAMEWORLD_GET_ISBATTLEGAMEWORLD_OFFSET UNITYSDK_OFFSET(0xA967220)
#define RPG_GAMECORE_GAMEWORLD_GET_ISDISPOSING_OFFSET UNITYSDK_OFFSET(0xA967290)
#define RPG_GAMECORE_GAMEWORLD_GET_ISINTICK_OFFSET UNITYSDK_OFFSET(0xA967280)
#define RPG_GAMECORE_GAMEWORLD_GET_ISPAUSETICK_OFFSET UNITYSDK_OFFSET(0xA9672A0)
#define RPG_GAMECORE_GAMEWORLD_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0xA9672C0)
#define RPG_GAMECORE_GAMEWORLD_GET_PARAMREGISTER_OFFSET UNITYSDK_OFFSET(0xA967240)
#define RPG_GAMECORE_GAMEWORLD_GET_TIMESCALESTACK_OFFSET UNITYSDK_OFFSET(0xA967320)
#define RPG_GAMECORE_GAMEWORLD_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xA966560)
#define RPG_GAMECORE_GAMEWORLD_GET_UNSCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0xA967340)
#define RPG_GAMECORE_GAMEWORLD_INITCLIENTONLYPROPERTY_OFFSET UNITYSDK_OFFSET(0xA966BF0)
#define RPG_GAMECORE_GAMEWORLD_INITMAINLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xA965F40)
#define RPG_GAMECORE_GAMEWORLD_INIT_OFFSET UNITYSDK_OFFSET(0xA963FF0)
#define RPG_GAMECORE_GAMEWORLD_ISENTITYENTERDYING_OFFSET UNITYSDK_OFFSET(0xA965710)
#define RPG_GAMECORE_GAMEWORLD_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA966990)
#define RPG_GAMECORE_GAMEWORLD_MAKEDEFERDELETEENTITYDESTROY_OFFSET UNITYSDK_OFFSET(0xA9655C0)
#define RPG_GAMECORE_GAMEWORLD_MAKEENTITYDIE_OFFSET UNITYSDK_OFFSET(0xA965530)
#define RPG_GAMECORE_GAMEWORLD_MAKEENTITYREVIVE_OFFSET UNITYSDK_OFFSET(0xA9659A0)
#define RPG_GAMECORE_GAMEWORLD_MAKEKILLIMMEDIATELYDYINGENTITYDIE_OFFSET UNITYSDK_OFFSET(0xA966E80)
#define RPG_GAMECORE_GAMEWORLD_MAKETEAMENTITYREVIVE_OFFSET UNITYSDK_OFFSET(0xA965CF0)
#define RPG_GAMECORE_GAMEWORLD_REMOVEALLENTITYFROMTICKBALANCE_OFFSET UNITYSDK_OFFSET(0xA962470)
#define RPG_GAMECORE_GAMEWORLD_REMOVEENTITYFROMLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA962700)
#define RPG_GAMECORE_GAMEWORLD_REMOVEGLOBALTIMESCALE_OFFSET UNITYSDK_OFFSET(0xA962FC0)
#define RPG_GAMECORE_GAMEWORLD_SETALLENTITYSKINABLE_OFFSET UNITYSDK_OFFSET(0xA966DC0)
#define RPG_GAMECORE_GAMEWORLD_SET_BATTLEINSTANCEREF_OFFSET UNITYSDK_OFFSET(0xA9671D0)
#define RPG_GAMECORE_GAMEWORLD_SET_BATTLEMODEREF_OFFSET UNITYSDK_OFFSET(0xA9671F0)
#define RPG_GAMECORE_GAMEWORLD_SET_DAMAGEDATASTACK_OFFSET UNITYSDK_OFFSET(0xA967270)
#define RPG_GAMECORE_GAMEWORLD_SET_ISBATTLEGAMEWORLD_OFFSET UNITYSDK_OFFSET(0xA967230)
#define RPG_GAMECORE_GAMEWORLD_SET_ISPAUSETICK_OFFSET UNITYSDK_OFFSET(0xA9672B0)
#define RPG_GAMECORE_GAMEWORLD_SET_PARAMREGISTER_OFFSET UNITYSDK_OFFSET(0xA967250)
#define RPG_GAMECORE_GAMEWORLD_SET_TIMESCALESTACK_OFFSET UNITYSDK_OFFSET(0xA967330)
#define RPG_GAMECORE_GAMEWORLD_SET_UNSCALEDDELTATIME_OFFSET UNITYSDK_OFFSET(0xA967350)
#define RPG_GAMECORE_GAMEWORLD_STARTMAINLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xA965FF0)
#define RPG_GAMECORE_GAMEWORLD_STRETCHGLOBALTIMESCALE_OFFSET UNITYSDK_OFFSET(0xA9631B0)
#define RPG_GAMECORE_GAMEWORLD_SYNCENTITYTICKTIME_OFFSET UNITYSDK_OFFSET(0xA961FA0)
#define RPG_GAMECORE_GAMEWORLD_TICK_OFFSET UNITYSDK_OFFSET(0xA9662C0)
#define RPG_GAMECORE_GAMEWORLD__BALANCELATEUPDATEENTITYALL_OFFSET UNITYSDK_OFFSET(0xA962AA0)
#define RPG_GAMECORE_GAMEWORLD__BALANCETICKENTITYALL_OFFSET UNITYSDK_OFFSET(0xA9628B0)
#define RPG_GAMECORE_GAMEWORLD__CCTOR_OFFSET UNITYSDK_OFFSET(0xA967400)
#define RPG_GAMECORE_GAMEWORLD__CREATENEWENTITYIMPL_OFFSET UNITYSDK_OFFSET(0xA964AA0)
#define RPG_GAMECORE_GAMEWORLD__CTOR_OFFSET UNITYSDK_OFFSET(0xA963640)
#define RPG_GAMECORE_GAMEWORLD__DISPOSEALLMODULES_OFFSET UNITYSDK_OFFSET(0xA964410)
#define RPG_GAMECORE_GAMEWORLD__GETNEWDYINGINSTANCE_OFFSET UNITYSDK_OFFSET(0xA965400)
#define RPG_GAMECORE_GAMEWORLD__LATEUPDATEMODULES_OFFSET UNITYSDK_OFFSET(0xA966B30)
#define RPG_GAMECORE_GAMEWORLD__MAKEENTITYDEFERDELETE_OFFSET UNITYSDK_OFFSET(0xA965870)
#define RPG_GAMECORE_GAMEWORLD__MAKEENTITYDIEFINISH_OFFSET UNITYSDK_OFFSET(0xA965270)
#define RPG_GAMECORE_GAMEWORLD__MAKEGROUPENTITYDIE_OFFSET UNITYSDK_OFFSET(0xA964E80)
#define RPG_GAMECORE_GAMEWORLD__MAKELEVELENTITYDIE_OFFSET UNITYSDK_OFFSET(0xA965010)
#define RPG_GAMECORE_GAMEWORLD__ONGLOBALTIMESCALEREMOVE_OFFSET UNITYSDK_OFFSET(0xA963340)
#define RPG_GAMECORE_GAMEWORLD__ONWILLBEDESTROYCOMMONPROCESS_OFFSET UNITYSDK_OFFSET(0xA964D70)
#define RPG_GAMECORE_GAMEWORLD__POSTTICKGLOBALTIMESCALE_OFFSET UNITYSDK_OFFSET(0xA963590)
#define RPG_GAMECORE_GAMEWORLD__PRETICKGLOBALTIMESCALE_OFFSET UNITYSDK_OFFSET(0xA963450)
#define RPG_GAMECORE_GAMEWORLD__REMOVEDYINGENTITY_OFFSET UNITYSDK_OFFSET(0xA965BF0)
#define RPG_GAMECORE_GAMEWORLD__TICKDEFERDELETELIST_OFFSET UNITYSDK_OFFSET(0xA9666E0)
#define RPG_GAMECORE_GAMEWORLD__TICKDYINGENTITYLIST_OFFSET UNITYSDK_OFFSET(0xA9665C0)
#define RPG_GAMECORE_GAMEWORLD__TICKMODULES_OFFSET UNITYSDK_OFFSET(0xA966860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameWorld_TypeDefinitionIndex = 46616;

	class GameWorld : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_RuntimeIDStart()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GameWorld_TypeDefinitionIndex)->GetStaticField(0x2500);
		}
		static ::System::UInt32* StaticGet_RuntimeIDStartClientOnly()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GameWorld_TypeDefinitionIndex)->GetStaticField(0x2504);
		}
		static ::System::UInt32* StaticGet_CommonLevelEntityRuntimeID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GameWorld_TypeDefinitionIndex)->GetStaticField(0x2508);
		}
		static ::System::UInt32* StaticGet_RuntimeIDStartForBattle()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GameWorld_TypeDefinitionIndex)->GetStaticField(0x250C);
		}
		static ::System::UInt32* StaticGet_AdventureLevelEntityRuntimeID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GameWorld_TypeDefinitionIndex)->GetStaticField(0x2510);
		}
		static ::System::UInt32* StaticGet_BattleLevelEntityRuntimeID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(GameWorld_TypeDefinitionIndex)->GetStaticField(0x2514);
		}
		::RPG::GameCore::LevelAreaManager* _LevelAreaManager; // 0x10
		::System::Action_3<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState>* EntityBeforeDyingCallback; // 0x18
		::RPG::GameCore::TimeScaleStack* _TimeScaleStack_k__BackingField; // 0x20
		::System::Collections::Generic::Stack_1<::Class_1_256D9F63CEA2C6FD*>* _DamageDataStack_k__BackingField; // 0x28
		::RPG::Client::MonoEffectManager* MonoEffectManagerRef; // 0x30
		::RPG::Client::AdventurePhase* BindAdventurePhase; // 0x38
		::System::Collections::Generic::List_1<::Class_1_47C4886CB6C61234*>* _NeedTickModules; // 0x40
		::System::Action_1<::RPG::GameCore::GameEntity*>* NewEntityCallback; // 0x48
		::System::Collections::Generic::List_1<::Class_1_47C4886CB6C61234*>* _NeedLateUpdateModules; // 0x50
		::RPG::GameCore::BattleInstance* _BattleInstanceRef_k__BackingField; // 0x58
		::System::Action_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState>* EntityWillDestroyCallback; // 0x60
		::Class_1_2E7E8FCA88CEACA0* _BattleModeRef_k__BackingField; // 0x68
		::RPG::GameCore::EntityManager* _EntityManager; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4C501FFF2580446A*>* _EntityTickList; // 0x78
		::Class_1_827373C1CEDFE355* LogicRandom; // 0x80
		::System::Collections::Generic::List_1<::Class_1_16C753786E6D9BD1*>* _GlobalTimeScaleDatas; // 0x88
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _TickedEntityListPerFrame; // 0x90
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _EnterDyingEntityList; // 0x98
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _DeferDeleteEntityList; // 0xA0
		::RPG::GameCore::EventManager* _EventManager; // 0xA8
		::System::Action_3<::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState, ::Class_1_43BD383C98B4C0C5_102*>* EntityReviveCallback; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_004034A1FAAF468A*>* _PrefabGameObjectMap; // 0xB8
		::Class_1_E35153BF9989DFD3* _GPTimelineHierarchyManager; // 0xC0
		::Class_1_1D69C498887B554B* _ParamRegister_k__BackingField; // 0xC8
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _EntityList; // 0xD0
		::System::Collections::Generic::List_1<::Class_1_47C4886CB6C61234*>* _Modules; // 0xD8
		::System::Collections::Generic::List_1<::Class_1_2A73EE3831056054*>* _DyingEntityList; // 0xE0
		::System::Action_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState>* EntityDiedCallback; // 0xE8
		::System::UInt32 _IDFactory; // 0xF0
		::System::Boolean _IsInTick; // 0xF4
		::System::Boolean _IsBattleGameWorld_k__BackingField; // 0xF5
		::System::Boolean _IsPauseTick; // 0xF6
		::System::Boolean _IsDisposing; // 0xF7
		::System::Single _UnscaledDeltaTime_k__BackingField; // 0xF8
		::System::Single _BalanceTickDurationTime; // 0xFC
		::System::UInt32 _IDFactory_ClientOnly; // 0x100
		::System::Int32 _NextTickDeferDeleteCount; // 0x104
		::System::Int32 _BalanceTickDurationBucket; // 0x108
		::System::UInt32 _IDFactory_Battle; // 0x10C

		::System::Void _ctor(::Class_1_827373C1CEDFE355* pLogicRandom, ::System::Boolean isBattleWorld, ::RPG::GameCore::BattleInstance* battleInstance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_827373C1CEDFE355*, ::System::Boolean, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__CTOR_OFFSET))(this, pLogicRandom, isBattleWorld, battleInstance);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__CCTOR_OFFSET))();
		}

		::System::Void SyncEntityTickTime(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SYNCENTITYTICKTIME_OFFSET))(this, entity);
		}

		::System::Void AddAllEntityToLOD0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ADDALLENTITYTOLOD0_OFFSET))(this);
		}

		::System::Void RemoveAllEntityFromTickBalance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_REMOVEALLENTITYFROMTICKBALANCE_OFFSET))(this);
		}

		::System::Void AddEntityToLateUpdate(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLATEUPDATE_OFFSET))(this, pEntity);
		}

		::System::Void RemoveEntityFromLateUpdate(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_REMOVEENTITYFROMLATEUPDATE_OFFSET))(this, pEntity);
		}

		::System::Void AddEntityToLODTick(::RPG::GameCore::GameEntity* pEntity, ::System::UInt32 tickInterval, ::System::Boolean bHighPriority)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLODTICK_OFFSET))(this, pEntity, tickInterval, bHighPriority);
		}

		::System::Void AddEntityToLOD0(::RPG::GameCore::GameEntity* pEntity, ::System::Boolean bHighPriority)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLOD0_OFFSET))(this, pEntity, bHighPriority);
		}

		::System::Void AddEntityToLOD1(::RPG::GameCore::GameEntity* pEntity, ::System::Boolean bHighPriority)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLOD1_OFFSET))(this, pEntity, bHighPriority);
		}

		::System::Void AddEntityToLOD3(::RPG::GameCore::GameEntity* pEntity, ::System::Boolean bHighPriority)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLOD3_OFFSET))(this, pEntity, bHighPriority);
		}

		::System::Void AddEntityToLOD4(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ADDENTITYTOLOD4_OFFSET))(this, pEntity);
		}

		::System::Void _BalanceTickEntityAll(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__BALANCETICKENTITYALL_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _BalanceLateUpdateEntityAll(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__BALANCELATEUPDATEENTITYALL_OFFSET))(this, fElapsedTimeInSec);
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

		::Class_1_16C753786E6D9BD1* AddGlobalTimeScale(::System::String* slowKey, ::System::Int32 index, ::RPG::GameCore::EntityTypeMask ignoreEntityTypes, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* ignoreEntityList)
		{
			return ((::Class_1_16C753786E6D9BD1*(*)(::PVOID, ::System::String*, ::System::Int32, ::RPG::GameCore::EntityTypeMask, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ADDGLOBALTIMESCALE_OFFSET))(this, slowKey, index, ignoreEntityTypes, ignoreEntityList);
		}

		::System::Void RemoveGlobalTimeScale(::System::String* slowKey, ::System::Boolean fadeRemove)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_REMOVEGLOBALTIMESCALE_OFFSET))(this, slowKey, fadeRemove);
		}

		::System::Void StretchGlobalTimeScale(::System::String* slowKey, ::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_STRETCHGLOBALTIMESCALE_OFFSET))(this, slowKey, scale);
		}

		::System::Void _OnGlobalTimeScaleRemove(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__ONGLOBALTIMESCALEREMOVE_OFFSET))(this, index);
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

		::RPG::GameCore::GameEntity* CreateEmptyLevelEntity(::RPG::GameCore::TeamType eTeam)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_CREATEEMPTYLEVELENTITY_OFFSET))(this, eTeam);
		}

		::RPG::GameCore::GameEntity* CreateEmptyEntity(::RPG::GameCore::TeamType eTeam, ::RPG::GameCore::EntityType entityType)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_CREATEEMPTYENTITY_OFFSET))(this, eTeam, entityType);
		}

		::RPG::GameCore::GameEntity* CreateEmptyEntityClientOnly(::RPG::GameCore::TeamType eTeam, ::RPG::GameCore::EntityType entityType)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_CREATEEMPTYENTITYCLIENTONLY_OFFSET))(this, eTeam, entityType);
		}

		::RPG::GameCore::GameEntity* _CreateNewEntityImpl(::System::UInt32 runtimeID, ::RPG::GameCore::TeamType eTeam, ::RPG::GameCore::EntityType entityType)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::TeamType, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__CREATENEWENTITYIMPL_OFFSET))(this, runtimeID, eTeam, entityType);
		}

		::System::Void _OnWillBeDestroyCommonProcess(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__ONWILLBEDESTROYCOMMONPROCESS_OFFSET))(this, entity);
		}

		::System::Void _MakeGroupEntityDie(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__MAKEGROUPENTITYDIE_OFFSET))(this, entity);
		}

		::System::Void _MakeLevelEntityDie(::RPG::GameCore::GameEntity* pEntity, ::RPG::GameCore::GameEntity* pAttacker)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__MAKELEVELENTITYDIE_OFFSET))(this, pEntity, pAttacker);
		}

		::System::Void MakeEntityDie(::RPG::GameCore::GameEntity* pEntity, ::RPG::GameCore::GameEntity* pAttacker)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_MAKEENTITYDIE_OFFSET))(this, pEntity, pAttacker);
		}

		::System::Void MakeDeferDeleteEntityDestroy(::RPG::GameCore::BattleInstance* pBattleInstance, ::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_MAKEDEFERDELETEENTITYDESTROY_OFFSET))(this, pBattleInstance, pEntity);
		}

		::System::Boolean IsEntityEnterDying(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ISENTITYENTERDYING_OFFSET))(this, entity);
		}

		::System::Int32 GetDyingFrameCounter(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GETDYINGFRAMECOUNTER_OFFSET))(this, entity);
		}

		::Class_1_2A73EE3831056054* _GetNewDyingInstance()
		{
			return ((::Class_1_2A73EE3831056054*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__GETNEWDYINGINSTANCE_OFFSET))(this);
		}

		::System::Void _MakeEntityDieFinish(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__MAKEENTITYDIEFINISH_OFFSET))(this, pEntity);
		}

		::System::Void _MakeEntityDeferDelete(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__MAKEENTITYDEFERDELETE_OFFSET))(this, pEntity);
		}

		::System::Void MakeEntityRevive(::RPG::GameCore::GameEntity* pEntity, ::Class_1_43BD383C98B4C0C5_102* reviveParam)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_43BD383C98B4C0C5_102*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_MAKEENTITYREVIVE_OFFSET))(this, pEntity, reviveParam);
		}

		::RPG::GameCore::GameEntityList* MakeTeamEntityRevive(::RPG::GameCore::TeamType eTeam, ::Class_1_43BD383C98B4C0C5_102* reviveParam)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::RPG::GameCore::TeamType, ::Class_1_43BD383C98B4C0C5_102*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_MAKETEAMENTITYREVIVE_OFFSET))(this, eTeam, reviveParam);
		}

		::System::Collections::Generic::List_1<::Class_1_2A73EE3831056054*>* GetDyingEntityList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_2A73EE3831056054*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GETDYINGENTITYLIST_OFFSET))(this);
		}

		::System::Void InitMainLevelGraph(::System::String* levelGraphPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_INITMAINLEVELGRAPH_OFFSET))(this, levelGraphPath);
		}

		::System::Void StartMainLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_STARTMAINLEVELGRAPH_OFFSET))(this);
		}

		::System::Void EnsureEntityTickOrder(::RPG::GameCore::GameEntity* firstTickEntity, ::RPG::GameCore::GameEntity* secondTickEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_ENSUREENTITYTICKORDER_OFFSET))(this, firstTickEntity, secondTickEntity);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void InitClientOnlyProperty(::RPG::Client::MonoEffectManager* pEffectManager)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_INITCLIENTONLYPROPERTY_OFFSET))(this, pEffectManager);
		}

		::Class_1_004034A1FAAF468A* FindPrefabGameObject(::System::String* strKey)
		{
			return ((::Class_1_004034A1FAAF468A*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_FINDPREFABGAMEOBJECT_OFFSET))(this, strKey);
		}

		::RPG::GameCore::LevelAreaManager* GetLevelAreaManager()
		{
			return ((::RPG::GameCore::LevelAreaManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GETLEVELAREAMANAGER_OFFSET))(this);
		}

		::Class_1_E35153BF9989DFD3* GetGPTimelineHierarchyManager()
		{
			return ((::Class_1_E35153BF9989DFD3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GETGPTIMELINEHIERARCHYMANAGER_OFFSET))(this);
		}

		::System::Void SetAllEntitySkinable(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SETALLENTITYSKINABLE_OFFSET))(this, isEnable);
		}

		::System::Void MakeKillImmediatelyDyingEntityDie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_MAKEKILLIMMEDIATELYDYINGENTITYDIE_OFFSET))(this);
		}

		::System::Void _RemoveDyingEntity(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__REMOVEDYINGENTITY_OFFSET))(this, index);
		}

		::System::Void _TickDyingEntityList(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__TICKDYINGENTITYLIST_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _TickDeferDeleteList(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__TICKDEFERDELETELIST_OFFSET))(this, fElapsedTimeInSec);
		}

		::RPG::GameCore::BattleInstance* get_BattleInstanceRef()
		{
			return ((::RPG::GameCore::BattleInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_BATTLEINSTANCEREF_OFFSET))(this);
		}

		::System::Void set_BattleInstanceRef(::RPG::GameCore::BattleInstance* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SET_BATTLEINSTANCEREF_OFFSET))(this, value);
		}

		::Class_1_2E7E8FCA88CEACA0* get_BattleModeRef()
		{
			return ((::Class_1_2E7E8FCA88CEACA0*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_BATTLEMODEREF_OFFSET))(this);
		}

		::System::Void set_BattleModeRef(::Class_1_2E7E8FCA88CEACA0* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E7E8FCA88CEACA0*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SET_BATTLEMODEREF_OFFSET))(this, value);
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

		::System::Void set_IsBattleGameWorld(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SET_ISBATTLEGAMEWORLD_OFFSET))(this, value);
		}

		::Class_1_1D69C498887B554B* get_ParamRegister()
		{
			return ((::Class_1_1D69C498887B554B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_PARAMREGISTER_OFFSET))(this);
		}

		::System::Void set_ParamRegister(::Class_1_1D69C498887B554B* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1D69C498887B554B*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SET_PARAMREGISTER_OFFSET))(this, value);
		}

		::System::Collections::Generic::Stack_1<::Class_1_256D9F63CEA2C6FD*>* get_DamageDataStack()
		{
			return ((::System::Collections::Generic::Stack_1<::Class_1_256D9F63CEA2C6FD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_DAMAGEDATASTACK_OFFSET))(this);
		}

		::System::Void set_DamageDataStack(::System::Collections::Generic::Stack_1<::Class_1_256D9F63CEA2C6FD*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Stack_1<::Class_1_256D9F63CEA2C6FD*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SET_DAMAGEDATASTACK_OFFSET))(this, value);
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

		::System::Void set_IsPauseTick(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SET_ISPAUSETICK_OFFSET))(this, value);
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

		::System::Void set_TimeScaleStack(::RPG::GameCore::TimeScaleStack* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeScaleStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SET_TIMESCALESTACK_OFFSET))(this, value);
		}

		::System::Single get_UnscaledDeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_UNSCALEDDELTATIME_OFFSET))(this);
		}

		::System::Void set_UnscaledDeltaTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_SET_UNSCALEDDELTATIME_OFFSET))(this, value);
		}

		::System::Single get_DeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD_GET_DELTATIME_OFFSET))(this);
		}

		::System::Void _DisposeAllModules()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__DISPOSEALLMODULES_OFFSET))(this);
		}

		::System::Void _TickModules(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__TICKMODULES_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _LateUpdateModules(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEWORLD__LATEUPDATEMODULES_OFFSET))(this, fElapsedTimeInSec);
		}
	};
}
