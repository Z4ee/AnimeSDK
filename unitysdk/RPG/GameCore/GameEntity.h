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

#define RPG_GAMECORE_GAMEENTITY_ADDDESTROYWAIT_OFFSET UNITYSDK_OFFSET(0xCE04AA0)
#define RPG_GAMECORE_GAMEENTITY_DEATHRATTLE_OFFSET UNITYSDK_OFFSET(0xCE03770)
#define RPG_GAMECORE_GAMEENTITY_DESTROYCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0xCE04060)
#define RPG_GAMECORE_GAMEENTITY_DESTROYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCE03FF0)
#define RPG_GAMECORE_GAMEENTITY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE03020)
#define RPG_GAMECORE_GAMEENTITY_ENABLEFORCEIGNORETICKLOD_OFFSET UNITYSDK_OFFSET(0xCE01DE0)
#define RPG_GAMECORE_GAMEENTITY_ENABLETICKLODLOWEST_OFFSET UNITYSDK_OFFSET(0xCE01EA0)
#define RPG_GAMECORE_GAMEENTITY_GETCOMPONENTATINDEX_OFFSET UNITYSDK_OFFSET(0xCE04760)
#define RPG_GAMECORE_GAMEENTITY_GETCOMPONENTBYTYPEINDEX_OFFSET UNITYSDK_OFFSET(0xCE03E10)
#define RPG_GAMECORE_GAMEENTITY_GETCOMPONENTCOUNT_OFFSET UNITYSDK_OFFSET(0xCE04710)
#define RPG_GAMECORE_GAMEENTITY_GETCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0xCE03F60)
#define RPG_GAMECORE_GAMEENTITY_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0xCE03E80)
#define RPG_GAMECORE_GAMEENTITY_GETTICKINTERVAL_OFFSET UNITYSDK_OFFSET(0xCE01980)
#define RPG_GAMECORE_GAMEENTITY_GET_CAMPID_OFFSET UNITYSDK_OFFSET(0xCE05820)
#define RPG_GAMECORE_GAMEENTITY_GET_DESTROYWAITLIST_OFFSET UNITYSDK_OFFSET(0xCE054F0)
#define RPG_GAMECORE_GAMEENTITY_GET_ENTITYTYPE_OFFSET UNITYSDK_OFFSET(0xCE05730)
#define RPG_GAMECORE_GAMEENTITY_GET_GROUPENTITYID_OFFSET UNITYSDK_OFFSET(0xCE05920)
#define RPG_GAMECORE_GAMEENTITY_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xCE05910)
#define RPG_GAMECORE_GAMEENTITY_GET_HASDESTROYWAIT_OFFSET UNITYSDK_OFFSET(0xCE054E0)
#define RPG_GAMECORE_GAMEENTITY_GET_ISFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xCE05770)
#define RPG_GAMECORE_GAMEENTITY_GET_ISHERO_OFFSET UNITYSDK_OFFSET(0xCE05750)
#define RPG_GAMECORE_GAMEENTITY_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0xCE02BB0)
#define RPG_GAMECORE_GAMEENTITY_GET_ISONSTAGE_OFFSET UNITYSDK_OFFSET(0xCE054C0)
#define RPG_GAMECORE_GAMEENTITY_GET_ISSTORYMODE_OFFSET UNITYSDK_OFFSET(0xCE05500)
#define RPG_GAMECORE_GAMEENTITY_GET_KILLIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xCE05520)
#define RPG_GAMECORE_GAMEENTITY_GET_LASTTICKBUCKET_OFFSET UNITYSDK_OFFSET(0xCE02D20)
#define RPG_GAMECORE_GAMEENTITY_GET_LASTTICKFRAME_OFFSET UNITYSDK_OFFSET(0xCE02BD0)
#define RPG_GAMECORE_GAMEENTITY_GET_LASTTICKTIME_OFFSET UNITYSDK_OFFSET(0xCE02D40)
#define RPG_GAMECORE_GAMEENTITY_GET_NAMEFORGAMECORE_OFFSET UNITYSDK_OFFSET(0xCE05490)
#define RPG_GAMECORE_GAMEENTITY_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCE05450)
#define RPG_GAMECORE_GAMEENTITY_GET_OBJECTFEATURE_OFFSET UNITYSDK_OFFSET(0xCE058E0)
#define RPG_GAMECORE_GAMEENTITY_GET_OWNERADVENTUREPHASEREF_OFFSET UNITYSDK_OFFSET(0xCE053E0)
#define RPG_GAMECORE_GAMEENTITY_GET_OWNERMAPDEFREF_OFFSET UNITYSDK_OFFSET(0xCE05300)
#define RPG_GAMECORE_GAMEENTITY_GET_OWNERWORLDREF_OFFSET UNITYSDK_OFFSET(0xCE05440)
#define RPG_GAMECORE_GAMEENTITY_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE05470)
#define RPG_GAMECORE_GAMEENTITY_GET_SERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xCE05900)
#define RPG_GAMECORE_GAMEENTITY_GET_STATEALIVE_OFFSET UNITYSDK_OFFSET(0xCE054B0)
#define RPG_GAMECORE_GAMEENTITY_GET_TEAM_OFFSET UNITYSDK_OFFSET(0xCE05790)
#define RPG_GAMECORE_GAMEENTITY_GET_TICKABLE_OFFSET UNITYSDK_OFFSET(0xCE02310)
#define RPG_GAMECORE_GAMEENTITY_GET_TICKLODBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0xCE02D60)
#define RPG_GAMECORE_GAMEENTITY_GET_TIMESCALEWITHWORLD_OFFSET UNITYSDK_OFFSET(0xCE055A0)
#define RPG_GAMECORE_GAMEENTITY_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xCE05540)
#define RPG_GAMECORE_GAMEENTITY_GET_UNITYGO_OFFSET UNITYSDK_OFFSET(0xCE05850)
#define RPG_GAMECORE_GAMEENTITY_GET_UNSTAGEREASONKEY_OFFSET UNITYSDK_OFFSET(0xCE054D0)
#define RPG_GAMECORE_GAMEENTITY_GET_VISBILEONSTAGE_OFFSET UNITYSDK_OFFSET(0xCE05880)
#define RPG_GAMECORE_GAMEENTITY_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0xCE05860)
#define RPG_GAMECORE_GAMEENTITY_HASHDESTROYWAITREASON_1_OFFSET UNITYSDK_OFFSET(0xCE04FD0)
#define RPG_GAMECORE_GAMEENTITY_HASHDESTROYWAITREASON_OFFSET UNITYSDK_OFFSET(0xCE04F00)
#define RPG_GAMECORE_GAMEENTITY_IGNORENEXTLODFLUSH_OFFSET UNITYSDK_OFFSET(0xCE02190)
#define RPG_GAMECORE_GAMEENTITY_ISCULLEDBYCAMERA_OFFSET UNITYSDK_OFFSET(0xCE01B40)
#define RPG_GAMECORE_GAMEENTITY_ISCURTICKLISTREFNULL_OFFSET UNITYSDK_OFFSET(0xCE01D50)
#define RPG_GAMECORE_GAMEENTITY_ISENTITYAFFECTBYGLOBALTIMESCALELOCKAFTERLOCKED_OFFSET UNITYSDK_OFFSET(0xCE056D0)
#define RPG_GAMECORE_GAMEENTITY_ISENTITYAFFECTBYGLOBALTIMESCALELOCK_OFFSET UNITYSDK_OFFSET(0xCE05680)
#define RPG_GAMECORE_GAMEENTITY_ISFORCEIGNORETICKLOD_OFFSET UNITYSDK_OFFSET(0xCE01E50)
#define RPG_GAMECORE_GAMEENTITY_ISFORCETICKLODLOWEST_OFFSET UNITYSDK_OFFSET(0xCE01F60)
#define RPG_GAMECORE_GAMEENTITY_ISINTHISTICKLIST_OFFSET UNITYSDK_OFFSET(0xCE01BA0)
#define RPG_GAMECORE_GAMEENTITY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCE047E0)
#define RPG_GAMECORE_GAMEENTITY_LIMBOREVIVABLE_OFFSET UNITYSDK_OFFSET(0xCE03570)
#define RPG_GAMECORE_GAMEENTITY_ONWILLBEDESTROY_OFFSET UNITYSDK_OFFSET(0xCE03C80)
#define RPG_GAMECORE_GAMEENTITY_OVERRIDECULLBOUNDS_OFFSET UNITYSDK_OFFSET(0xCE02200)
#define RPG_GAMECORE_GAMEENTITY_REMOVECURTICKLISTREF_OFFSET UNITYSDK_OFFSET(0xCE01CB0)
#define RPG_GAMECORE_GAMEENTITY_REMOVEDESTROYWAIT_OFFSET UNITYSDK_OFFSET(0xCE04D10)
#define RPG_GAMECORE_GAMEENTITY_SETBINDSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xCE051E0)
#define RPG_GAMECORE_GAMEENTITY_SETCLASSIFYTYPE_OFFSET UNITYSDK_OFFSET(0xCE02D80)
#define RPG_GAMECORE_GAMEENTITY_SETCURTICKLISTREF_OFFSET UNITYSDK_OFFSET(0xCE01C20)
#define RPG_GAMECORE_GAMEENTITY_SETGROUPENTITYID_OFFSET UNITYSDK_OFFSET(0xCE05230)
#define RPG_GAMECORE_GAMEENTITY_SETLASTTICK_OFFSET UNITYSDK_OFFSET(0xCE02790)
#define RPG_GAMECORE_GAMEENTITY_SETSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xCE05130)
#define RPG_GAMECORE_GAMEENTITY_SETSTAGESTATE_OFFSET UNITYSDK_OFFSET(0xCE04980)
#define RPG_GAMECORE_GAMEENTITY_SETTICKINTERVAL_OFFSET UNITYSDK_OFFSET(0xCE01920)
#define RPG_GAMECORE_GAMEENTITY_SET_CAMPID_OFFSET UNITYSDK_OFFSET(0xCE05830)
#define RPG_GAMECORE_GAMEENTITY_SET_ENTITYTYPE_OFFSET UNITYSDK_OFFSET(0xCE05740)
#define RPG_GAMECORE_GAMEENTITY_SET_ISFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xCE05780)
#define RPG_GAMECORE_GAMEENTITY_SET_ISHERO_OFFSET UNITYSDK_OFFSET(0xCE05760)
#define RPG_GAMECORE_GAMEENTITY_SET_ISLOADED_OFFSET UNITYSDK_OFFSET(0xCE02BC0)
#define RPG_GAMECORE_GAMEENTITY_SET_ISSTORYMODE_OFFSET UNITYSDK_OFFSET(0xCE05510)
#define RPG_GAMECORE_GAMEENTITY_SET_KILLIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xCE05530)
#define RPG_GAMECORE_GAMEENTITY_SET_LASTTICKBUCKET_OFFSET UNITYSDK_OFFSET(0xCE02D30)
#define RPG_GAMECORE_GAMEENTITY_SET_LASTTICKFRAME_OFFSET UNITYSDK_OFFSET(0xCE02BE0)
#define RPG_GAMECORE_GAMEENTITY_SET_LASTTICKTIME_OFFSET UNITYSDK_OFFSET(0xCE02D50)
#define RPG_GAMECORE_GAMEENTITY_SET_NAMEFORGAMECORE_OFFSET UNITYSDK_OFFSET(0xCE054A0)
#define RPG_GAMECORE_GAMEENTITY_SET_NAME_OFFSET UNITYSDK_OFFSET(0xCE05460)
#define RPG_GAMECORE_GAMEENTITY_SET_OBJECTFEATURE_OFFSET UNITYSDK_OFFSET(0xCE058F0)
#define RPG_GAMECORE_GAMEENTITY_SET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE05480)
#define RPG_GAMECORE_GAMEENTITY_SET_STATEALIVE_OFFSET UNITYSDK_OFFSET(0xCE02FA0)
#define RPG_GAMECORE_GAMEENTITY_SET_TEAM_OFFSET UNITYSDK_OFFSET(0xCE057A0)
#define RPG_GAMECORE_GAMEENTITY_SET_TICKABLE_OFFSET UNITYSDK_OFFSET(0xCE02320)
#define RPG_GAMECORE_GAMEENTITY_SET_TICKLODBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0xCE02D70)
#define RPG_GAMECORE_GAMEENTITY_SET_UNITYGO_OFFSET UNITYSDK_OFFSET(0xCE05840)
#define RPG_GAMECORE_GAMEENTITY_SET_VISIBLE_OFFSET UNITYSDK_OFFSET(0xCE05870)
#define RPG_GAMECORE_GAMEENTITY_SHOULDDELAYTICK_OFFSET UNITYSDK_OFFSET(0xCE019E0)
#define RPG_GAMECORE_GAMEENTITY_TICK_OFFSET UNITYSDK_OFFSET(0xCE044A0)
#define RPG_GAMECORE_GAMEENTITY_UPDATETICKELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0xCE02BF0)
#define RPG_GAMECORE_GAMEENTITY__CCTOR_OFFSET UNITYSDK_OFFSET(0xCE02DD0)
#define RPG_GAMECORE_GAMEENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0xCE02DF0)
#define RPG_GAMECORE_GAMEENTITY__REGISTERTICKLODPROXY_OFFSET UNITYSDK_OFFSET(0xCE01FB0)
#define RPG_GAMECORE_GAMEENTITY__REMOVETICKLODPROXY_OFFSET UNITYSDK_OFFSET(0xCE020F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntity_TypeDefinitionIndex = 50001;

	class GameEntity : public ::System::Object
	{
	public:
		static ::RPG::Client::RPGProfilerMarker** StaticGet__DisposeGameEntityMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(GameEntity_TypeDefinitionIndex)->GetStaticField(0x68030);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__CreateGameEntityMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(GameEntity_TypeDefinitionIndex)->GetStaticField(0x68038);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__LateUpdateMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(GameEntity_TypeDefinitionIndex)->GetStaticField(0x68040);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__TickMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(GameEntity_TypeDefinitionIndex)->GetStaticField(0x68048);
		}
		::System::String* TickLodTemplate; // 0x10
		::System::String* _UnstageReasonKey; // 0x18
		::RPG::GameCore::TimeScaleStack* TimeScaleStack; // 0x20
		::RPG::GameCore::GameEntity_GameComponentList* _ComponentList; // 0x28
		::UnityEngine::GameObject* _UnityGO; // 0x30
		::Class_1_820B63E5CA13D294* TagComponentContainer; // 0x38
		::System::Action_3<::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamType, ::RPG::GameCore::TeamType>* OnTeamChange; // 0x40
		::Il2CppArray<::RPG::GameCore::GameComponentBase*>* _ComponentArray; // 0x48
		::RPG::GameCore::GameEntity_GameComponentList* _LateUpdateComponentList; // 0x50
		::System::String* _NameForGameCore_k__BackingField; // 0x58
		::Struct_2_FA7629C824961FD2 _CurTickListRef; // 0x60
		::RPG::GameCore::GameWorld* _OwnerWorldRef; // 0x70
		::RPG::PoolList_1<::Struct_2_6C37BA9A5193B5D0>* _DestroyWaitList; // 0x78
		::Class_1_27D9C028BDC40E5D* _TickLodProxy; // 0x80
		::RPG::GameCore::HoyoTagContainer* HoyoTagContainer; // 0x88
		::Class_1_EA37F753EBFA50DF* WorldTimeScaleAdpator; // 0x90
		::RPG::GameCore::GameEntity_GameComponentList* _TickComponentList; // 0x98
		::System::Action_3<::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::String*>* OnStageStateChange; // 0xA0
		::System::Action_1<::RPG::GameCore::GameEntity*>* DisposeCallback; // 0xA8
		::RPG::GameCore::GameEntity_GameComponentArray* _ComponentArrayRef; // 0xB0
		::System::String* _Name_k__BackingField; // 0xB8
		::System::Single _LastTickTime_k__BackingField; // 0xC0
		::System::Boolean _Visible_k__BackingField; // 0xC4
		::System::Boolean _IsOnStage; // 0xC5
		::System::Boolean _ShouldLateUpdate; // 0xC6
		::System::Boolean _IsStoryMode_k__BackingField; // 0xC7
		::RPG::GameCore::TeamType _Team; // 0xC8
		::System::UInt32 ForceIgnoreTickLodBistSet; // 0xCC
		::System::Boolean _KillImmediately_k__BackingField; // 0xD0
		::System::Boolean _IsRegisterEnviroChara; // 0xD1
		::System::Boolean Disposing; // 0xD2
		::System::Boolean _IsLoaded_k__BackingField; // 0xD3
		::System::UInt32 _ServerEntityID; // 0xD4
		::System::Single _TickLodBoundSize_k__BackingField; // 0xD8
		::System::Int32 _LastTickBucket_k__BackingField; // 0xDC
		::RPG::GameCore::EntityType _EntityType; // 0xE0
		::System::UInt64 _LastTickFrame_k__BackingField; // 0xE8
		::System::UInt32 _GroupEntityID; // 0xF0
		::System::Boolean _IsFakeAvatar_k__BackingField; // 0xF4
		::System::Boolean HasDisposed; // 0xF5
		::System::Boolean _Tickable; // 0xF6
		::System::Boolean _IsHero_k__BackingField; // 0xF7
		::System::UInt32 _RuntimeID_k__BackingField; // 0xF8
		::RPG::GameCore::CampType _CampID_k__BackingField; // 0xFC
		::RPG::Client::ReasonBool_1<::RPG::GameCore::ForceTickLodLowestReason> _ForceTickLodLowestReason; // 0x100
		::RPG::GameCore::AliveState _AliveState; // 0x108
		::System::UInt32 _TickDelayFrameCount; // 0x10C
		::RPG::CustomRP::EObjectFeature _ObjectFeature_k__BackingField; // 0x110
		::System::UInt32 _GroupID; // 0x114

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::RPG::GameCore::GameWorld* a1, ::System::UInt32 a2, ::RPG::GameCore::EntityType a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::UInt32, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetTickInterval(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SETTICKINTERVAL_OFFSET))(this, a1);
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

		::System::Boolean IsInThisTickList(::Class_1_4C501FFF2580446A* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_4C501FFF2580446A*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_ISINTHISTICKLIST_OFFSET))(this, a1);
		}

		::System::Void SetCurTickListRef(::Class_1_4C501FFF2580446A* a1, ::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4C501FFF2580446A*, ::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SETCURTICKLISTREF_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>* RemoveCurTickListRef()
		{
			return ((::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_REMOVECURTICKLISTREF_OFFSET))(this);
		}

		::System::Boolean IsCurTickListRefNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_ISCURTICKLISTREFNULL_OFFSET))(this);
		}

		::System::Void EnableForceIgnoreTickLod(::RPG::GameCore::ForceIgnoreTickLodReason a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ForceIgnoreTickLodReason, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_ENABLEFORCEIGNORETICKLOD_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsForceIgnoreTickLod()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_ISFORCEIGNORETICKLOD_OFFSET))(this);
		}

		::System::Void EnableTickLodLowest(::RPG::GameCore::ForceTickLodLowestReason a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ForceTickLodLowestReason, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_ENABLETICKLODLOWEST_OFFSET))(this, a1, a2);
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

		::System::Void OverrideCullBounds(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_OVERRIDECULLBOUNDS_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_Tickable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_TICKABLE_OFFSET))(this);
		}

		::System::Void set_Tickable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_TICKABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_ISLOADED_OFFSET))(this);
		}

		::System::Void set_IsLoaded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_ISLOADED_OFFSET))(this, a1);
		}

		::System::UInt64 get_LastTickFrame()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_LASTTICKFRAME_OFFSET))(this);
		}

		::System::Void set_LastTickFrame(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_LASTTICKFRAME_OFFSET))(this, a1);
		}

		::System::Void SetLastTick(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SETLASTTICK_OFFSET))(this, a1, a2);
		}

		::System::Single UpdateTickElapsedTime(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_UPDATETICKELAPSEDTIME_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_LastTickBucket()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_LASTTICKBUCKET_OFFSET))(this);
		}

		::System::Void set_LastTickBucket(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_LASTTICKBUCKET_OFFSET))(this, a1);
		}

		::System::Single get_LastTickTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_LASTTICKTIME_OFFSET))(this);
		}

		::System::Void set_LastTickTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_LASTTICKTIME_OFFSET))(this, a1);
		}

		::System::Single get_TickLodBoundSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_TICKLODBOUNDSIZE_OFFSET))(this);
		}

		::System::Void set_TickLodBoundSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_TICKLODBOUNDSIZE_OFFSET))(this, a1);
		}

		::System::Void SetClassifyType(::RPG::GameCore::EntityClassifyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityClassifyType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SETCLASSIFYTYPE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_DISPOSE_OFFSET))(this);
		}

		::System::Void LimboRevivable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_LIMBOREVIVABLE_OFFSET))(this);
		}

		::System::Void Deathrattle(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_DEATHRATTLE_OFFSET))(this, a1);
		}

		::System::Void OnWillBeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_ONWILLBEDESTROY_OFFSET))(this);
		}

		::RPG::GameCore::GameComponentBase* GetComponentByTypeIndex(::System::Int32 a1)
		{
			return ((::RPG::GameCore::GameComponentBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GETCOMPONENTBYTYPEINDEX_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameComponentBase* GetComponent(::System::Type* a1)
		{
			return ((::RPG::GameCore::GameComponentBase*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GETCOMPONENT_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameComponentBase* GetComponent_1(::System::RuntimeTypeHandle a1)
		{
			return ((::RPG::GameCore::GameComponentBase*(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GETCOMPONENT_1_OFFSET))(this, a1);
		}

		::System::Void DestroyComponent(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_DESTROYCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void DestroyComponent_1(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_DESTROYCOMPONENT_1_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_TICK_OFFSET))(this, a1);
		}

		::System::Int32 GetComponentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GETCOMPONENTCOUNT_OFFSET))(this);
		}

		::RPG::GameCore::GameComponentBase* GetComponentAtIndex(::System::Int32 a1)
		{
			return ((::RPG::GameCore::GameComponentBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GETCOMPONENTATINDEX_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void SetStageState(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SETSTAGESTATE_OFFSET))(this, a1, a2);
		}

		::System::Void AddDestroyWait(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::EntityDestroyWaitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::EntityDestroyWaitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_ADDDESTROYWAIT_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveDestroyWait(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::EntityDestroyWaitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::EntityDestroyWaitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_REMOVEDESTROYWAIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean HashDestroyWaitReason(::RPG::GameCore::EntityDestroyWaitReason a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EntityDestroyWaitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_HASHDESTROYWAITREASON_OFFSET))(this, a1);
		}

		::System::Boolean HashDestroyWaitReason_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::EntityDestroyWaitReason a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::EntityDestroyWaitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_HASHDESTROYWAITREASON_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetServerEntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SETSERVERENTITYID_OFFSET))(this, a1);
		}

		::System::Void SetBindServerEntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SETBINDSERVERENTITYID_OFFSET))(this, a1);
		}

		::System::Void SetGroupEntityID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SETGROUPENTITYID_OFFSET))(this, a1, a2);
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

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_NAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_RuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_RUNTIMEID_OFFSET))(this);
		}

		::System::Void set_RuntimeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_RUNTIMEID_OFFSET))(this, a1);
		}

		::System::String* get_NameForGameCore()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_NAMEFORGAMECORE_OFFSET))(this);
		}

		::System::Void set_NameForGameCore(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_NAMEFORGAMECORE_OFFSET))(this, a1);
		}

		::RPG::GameCore::AliveState get_StateAlive()
		{
			return ((::RPG::GameCore::AliveState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_STATEALIVE_OFFSET))(this);
		}

		::System::Void set_StateAlive(::RPG::GameCore::AliveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_STATEALIVE_OFFSET))(this, a1);
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

		::System::Void set_IsStoryMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_ISSTORYMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_KillImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_KILLIMMEDIATELY_OFFSET))(this);
		}

		::System::Void set_KillImmediately(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_KILLIMMEDIATELY_OFFSET))(this, a1);
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

		::System::Void set_EntityType(::RPG::GameCore::EntityType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_ENTITYTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_ISHERO_OFFSET))(this);
		}

		::System::Void set_IsHero(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_ISHERO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFakeAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_ISFAKEAVATAR_OFFSET))(this);
		}

		::System::Void set_IsFakeAvatar(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_ISFAKEAVATAR_OFFSET))(this, a1);
		}

		::RPG::GameCore::TeamType get_Team()
		{
			return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_TEAM_OFFSET))(this);
		}

		::System::Void set_Team(::RPG::GameCore::TeamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_TEAM_OFFSET))(this, a1);
		}

		::RPG::GameCore::CampType get_CampID()
		{
			return ((::RPG::GameCore::CampType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_CAMPID_OFFSET))(this);
		}

		::System::Void set_CampID(::RPG::GameCore::CampType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CampType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_CAMPID_OFFSET))(this, a1);
		}

		::System::Void set_UnityGO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_UNITYGO_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_UnityGO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_UNITYGO_OFFSET))(this);
		}

		::System::Boolean get_Visible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_VISIBLE_OFFSET))(this);
		}

		::System::Void set_Visible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_VISIBLE_OFFSET))(this, a1);
		}

		::System::Boolean get_VisbileOnStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_VISBILEONSTAGE_OFFSET))(this);
		}

		::RPG::CustomRP::EObjectFeature get_ObjectFeature()
		{
			return ((::RPG::CustomRP::EObjectFeature(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_GET_OBJECTFEATURE_OFFSET))(this);
		}

		::System::Void set_ObjectFeature(::RPG::CustomRP::EObjectFeature a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::EObjectFeature))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITY_SET_OBJECTFEATURE_OFFSET))(this, a1);
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
