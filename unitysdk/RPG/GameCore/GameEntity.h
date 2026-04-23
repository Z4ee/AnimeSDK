#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/CustomRP/EObjectFeature.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/RPG/GameCore/CampType.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/RPG/GameCore/EntityDestroyWaitReason.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/ForceIgnoreTickLodReason.h"
#include "unitysdk/RPG/GameCore/ForceTickLodLowestReason.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/Struct_2_6C37BA9A5193B5D0.h"
#include "unitysdk/Struct_2_FA7629C824961FD2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_27D9C028BDC40E5D;
class Class_1_4C501FFF2580446A;
class Class_1_820B63E5CA13D294;
class Class_1_EA37F753EBFA50DF;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class GameComponentBase; }
namespace RPG::GameCore { class GameEntity_GameComponentArray; }
namespace RPG::GameCore { class GameEntity_GameComponentList; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class TimeScaleStack; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace UnityEngine { class GameObject; }

#define RPG_GAMECORE_GAMEENTITY_ADDDESTROYWAIT_OFFSET UNITYSDK_OFFSET(0xB698320)
#define RPG_GAMECORE_GAMEENTITY_DEATHRATTLE_OFFSET UNITYSDK_OFFSET(0xB697080)
#define RPG_GAMECORE_GAMEENTITY_DESTROYCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0xB6978D0)
#define RPG_GAMECORE_GAMEENTITY_DESTROYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB697860)
#define RPG_GAMECORE_GAMEENTITY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6969D0)
#define RPG_GAMECORE_GAMEENTITY_ENABLEFORCEIGNORETICKLOD_OFFSET UNITYSDK_OFFSET(0xB695B20)
#define RPG_GAMECORE_GAMEENTITY_ENABLETICKLODLOWEST_OFFSET UNITYSDK_OFFSET(0xB695BE0)
#define RPG_GAMECORE_GAMEENTITY_GETCOMPONENTATINDEX_OFFSET UNITYSDK_OFFSET(0xB697FF0)
#define RPG_GAMECORE_GAMEENTITY_GETCOMPONENTBYTYPEINDEX_OFFSET UNITYSDK_OFFSET(0xB697640)
#define RPG_GAMECORE_GAMEENTITY_GETCOMPONENTCOUNT_OFFSET UNITYSDK_OFFSET(0xB697FA0)
#define RPG_GAMECORE_GAMEENTITY_GETCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0xB697720)
#define RPG_GAMECORE_GAMEENTITY_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB6976B0)
#define RPG_GAMECORE_GAMEENTITY_GETTICKINTERVAL_OFFSET UNITYSDK_OFFSET(0xB6956A0)
#define RPG_GAMECORE_GAMEENTITY_GET_CAMPID_OFFSET UNITYSDK_OFFSET(0xB698F30)
#define RPG_GAMECORE_GAMEENTITY_GET_DESTROYWAITLIST_OFFSET UNITYSDK_OFFSET(0xB698C10)
#define RPG_GAMECORE_GAMEENTITY_GET_ENTITYTYPE_OFFSET UNITYSDK_OFFSET(0xB698E40)
#define RPG_GAMECORE_GAMEENTITY_GET_GROUPENTITYID_OFFSET UNITYSDK_OFFSET(0xB699030)
#define RPG_GAMECORE_GAMEENTITY_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xB699020)
#define RPG_GAMECORE_GAMEENTITY_GET_HASDESTROYWAIT_OFFSET UNITYSDK_OFFSET(0xB698C00)
#define RPG_GAMECORE_GAMEENTITY_GET_ISFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xB698E80)
#define RPG_GAMECORE_GAMEENTITY_GET_ISHERO_OFFSET UNITYSDK_OFFSET(0xB698E60)
#define RPG_GAMECORE_GAMEENTITY_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0xB696560)
#define RPG_GAMECORE_GAMEENTITY_GET_ISONSTAGE_OFFSET UNITYSDK_OFFSET(0xB698BE0)
#define RPG_GAMECORE_GAMEENTITY_GET_ISSTORYMODE_OFFSET UNITYSDK_OFFSET(0xB698C20)
#define RPG_GAMECORE_GAMEENTITY_GET_KILLIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xB698C40)
#define RPG_GAMECORE_GAMEENTITY_GET_LASTTICKBUCKET_OFFSET UNITYSDK_OFFSET(0xB6966D0)
#define RPG_GAMECORE_GAMEENTITY_GET_LASTTICKFRAME_OFFSET UNITYSDK_OFFSET(0xB696580)
#define RPG_GAMECORE_GAMEENTITY_GET_LASTTICKTIME_OFFSET UNITYSDK_OFFSET(0xB6966F0)
#define RPG_GAMECORE_GAMEENTITY_GET_NAMEFORGAMECORE_OFFSET UNITYSDK_OFFSET(0xB698BB0)
#define RPG_GAMECORE_GAMEENTITY_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB698B70)
#define RPG_GAMECORE_GAMEENTITY_GET_OBJECTFEATURE_OFFSET UNITYSDK_OFFSET(0xB698FF0)
#define RPG_GAMECORE_GAMEENTITY_GET_OWNERADVENTUREPHASEREF_OFFSET UNITYSDK_OFFSET(0xB698B00)
#define RPG_GAMECORE_GAMEENTITY_GET_OWNERMAPDEFREF_OFFSET UNITYSDK_OFFSET(0xB698A20)
#define RPG_GAMECORE_GAMEENTITY_GET_OWNERWORLDREF_OFFSET UNITYSDK_OFFSET(0xB698B60)
#define RPG_GAMECORE_GAMEENTITY_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB698B90)
#define RPG_GAMECORE_GAMEENTITY_GET_SERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xB699010)
#define RPG_GAMECORE_GAMEENTITY_GET_STATEALIVE_OFFSET UNITYSDK_OFFSET(0xB698BD0)
#define RPG_GAMECORE_GAMEENTITY_GET_TEAM_OFFSET UNITYSDK_OFFSET(0xB698EA0)
#define RPG_GAMECORE_GAMEENTITY_GET_TICKABLE_OFFSET UNITYSDK_OFFSET(0xB696050)
#define RPG_GAMECORE_GAMEENTITY_GET_TICKLODBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0xB696710)
#define RPG_GAMECORE_GAMEENTITY_GET_TIMESCALEWITHWORLD_OFFSET UNITYSDK_OFFSET(0xB698CC0)
#define RPG_GAMECORE_GAMEENTITY_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xB698C60)
#define RPG_GAMECORE_GAMEENTITY_GET_UNITYGO_OFFSET UNITYSDK_OFFSET(0xB698F60)
#define RPG_GAMECORE_GAMEENTITY_GET_UNSTAGEREASONKEY_OFFSET UNITYSDK_OFFSET(0xB698BF0)
#define RPG_GAMECORE_GAMEENTITY_GET_VISBILEONSTAGE_OFFSET UNITYSDK_OFFSET(0xB698F90)
#define RPG_GAMECORE_GAMEENTITY_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0xB698F70)
#define RPG_GAMECORE_GAMEENTITY_HASHDESTROYWAITREASON_1_OFFSET UNITYSDK_OFFSET(0xB698710)
#define RPG_GAMECORE_GAMEENTITY_HASHDESTROYWAITREASON_OFFSET UNITYSDK_OFFSET(0xB698680)
#define RPG_GAMECORE_GAMEENTITY_IGNORENEXTLODFLUSH_OFFSET UNITYSDK_OFFSET(0xB695ED0)
#define RPG_GAMECORE_GAMEENTITY_ISCULLEDBYCAMERA_OFFSET UNITYSDK_OFFSET(0xB695860)
#define RPG_GAMECORE_GAMEENTITY_ISCURTICKLISTREFNULL_OFFSET UNITYSDK_OFFSET(0xB695A90)
#define RPG_GAMECORE_GAMEENTITY_ISENTITYAFFECTBYGLOBALTIMESCALELOCKAFTERLOCKED_OFFSET UNITYSDK_OFFSET(0xB698DE0)
#define RPG_GAMECORE_GAMEENTITY_ISENTITYAFFECTBYGLOBALTIMESCALELOCK_OFFSET UNITYSDK_OFFSET(0xB698D90)
#define RPG_GAMECORE_GAMEENTITY_ISFORCEIGNORETICKLOD_OFFSET UNITYSDK_OFFSET(0xB695B90)
#define RPG_GAMECORE_GAMEENTITY_ISFORCETICKLODLOWEST_OFFSET UNITYSDK_OFFSET(0xB695CA0)
#define RPG_GAMECORE_GAMEENTITY_ISINTHISTICKLIST_OFFSET UNITYSDK_OFFSET(0xB6958C0)
#define RPG_GAMECORE_GAMEENTITY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB698060)
#define RPG_GAMECORE_GAMEENTITY_LIMBOREVIVABLE_OFFSET UNITYSDK_OFFSET(0xB696E70)
#define RPG_GAMECORE_GAMEENTITY_ONWILLBEDESTROY_OFFSET UNITYSDK_OFFSET(0xB6974F0)
#define RPG_GAMECORE_GAMEENTITY_OVERRIDECULLBOUNDS_OFFSET UNITYSDK_OFFSET(0xB695F40)
#define RPG_GAMECORE_GAMEENTITY_REMOVECURTICKLISTREF_OFFSET UNITYSDK_OFFSET(0xB6959F0)
#define RPG_GAMECORE_GAMEENTITY_REMOVEDESTROYWAIT_OFFSET UNITYSDK_OFFSET(0xB698500)
#define RPG_GAMECORE_GAMEENTITY_SETBINDSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xB698900)
#define RPG_GAMECORE_GAMEENTITY_SETCLASSIFYTYPE_OFFSET UNITYSDK_OFFSET(0xB696730)
#define RPG_GAMECORE_GAMEENTITY_SETCURTICKLISTREF_OFFSET UNITYSDK_OFFSET(0xB695950)
#define RPG_GAMECORE_GAMEENTITY_SETGROUPENTITYID_OFFSET UNITYSDK_OFFSET(0xB698950)
#define RPG_GAMECORE_GAMEENTITY_SETLASTTICK_OFFSET UNITYSDK_OFFSET(0xB6964F0)
#define RPG_GAMECORE_GAMEENTITY_SETSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xB698850)
#define RPG_GAMECORE_GAMEENTITY_SETSTAGESTATE_OFFSET UNITYSDK_OFFSET(0xB6981F0)
#define RPG_GAMECORE_GAMEENTITY_SETTICKINTERVAL_OFFSET UNITYSDK_OFFSET(0xB695640)
#define RPG_GAMECORE_GAMEENTITY_SET_CAMPID_OFFSET UNITYSDK_OFFSET(0xB698F40)
#define RPG_GAMECORE_GAMEENTITY_SET_ENTITYTYPE_OFFSET UNITYSDK_OFFSET(0xB698E50)
#define RPG_GAMECORE_GAMEENTITY_SET_ISFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xB698E90)
#define RPG_GAMECORE_GAMEENTITY_SET_ISHERO_OFFSET UNITYSDK_OFFSET(0xB698E70)
#define RPG_GAMECORE_GAMEENTITY_SET_ISLOADED_OFFSET UNITYSDK_OFFSET(0xB696570)
#define RPG_GAMECORE_GAMEENTITY_SET_ISSTORYMODE_OFFSET UNITYSDK_OFFSET(0xB698C30)
#define RPG_GAMECORE_GAMEENTITY_SET_KILLIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xB698C50)
#define RPG_GAMECORE_GAMEENTITY_SET_LASTTICKBUCKET_OFFSET UNITYSDK_OFFSET(0xB6966E0)
#define RPG_GAMECORE_GAMEENTITY_SET_LASTTICKFRAME_OFFSET UNITYSDK_OFFSET(0xB696590)
#define RPG_GAMECORE_GAMEENTITY_SET_LASTTICKTIME_OFFSET UNITYSDK_OFFSET(0xB696700)
#define RPG_GAMECORE_GAMEENTITY_SET_NAMEFORGAMECORE_OFFSET UNITYSDK_OFFSET(0xB698BC0)
#define RPG_GAMECORE_GAMEENTITY_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB698B80)
#define RPG_GAMECORE_GAMEENTITY_SET_OBJECTFEATURE_OFFSET UNITYSDK_OFFSET(0xB699000)
#define RPG_GAMECORE_GAMEENTITY_SET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB698BA0)
#define RPG_GAMECORE_GAMEENTITY_SET_STATEALIVE_OFFSET UNITYSDK_OFFSET(0xB696950)
#define RPG_GAMECORE_GAMEENTITY_SET_TEAM_OFFSET UNITYSDK_OFFSET(0xB698EB0)
#define RPG_GAMECORE_GAMEENTITY_SET_TICKABLE_OFFSET UNITYSDK_OFFSET(0xB696060)
#define RPG_GAMECORE_GAMEENTITY_SET_TICKLODBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0xB696720)
#define RPG_GAMECORE_GAMEENTITY_SET_UNITYGO_OFFSET UNITYSDK_OFFSET(0xB698F50)
#define RPG_GAMECORE_GAMEENTITY_SET_VISIBLE_OFFSET UNITYSDK_OFFSET(0xB698F80)
#define RPG_GAMECORE_GAMEENTITY_SHOULDDELAYTICK_OFFSET UNITYSDK_OFFSET(0xB695700)
#define RPG_GAMECORE_GAMEENTITY_TICK_OFFSET UNITYSDK_OFFSET(0xB697D50)
#define RPG_GAMECORE_GAMEENTITY_UPDATETICKELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0xB6965A0)
#define RPG_GAMECORE_GAMEENTITY__CCTOR_OFFSET UNITYSDK_OFFSET(0xB696780)
#define RPG_GAMECORE_GAMEENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0xB6967A0)
#define RPG_GAMECORE_GAMEENTITY__REGISTERTICKLODPROXY_OFFSET UNITYSDK_OFFSET(0xB695CF0)
#define RPG_GAMECORE_GAMEENTITY__REMOVETICKLODPROXY_OFFSET UNITYSDK_OFFSET(0xB695E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntity_TypeDefinitionIndex = 49334;

	class GameEntity : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__DisposeGameEntityMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(GameEntity_TypeDefinitionIndex)->GetStaticField(0x4F6B0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__LateUpdateMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(GameEntity_TypeDefinitionIndex)->GetStaticField(0x4F6B8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__CreateGameEntityMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(GameEntity_TypeDefinitionIndex)->GetStaticField(0x4F6C0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__TickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(GameEntity_TypeDefinitionIndex)->GetStaticField(0x4F6C8);
		}
		::RPG::GameCore::GameEntity_GameComponentArray* _ComponentArrayRef; // 0x10
		::Class_1_EA37F753EBFA50DF* WorldTimeScaleAdpator; // 0x18
		::UnityEngine::GameObject* _UnityGO; // 0x20
		::System::Action_3<::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::String*>* OnStageStateChange; // 0x28
		::RPG::GameCore::TimeScaleStack* TimeScaleStack; // 0x30
		::RPG::GameCore::GameEntity_GameComponentList* _ComponentList; // 0x38
		::RPG::GameCore::GameEntity_GameComponentList* _LateUpdateComponentList; // 0x40
		::Il2CppArray<::RPG::GameCore::GameComponentBase*>* _ComponentArray; // 0x48
		::System::Action_3<::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamType, ::RPG::GameCore::TeamType>* OnTeamChange; // 0x50
		::System::String* _Name_k__BackingField; // 0x58
		::System::Action_1<::RPG::GameCore::GameEntity*>* DisposeCallback; // 0x60
		::RPG::GameCore::GameEntity_GameComponentList* _TickComponentList; // 0x68
		::System::String* TickLodTemplate; // 0x70
		::RPG::GameCore::HoyoTagContainer* HoyoTagContainer; // 0x78
		::Class_1_820B63E5CA13D294* TagComponentContainer; // 0x80
		::Class_1_27D9C028BDC40E5D* _TickLodProxy; // 0x88
		::System::String* _NameForGameCore_k__BackingField; // 0x90
		::System::String* _UnstageReasonKey; // 0x98
		::Struct_2_FA7629C824961FD2 _CurTickListRef; // 0xA0
		::RPG::PoolList_1<::Struct_2_6C37BA9A5193B5D0>* _DestroyWaitList; // 0xB0
		::RPG::GameCore::GameWorld* _OwnerWorldRef; // 0xB8
		::System::UInt32 ForceIgnoreTickLodBistSet; // 0xC0
		::RPG::GameCore::TeamType _Team; // 0xC4
		::System::UInt64 _LastTickFrame_k__BackingField; // 0xC8
		::RPG::Client::ReasonBool_1<::RPG::GameCore::ForceTickLodLowestReason> _ForceTickLodLowestReason; // 0xD0
		::System::Boolean _ShouldLateUpdate; // 0xD8
		::System::Boolean _IsRegisterEnviroChara; // 0xD9
		::System::Boolean HasDisposed; // 0xDA
		::System::Boolean _IsHero_k__BackingField; // 0xDB
		::System::UInt32 _GroupEntityID; // 0xDC
		::System::UInt32 _TickDelayFrameCount; // 0xE0
		::RPG::GameCore::AliveState _AliveState; // 0xE4
		::RPG::GameCore::EntityType _EntityType; // 0xE8
		::System::Boolean Disposing; // 0xEC
		::System::Boolean _IsFakeAvatar_k__BackingField; // 0xED
		::System::Boolean _Visible_k__BackingField; // 0xEE
		::System::Boolean _KillImmediately_k__BackingField; // 0xEF
		::RPG::CustomRP::EObjectFeature _ObjectFeature_k__BackingField; // 0xF0
		::System::Single _TickLodBoundSize_k__BackingField; // 0xF4
		::RPG::GameCore::CampType _CampID_k__BackingField; // 0xF8
		::System::Int32 _LastTickBucket_k__BackingField; // 0xFC
		::System::UInt32 _ServerEntityID; // 0x100
		::System::Boolean _Tickable; // 0x104
		::System::Boolean _IsLoaded_k__BackingField; // 0x105
		::System::Boolean _IsStoryMode_k__BackingField; // 0x106
		::System::Boolean _IsOnStage; // 0x107
		::System::Single _LastTickTime_k__BackingField; // 0x108
		::System::UInt32 _GroupID; // 0x10C
		::System::UInt32 _RuntimeID_k__BackingField; // 0x110

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::RPG::GameCore::GameWorld* pOwnerWorld, ::System::UInt32 runtimeID, ::RPG::GameCore::EntityType entityType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::UInt32, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY__CTOR_OFFSET))(this, pOwnerWorld, runtimeID, entityType);
		}

		::System::Void SetTickInterval(::System::UInt32 tickIntervalNew)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SETTICKINTERVAL_OFFSET))(this, tickIntervalNew);
		}

		::System::UInt32 GetTickInterval()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GETTICKINTERVAL_OFFSET))(this);
		}

		::System::Boolean ShouldDelayTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SHOULDDELAYTICK_OFFSET))(this);
		}

		::System::Boolean IsCulledByCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_ISCULLEDBYCAMERA_OFFSET))(this);
		}

		::System::Boolean IsInThisTickList(::Class_1_4C501FFF2580446A* tickListRef)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_4C501FFF2580446A*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_ISINTHISTICKLIST_OFFSET))(this, tickListRef);
		}

		::System::Void SetCurTickListRef(::Class_1_4C501FFF2580446A* ownerListRef, ::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>* ownerListNodeRef)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4C501FFF2580446A*, ::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SETCURTICKLISTREF_OFFSET))(this, ownerListRef, ownerListNodeRef);
		}

		::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>* RemoveCurTickListRef()
		{
			return ((::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_REMOVECURTICKLISTREF_OFFSET))(this);
		}

		::System::Boolean IsCurTickListRefNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_ISCURTICKLISTREFNULL_OFFSET))(this);
		}

		::System::Void EnableForceIgnoreTickLod(::RPG::GameCore::ForceIgnoreTickLodReason reason, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ForceIgnoreTickLodReason, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_ENABLEFORCEIGNORETICKLOD_OFFSET))(this, reason, enable);
		}

		::System::Boolean IsForceIgnoreTickLod()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_ISFORCEIGNORETICKLOD_OFFSET))(this);
		}

		::System::Void EnableTickLodLowest(::RPG::GameCore::ForceTickLodLowestReason reason, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ForceTickLodLowestReason, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_ENABLETICKLODLOWEST_OFFSET))(this, reason, enable);
		}

		::System::Boolean IsForceTickLodLowest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_ISFORCETICKLODLOWEST_OFFSET))(this);
		}

		::System::Void _RegisterTickLodProxy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY__REGISTERTICKLODPROXY_OFFSET))(this);
		}

		::System::Void _RemoveTickLodProxy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY__REMOVETICKLODPROXY_OFFSET))(this);
		}

		::System::Void IgnoreNextLodFlush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_IGNORENEXTLODFLUSH_OFFSET))(this);
		}

		::System::Void OverrideCullBounds(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_OVERRIDECULLBOUNDS_OFFSET))(this, center, size);
		}

		::System::Boolean get_Tickable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_TICKABLE_OFFSET))(this);
		}

		::System::Void set_Tickable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_TICKABLE_OFFSET))(this, value);
		}

		::System::Boolean get_IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_ISLOADED_OFFSET))(this);
		}

		::System::Void set_IsLoaded(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_ISLOADED_OFFSET))(this, value);
		}

		::System::UInt64 get_LastTickFrame()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_LASTTICKFRAME_OFFSET))(this);
		}

		::System::Void set_LastTickFrame(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_LASTTICKFRAME_OFFSET))(this, value);
		}

		::System::Void SetLastTick(::System::Int32 bucket, ::System::Single lastTick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SETLASTTICK_OFFSET))(this, bucket, lastTick);
		}

		::System::Single UpdateTickElapsedTime(::System::Int32 bucket, ::System::Single duration)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_UPDATETICKELAPSEDTIME_OFFSET))(this, bucket, duration);
		}

		::System::Int32 get_LastTickBucket()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_LASTTICKBUCKET_OFFSET))(this);
		}

		::System::Void set_LastTickBucket(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_LASTTICKBUCKET_OFFSET))(this, value);
		}

		::System::Single get_LastTickTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_LASTTICKTIME_OFFSET))(this);
		}

		::System::Void set_LastTickTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_LASTTICKTIME_OFFSET))(this, value);
		}

		::System::Single get_TickLodBoundSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_TICKLODBOUNDSIZE_OFFSET))(this);
		}

		::System::Void set_TickLodBoundSize(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_TICKLODBOUNDSIZE_OFFSET))(this, value);
		}

		::System::Void SetClassifyType(::RPG::GameCore::EntityClassifyType t)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityClassifyType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SETCLASSIFYTYPE_OFFSET))(this, t);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_DISPOSE_OFFSET))(this);
		}

		::System::Void LimboRevivable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_LIMBOREVIVABLE_OFFSET))(this);
		}

		::System::Void Deathrattle(::RPG::GameCore::GameEntity* pKiller)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_DEATHRATTLE_OFFSET))(this, pKiller);
		}

		::System::Void OnWillBeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_ONWILLBEDESTROY_OFFSET))(this);
		}

		::RPG::GameCore::GameComponentBase* GetComponentByTypeIndex(::System::Int32 comTypeIndex)
		{
			return ((::RPG::GameCore::GameComponentBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GETCOMPONENTBYTYPEINDEX_OFFSET))(this, comTypeIndex);
		}

		::RPG::GameCore::GameComponentBase* GetComponent(::System::Type* t)
		{
			return ((::RPG::GameCore::GameComponentBase*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GETCOMPONENT_OFFSET))(this, t);
		}

		::RPG::GameCore::GameComponentBase* GetComponent_1(::System::RuntimeTypeHandle typeHandle)
		{
			return ((::RPG::GameCore::GameComponentBase*(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GETCOMPONENT_1_OFFSET))(this, typeHandle);
		}

		::System::Void DestroyComponent(::System::Type* eType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_DESTROYCOMPONENT_OFFSET))(this, eType);
		}

		::System::Void DestroyComponent_1(::System::RuntimeTypeHandle typeHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_DESTROYCOMPONENT_1_OFFSET))(this, typeHandle);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Int32 GetComponentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GETCOMPONENTCOUNT_OFFSET))(this);
		}

		::RPG::GameCore::GameComponentBase* GetComponentAtIndex(::System::Int32 nIndex)
		{
			return ((::RPG::GameCore::GameComponentBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GETCOMPONENTATINDEX_OFFSET))(this, nIndex);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void SetStageState(::System::Boolean onStage, ::System::String* unstageReasonKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SETSTAGESTATE_OFFSET))(this, onStage, unstageReasonKey);
		}

		::System::Void AddDestroyWait(::RPG::GameCore::GameEntity* source, ::RPG::GameCore::EntityDestroyWaitReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::EntityDestroyWaitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_ADDDESTROYWAIT_OFFSET))(this, source, reason);
		}

		::System::Void RemoveDestroyWait(::RPG::GameCore::GameEntity* source, ::RPG::GameCore::EntityDestroyWaitReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::EntityDestroyWaitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_REMOVEDESTROYWAIT_OFFSET))(this, source, reason);
		}

		::System::Boolean HashDestroyWaitReason(::RPG::GameCore::EntityDestroyWaitReason reason)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EntityDestroyWaitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_HASHDESTROYWAITREASON_OFFSET))(this, reason);
		}

		::System::Boolean HashDestroyWaitReason_1(::RPG::GameCore::GameEntity* source, ::RPG::GameCore::EntityDestroyWaitReason reason)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::EntityDestroyWaitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_HASHDESTROYWAITREASON_1_OFFSET))(this, source, reason);
		}

		::System::Void SetServerEntityID(::System::UInt32 serverEntityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SETSERVERENTITYID_OFFSET))(this, serverEntityID);
		}

		::System::Void SetBindServerEntityID(::System::UInt32 serverEntityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SETBINDSERVERENTITYID_OFFSET))(this, serverEntityID);
		}

		::System::Void SetGroupEntityID(::System::UInt32 groupID, ::System::UInt32 groupEntityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SETGROUPENTITYID_OFFSET))(this, groupID, groupEntityID);
		}

		::RPG::Client::MapDef* get_OwnerMapDefRef()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_OWNERMAPDEFREF_OFFSET))(this);
		}

		::RPG::Client::AdventurePhase* get_OwnerAdventurePhaseRef()
		{
			return ((::RPG::Client::AdventurePhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_OWNERADVENTUREPHASEREF_OFFSET))(this);
		}

		::RPG::GameCore::GameWorld* get_OwnerWorldRef()
		{
			return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_OWNERWORLDREF_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_NAME_OFFSET))(this, value);
		}

		::System::UInt32 get_RuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_RUNTIMEID_OFFSET))(this);
		}

		::System::Void set_RuntimeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_RUNTIMEID_OFFSET))(this, value);
		}

		::System::String* get_NameForGameCore()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_NAMEFORGAMECORE_OFFSET))(this);
		}

		::System::Void set_NameForGameCore(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_NAMEFORGAMECORE_OFFSET))(this, value);
		}

		::RPG::GameCore::AliveState get_StateAlive()
		{
			return ((::RPG::GameCore::AliveState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_STATEALIVE_OFFSET))(this);
		}

		::System::Void set_StateAlive(::RPG::GameCore::AliveState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_STATEALIVE_OFFSET))(this, value);
		}

		::System::Boolean get_IsOnStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_ISONSTAGE_OFFSET))(this);
		}

		::System::String* get_UnStageReasonKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_UNSTAGEREASONKEY_OFFSET))(this);
		}

		::System::Boolean get_HasDestroyWait()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_HASDESTROYWAIT_OFFSET))(this);
		}

		::RPG::PoolList_1<::Struct_2_6C37BA9A5193B5D0>* get_DestroyWaitList()
		{
			return ((::RPG::PoolList_1<::Struct_2_6C37BA9A5193B5D0>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_DESTROYWAITLIST_OFFSET))(this);
		}

		::System::Boolean get_IsStoryMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_ISSTORYMODE_OFFSET))(this);
		}

		::System::Void set_IsStoryMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_ISSTORYMODE_OFFSET))(this, value);
		}

		::System::Boolean get_KillImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_KILLIMMEDIATELY_OFFSET))(this);
		}

		::System::Void set_KillImmediately(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_KILLIMMEDIATELY_OFFSET))(this, value);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Single get_TimeScaleWithWorld()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_TIMESCALEWITHWORLD_OFFSET))(this);
		}

		::System::Boolean IsEntityAffectByGlobalTimescaleLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_ISENTITYAFFECTBYGLOBALTIMESCALELOCK_OFFSET))(this);
		}

		::System::Boolean IsEntityAffectByGlobalTimescaleLockAfterLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_ISENTITYAFFECTBYGLOBALTIMESCALELOCKAFTERLOCKED_OFFSET))(this);
		}

		::RPG::GameCore::EntityType get_EntityType()
		{
			return ((::RPG::GameCore::EntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_ENTITYTYPE_OFFSET))(this);
		}

		::System::Void set_EntityType(::RPG::GameCore::EntityType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_ENTITYTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsHero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_ISHERO_OFFSET))(this);
		}

		::System::Void set_IsHero(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_ISHERO_OFFSET))(this, value);
		}

		::System::Boolean get_IsFakeAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_ISFAKEAVATAR_OFFSET))(this);
		}

		::System::Void set_IsFakeAvatar(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_ISFAKEAVATAR_OFFSET))(this, value);
		}

		::RPG::GameCore::TeamType get_Team()
		{
			return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_TEAM_OFFSET))(this);
		}

		::System::Void set_Team(::RPG::GameCore::TeamType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_TEAM_OFFSET))(this, value);
		}

		::RPG::GameCore::CampType get_CampID()
		{
			return ((::RPG::GameCore::CampType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_CAMPID_OFFSET))(this);
		}

		::System::Void set_CampID(::RPG::GameCore::CampType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CampType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_CAMPID_OFFSET))(this, value);
		}

		::System::Void set_UnityGO(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_UNITYGO_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_UnityGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_UNITYGO_OFFSET))(this);
		}

		::System::Boolean get_Visible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_VISIBLE_OFFSET))(this);
		}

		::System::Void set_Visible(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_VISIBLE_OFFSET))(this, value);
		}

		::System::Boolean get_VisbileOnStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_VISBILEONSTAGE_OFFSET))(this);
		}

		::RPG::CustomRP::EObjectFeature get_ObjectFeature()
		{
			return ((::RPG::CustomRP::EObjectFeature(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_OBJECTFEATURE_OFFSET))(this);
		}

		::System::Void set_ObjectFeature(::RPG::CustomRP::EObjectFeature value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::EObjectFeature))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_OBJECTFEATURE_OFFSET))(this, value);
		}

		::System::UInt32 get_ServerEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_SERVERENTITYID_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_GroupEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_GROUPENTITYID_OFFSET))(this);
		}
	};
}
