#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_368E776E7CE1A63A.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_265;
class Class_0_16E4307DCC419505_382;
class Class_1_DCED81BA3E7C7B2D;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class MemberData; }
namespace RPG::Client { class Stage; }
namespace RPG::Client { class TeamData; }
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AsyncOperation; }

#define RPG_CLIENT_TEAMMANAGER_ALLPLAYERLOADED_OFFSET UNITYSDK_OFFSET(0xB2AAA80)
#define RPG_CLIENT_TEAMMANAGER_APPLEEXTRAPROPERTYADDITION_OFFSET UNITYSDK_OFFSET(0xB2B0DE0)
#define RPG_CLIENT_TEAMMANAGER_CANSWITCHTEAMLEADERTO_OFFSET UNITYSDK_OFFSET(0xB2AFE20)
#define RPG_CLIENT_TEAMMANAGER_CHANGETEAMMEMBERSTORYMODE_OFFSET UNITYSDK_OFFSET(0xB2AB4C0)
#define RPG_CLIENT_TEAMMANAGER_CREATELOCALPLAYERTEAM_OFFSET UNITYSDK_OFFSET(0xB2AAB90)
#define RPG_CLIENT_TEAMMANAGER_CREATETEAMMEMBERENTITYS_OFFSET UNITYSDK_OFFSET(0xB2AAFE0)
#define RPG_CLIENT_TEAMMANAGER_CTRLOTHERENTITY_OFFSET UNITYSDK_OFFSET(0xB2B1D40)
#define RPG_CLIENT_TEAMMANAGER_DISABLEAVATARREFRESH_OFFSET UNITYSDK_OFFSET(0xB2ACA10)
#define RPG_CLIENT_TEAMMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2AA100)
#define RPG_CLIENT_TEAMMANAGER_ENABLEAVATARREFRESH_OFFSET UNITYSDK_OFFSET(0xB2ACA90)
#define RPG_CLIENT_TEAMMANAGER_GETAVATARBYENTITY_OFFSET UNITYSDK_OFFSET(0xB2B1C40)
#define RPG_CLIENT_TEAMMANAGER_GETMEMBERDATABYMEMBERENTITY_OFFSET UNITYSDK_OFFSET(0xB2B0470)
#define RPG_CLIENT_TEAMMANAGER_GETMEMBERENTITYBYAVATARID_OFFSET UNITYSDK_OFFSET(0xB2B03B0)
#define RPG_CLIENT_TEAMMANAGER_GETMEMBERENTITYBYMEMBERDATA_OFFSET UNITYSDK_OFFSET(0xB2B02D0)
#define RPG_CLIENT_TEAMMANAGER_GETPLAYERDATABYENTITY_OFFSET UNITYSDK_OFFSET(0xB2B0F20)
#define RPG_CLIENT_TEAMMANAGER_GET_CURRENTTEAMLEADER_OFFSET UNITYSDK_OFFSET(0xB2A9B40)
#define RPG_CLIENT_TEAMMANAGER_GET_FAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xB2B4940)
#define RPG_CLIENT_TEAMMANAGER_GET_ISALLOWEDREFRESH_OFFSET UNITYSDK_OFFSET(0xB2B4AC0)
#define RPG_CLIENT_TEAMMANAGER_GET_ISMAINCHARACTERONLYTEAM_OFFSET UNITYSDK_OFFSET(0xB2B4A60)
#define RPG_CLIENT_TEAMMANAGER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xB2B4330)
#define RPG_CLIENT_TEAMMANAGER_GET_NEXTTEAMLEADER_OFFSET UNITYSDK_OFFSET(0xB2B48B0)
#define RPG_CLIENT_TEAMMANAGER_GET_REALTEAMLEADERAVATARID_OFFSET UNITYSDK_OFFSET(0xB2B4960)
#define RPG_CLIENT_TEAMMANAGER_GET_REALTEAMLEADER_OFFSET UNITYSDK_OFFSET(0xB2B4950)
#define RPG_CLIENT_TEAMMANAGER_GET_STARTCONTROLPOS_OFFSET UNITYSDK_OFFSET(0xB2B48C0)
#define RPG_CLIENT_TEAMMANAGER_GET_STARTCONTROLROT_OFFSET UNITYSDK_OFFSET(0xB2B4900)
#define RPG_CLIENT_TEAMMANAGER_GET_TEAMMEMBERLIST_OFFSET UNITYSDK_OFFSET(0xB2B4A50)
#define RPG_CLIENT_TEAMMANAGER_LOADBACKGROUNDPLAYER_OFFSET UNITYSDK_OFFSET(0xB2AA7B0)
#define RPG_CLIENT_TEAMMANAGER_REFRESHTEAMEXTRAPROPERTYADDITION_OFFSET UNITYSDK_OFFSET(0xB2AFC40)
#define RPG_CLIENT_TEAMMANAGER_REFRESHTEAMMEMBERENTITYS_OFFSET UNITYSDK_OFFSET(0xB2ACB20)
#define RPG_CLIENT_TEAMMANAGER_REMOVETEAMMEMBERENTITY_OFFSET UNITYSDK_OFFSET(0xB2B05C0)
#define RPG_CLIENT_TEAMMANAGER_RESETAUDIOLISTNERFOLLOWTEAMLEADER_OFFSET UNITYSDK_OFFSET(0xB2B0790)
#define RPG_CLIENT_TEAMMANAGER_RESETTEAMMEMBERLIST_OFFSET UNITYSDK_OFFSET(0xB2ADD00)
#define RPG_CLIENT_TEAMMANAGER_REVERTEXTRAPROPERTYADDITION_OFFSET UNITYSDK_OFFSET(0xB2B0AD0)
#define RPG_CLIENT_TEAMMANAGER_SETUPTEAMLEADERINFO_OFFSET UNITYSDK_OFFSET(0xB2ABA90)
#define RPG_CLIENT_TEAMMANAGER_SET_CURRENTTEAMLEADER_OFFSET UNITYSDK_OFFSET(0xB2AA3A0)
#define RPG_CLIENT_TEAMMANAGER_SET_FAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xB2B3FE0)
#define RPG_CLIENT_TEAMMANAGER_SET_STARTCONTROLPOS_OFFSET UNITYSDK_OFFSET(0xB2B48E0)
#define RPG_CLIENT_TEAMMANAGER_SET_STARTCONTROLROT_OFFSET UNITYSDK_OFFSET(0xB2B4920)
#define RPG_CLIENT_TEAMMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xB2A9FC0)
#define RPG_CLIENT_TEAMMANAGER_TRYCHANGETOTEAMLEADER_OFFSET UNITYSDK_OFFSET(0xB2B0700)
#define RPG_CLIENT_TEAMMANAGER_TRYSWITCHTEAMLEADERBYSLOTID_OFFSET UNITYSDK_OFFSET(0xB2AFD60)
#define RPG_CLIENT_TEAMMANAGER_TRYTRIGGERPLAYERTELEPORT_OFFSET UNITYSDK_OFFSET(0xB2A97C0)
#define RPG_CLIENT_TEAMMANAGER_UNLOADBACKGROUNDPLAYER_OFFSET UNITYSDK_OFFSET(0xB2AA560)
#define RPG_CLIENT_TEAMMANAGER__ADDMEMBERSCHANGEDIN_OFFSET UNITYSDK_OFFSET(0xB2ADAC0)
#define RPG_CLIENT_TEAMMANAGER__BINDINPUTCONTROLLERTOENTITY_OFFSET UNITYSDK_OFFSET(0xB2AC9A0)
#define RPG_CLIENT_TEAMMANAGER__CANSYNCMEMBERINFO_OFFSET UNITYSDK_OFFSET(0xB2AB830)
#define RPG_CLIENT_TEAMMANAGER__CHANGEFAKEAVATARSTORYMODE_OFFSET UNITYSDK_OFFSET(0xB2B4260)
#define RPG_CLIENT_TEAMMANAGER__CHANGETEAMMEMBERSTORYMODE_OFFSET UNITYSDK_OFFSET(0xB2AB510)
#define RPG_CLIENT_TEAMMANAGER__CHECKTELEPORTANDSTORYMODECONFLICT_OFFSET UNITYSDK_OFFSET(0xB2A9690)
#define RPG_CLIENT_TEAMMANAGER__CREATEFAKEAVATARENTITY_OFFSET UNITYSDK_OFFSET(0xB2B0CC0)
#define RPG_CLIENT_TEAMMANAGER__CREATELEADERMEMBERENTITY_OFFSET UNITYSDK_OFFSET(0xB2AB3D0)
#define RPG_CLIENT_TEAMMANAGER__CREATEMEMBERENTITY_1_OFFSET UNITYSDK_OFFSET(0xB2B0B40)
#define RPG_CLIENT_TEAMMANAGER__CREATEMEMBERENTITY_OFFSET UNITYSDK_OFFSET(0xB2AB440)
#define RPG_CLIENT_TEAMMANAGER__CREATEPLAYERSTUB_OFFSET UNITYSDK_OFFSET(0xB2B0D60)
#define RPG_CLIENT_TEAMMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB2A9D30)
#define RPG_CLIENT_TEAMMANAGER__DOSWITCHTEAMLEADER_OFFSET UNITYSDK_OFFSET(0xB2ADEB0)
#define RPG_CLIENT_TEAMMANAGER__GETENTITYISLOCKCONTROL_OFFSET UNITYSDK_OFFSET(0xB2B17F0)
#define RPG_CLIENT_TEAMMANAGER__GETENTITYISVISIBLE_OFFSET UNITYSDK_OFFSET(0xB2B1870)
#define RPG_CLIENT_TEAMMANAGER__INITLIGHTTEAMENTITY_OFFSET UNITYSDK_OFFSET(0xB2AAC10)
#define RPG_CLIENT_TEAMMANAGER__INITTELEPORTSEQ_OFFSET UNITYSDK_OFFSET(0xB2A9340)
#define RPG_CLIENT_TEAMMANAGER__ISTEAMMEMBERLISTSYNCED_OFFSET UNITYSDK_OFFSET(0xB2B14D0)
#define RPG_CLIENT_TEAMMANAGER__ONADVENTUREBUFFSYNC_OFFSET UNITYSDK_OFFSET(0xB2B4650)
#define RPG_CLIENT_TEAMMANAGER__ONAVATARSYNCDATA_OFFSET UNITYSDK_OFFSET(0xB2B1990)
#define RPG_CLIENT_TEAMMANAGER__ONTEAMCHANGESTORYMODE_OFFSET UNITYSDK_OFFSET(0xB2B4190)
#define RPG_CLIENT_TEAMMANAGER__ONTEAMLEADERCHANGEMODEL_OFFSET UNITYSDK_OFFSET(0xB2B4580)
#define RPG_CLIENT_TEAMMANAGER__ONTEAMLEADERSWITCHED_OFFSET UNITYSDK_OFFSET(0xB2B4120)
#define RPG_CLIENT_TEAMMANAGER__ONTEAMLINEUPSYNCED_OFFSET UNITYSDK_OFFSET(0xB2B4380)
#define RPG_CLIENT_TEAMMANAGER__REMOVEMEMBERSCHANGEDOUT_OFFSET UNITYSDK_OFFSET(0xB2ACD40)
#define RPG_CLIENT_TEAMMANAGER__SETENTITYISLOCKCONTROL_OFFSET UNITYSDK_OFFSET(0xB2B18D0)
#define RPG_CLIENT_TEAMMANAGER__SETPLAYERENTITYLEADER_OFFSET UNITYSDK_OFFSET(0xB2AC650)
#define RPG_CLIENT_TEAMMANAGER__SETPLAYERENTITYVISIBILITY_OFFSET UNITYSDK_OFFSET(0xB2AC5C0)
#define RPG_CLIENT_TEAMMANAGER__SETUPLIGHTTEAMPROPERTYDEF_OFFSET UNITYSDK_OFFSET(0xB2B0A50)
#define RPG_CLIENT_TEAMMANAGER__SWAPVISIBLEANDPHYSICSATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xB2B16B0)
#define RPG_CLIENT_TEAMMANAGER__SWITCHCAMERAFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0xB2B07F0)
#define RPG_CLIENT_TEAMMANAGER__SYNCMEMBERINFO_OFFSET UNITYSDK_OFFSET(0xB2AB8C0)
#define RPG_CLIENT_TEAMMANAGER__TICKTELEPORTSEQ_OFFSET UNITYSDK_OFFSET(0xB2A9B90)
#define RPG_CLIENT_TEAMMANAGER__UNINITTELEPORTSEQ_OFFSET UNITYSDK_OFFSET(0xB2A95A0)
#define RPG_CLIENT_TEAMMANAGER__WAITLINEUPREADY_OFFSET UNITYSDK_OFFSET(0xB2AB780)
#define RPG_CLIENT_TEAMMANAGER__WRITEMEMBERDATATOENTITY_OFFSET UNITYSDK_OFFSET(0xB2B11A0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamManager_TypeDefinitionIndex = 56042;

	class TeamManager : public ::System::Object
	{
	public:
		::RPG::GameCore::TaskContext* _TeamLeaderContex; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _TeamMemberList; // 0x18
		::Class_3_E21F6DE9B7FA4D05* _OnTeleportCrossMapSeq; // 0x20
		::System::String* _MainControllSource; // 0x28
		::RPG::GameCore::GameEntity* _currentTeamLeader; // 0x30
		::RPG::Client::Stage* _MainControlSourceStage; // 0x38
		::System::Collections::Generic::List_1<::Struct_2_368E776E7CE1A63A>* _PendingHideLocalPlayers; // 0x40
		::RPG::Client::TeamData* _CurrentTeamData; // 0x48
		::RPG::GameCore::GameEntity* _FakeAvatarTeamLeader; // 0x50
		::RPG::GameCore::GameWorld* _GameWorld; // 0x58
		::Class_3_E21F6DE9B7FA4D05* _OnTeleportNoSwitchInWhite; // 0x60
		::Class_3_E21F6DE9B7FA4D05* _OnTeleportSeq; // 0x68
		::RPG::GameCore::GameEntity* _ControlledEntity; // 0x70
		::Class_3_E21F6DE9B7FA4D05* _OnTeleportNoSwitchIn; // 0x78
		::RPG::GameCore::GameEntity* _nextTeamLeader; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* _TeamMemberDict; // 0x88
		::System::Action* _OnTeleportFinishCallback; // 0x90
		::Class_3_E21F6DE9B7FA4D05* _CurrentRunningTeleportSeq; // 0x98
		::System::Boolean _RecoverUseControlEntityPosition; // 0xA0
		::System::Boolean _IsAllowedRefresh; // 0xA1
		::System::Boolean _IsTeamLoading; // 0xA2
		::RPG::MVector3 _StartControlPos_k__BackingField; // 0xA4
		::RPG::MVector3 _StartControlRot_k__BackingField; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void _InitTeleportSeq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__INITTELEPORTSEQ_OFFSET))(this);
		}

		::System::Void _UnInitTeleportSeq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__UNINITTELEPORTSEQ_OFFSET))(this);
		}

		::System::Void _CheckTeleportAndStoryModeConflict(::System::Boolean isStoryMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__CHECKTELEPORTANDSTORYMODECONFLICT_OFFSET))(this, isStoryMode);
		}

		::System::Boolean TryTriggerPlayerTeleport(::System::Boolean bCrossMap, ::System::Action* callback)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_TRYTRIGGERPLAYERTELEPORT_OFFSET))(this, bCrossMap, callback);
		}

		::System::Void _TickTeleportSeq(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__TICKTELEPORTSEQ_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::AsyncOperation* UnLoadBackGroundPlayer(::System::Action* unloadFinish, ::System::Int32 maxUnloadcnt)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::PVOID, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_UNLOADBACKGROUNDPLAYER_OFFSET))(this, unloadFinish, maxUnloadcnt);
		}

		::System::Void LoadBackGroundPlayer(::System::Action* onLoadFinish, ::System::Boolean isSyncLoad)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_LOADBACKGROUNDPLAYER_OFFSET))(this, onLoadFinish, isSyncLoad);
		}

		static ::RPG::Client::TeamManager* CreateLocalPlayerTeam(::RPG::GameCore::GameWorld* gameWorld, ::System::UInt32 planeID)
		{
			return ((::RPG::Client::TeamManager*(*)(::RPG::GameCore::GameWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_CREATELOCALPLAYERTEAM_OFFSET))(gameWorld, planeID);
		}

		::System::Void CreateTeamMemberEntitys(::RPG::Client::TeamData* teamData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_CREATETEAMMEMBERENTITYS_OFFSET))(this, teamData);
		}

		::System::Void ChangeTeamMemberStoryMode(::System::Boolean isStoryMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_CHANGETEAMMEMBERSTORYMODE_OFFSET))(this, isStoryMode);
		}

		::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_265*>* _WaitLineupReady()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_265*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__WAITLINEUPREADY_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_265*>* _CreateLeaderMemberEntity(::System::Boolean bAsyncLoad, ::System::Action* onAsyncLoadFinish)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_265*>*(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__CREATELEADERMEMBERENTITY_OFFSET))(this, bAsyncLoad, onAsyncLoadFinish);
		}

		::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_265*>* _CreateMemberEntity(::System::Int32 memberDataIdx, ::System::Boolean bAsyncLoad, ::System::Action* onAsyncLoadFinish)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_265*>*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__CREATEMEMBERENTITY_OFFSET))(this, memberDataIdx, bAsyncLoad, onAsyncLoadFinish);
		}

		::System::Boolean _CanSyncMemberInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__CANSYNCMEMBERINFO_OFFSET))(this);
		}

		::System::Void _SyncMemberInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__SYNCMEMBERINFO_OFFSET))(this);
		}

		::System::Void SetupTeamLeaderInfo(::UnityEngine::Vector3 playingMemberStartPos, ::UnityEngine::Quaternion playingMemberStartRot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_SETUPTEAMLEADERINFO_OFFSET))(this, playingMemberStartPos, playingMemberStartRot);
		}

		::System::Void DisableAvatarRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_DISABLEAVATARREFRESH_OFFSET))(this);
		}

		::System::Void EnableAvatarRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_ENABLEAVATARREFRESH_OFFSET))(this);
		}

		::System::Void RefreshTeamMemberEntitys(::RPG::Client::TeamData* teamData, ::System::Boolean isHeroTypeChanged, ::System::Boolean bForceRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_REFRESHTEAMMEMBERENTITYS_OFFSET))(this, teamData, isHeroTypeChanged, bForceRefresh);
		}

		::System::Void TrySwitchTeamLeaderBySlotID(::System::Int32 slotID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_TRYSWITCHTEAMLEADERBYSLOTID_OFFSET))(this, slotID);
		}

		::RPG::GameCore::GameEntity* GetMemberEntityByMemberData(::RPG::Client::MemberData* memberData)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GETMEMBERENTITYBYMEMBERDATA_OFFSET))(this, memberData);
		}

		::RPG::GameCore::GameEntity* GetMemberEntityByAvatarID(::System::UInt32 avatarID)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GETMEMBERENTITYBYAVATARID_OFFSET))(this, avatarID);
		}

		::RPG::Client::MemberData* GetMemberDataByMemberEntity(::RPG::GameCore::GameEntity* memberEntity)
		{
			return ((::RPG::Client::MemberData*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GETMEMBERDATABYMEMBERENTITY_OFFSET))(this, memberEntity);
		}

		::System::Void RemoveTeamMemberEntity(::RPG::GameCore::GameEntity* pRemoveEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_REMOVETEAMMEMBERENTITY_OFFSET))(this, pRemoveEntity);
		}

		::System::Void TryChangeToTeamLeader()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_TRYCHANGETOTEAMLEADER_OFFSET))(this);
		}

		::System::Void ResetAudioListnerFollowTeamLeader()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_RESETAUDIOLISTNERFOLLOWTEAMLEADER_OFFSET))(this);
		}

		::System::Boolean AllPlayerLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_ALLPLAYERLOADED_OFFSET))(this);
		}

		::System::Void _SetupLightTeamPropertyDef(::RPG::GameCore::GameEntity* pEntity, ::RPG::GameCore::AdventureAbilityComponent* pAdvAbility)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureAbilityComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__SETUPLIGHTTEAMPROPERTYDEF_OFFSET))(this, pEntity, pAdvAbility);
		}

		::System::Void _InitLightTeamEntity(::System::UInt32 planeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__INITLIGHTTEAMENTITY_OFFSET))(this, planeID);
		}

		::System::Void _RemoveMembersChangedOut(::Il2CppArray<::RPG::Client::MemberData*>* memberDatas, ::System::Boolean isHeroTypeChanged)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::MemberData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__REMOVEMEMBERSCHANGEDOUT_OFFSET))(this, memberDatas, isHeroTypeChanged);
		}

		::System::Void _AddMembersChangedIn(::Il2CppArray<::RPG::Client::MemberData*>* memberDatas, ::System::Boolean isHeroTypeChange)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::MemberData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__ADDMEMBERSCHANGEDIN_OFFSET))(this, memberDatas, isHeroTypeChange);
		}

		::System::Boolean CanSwitchTeamLeaderTo(::System::Int32 slotID, ::System::Boolean forceSwitch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_CANSWITCHTEAMLEADERTO_OFFSET))(this, slotID, forceSwitch);
		}

		::RPG::GameCore::GameEntity* _CreateMemberEntity_1(::RPG::Client::MemberData* memberData, ::System::Boolean bAsyncLoad, ::System::Action_1<::RPG::GameCore::GameEntity*>* onAsyncLoadFinish)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::Client::MemberData*, ::System::Boolean, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__CREATEMEMBERENTITY_1_OFFSET))(this, memberData, bAsyncLoad, onAsyncLoadFinish);
		}

		::RPG::GameCore::GameEntity* _CreateFakeAvatarEntity(::Class_1_DCED81BA3E7C7B2D* memberData, ::RPG::GameCore::GameEntity* controlEntity)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::Class_1_DCED81BA3E7C7B2D*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__CREATEFAKEAVATARENTITY_OFFSET))(this, memberData, controlEntity);
		}

		::RPG::GameCore::GameEntity* _CreatePlayerStub(::RPG::GameCore::GameEntity* targetEntity)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__CREATEPLAYERSTUB_OFFSET))(this, targetEntity);
		}

		::System::Void AppleExtraPropertyAddition(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_APPLEEXTRAPROPERTYADDITION_OFFSET))(this, pEntity);
		}

		::System::Void RevertExtraPropertyAddition(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_REVERTEXTRAPROPERTYADDITION_OFFSET))(this, pEntity);
		}

		::RPG::Client::IAvatarInfoProvider* GetPlayerDataByEntity(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GETPLAYERDATABYENTITY_OFFSET))(this, pEntity);
		}

		::System::Void RefreshTeamExtraPropertyAddition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_REFRESHTEAMEXTRAPROPERTYADDITION_OFFSET))(this);
		}

		::System::Void _WriteMemberDataToEntity(::RPG::GameCore::GameEntity* memberEntity, ::RPG::Client::MemberData* memberData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__WRITEMEMBERDATATOENTITY_OFFSET))(this, memberEntity, memberData);
		}

		::System::Void ResetTeamMemberList(::Il2CppArray<::RPG::Client::MemberData*>* memberDatas)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::MemberData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_RESETTEAMMEMBERLIST_OFFSET))(this, memberDatas);
		}

		::System::Boolean _IsTeamMemberListSynced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__ISTEAMMEMBERLISTSYNCED_OFFSET))(this);
		}

		::System::Void _SetPlayerEntityVisibility(::RPG::GameCore::GameEntity* playerEntity, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__SETPLAYERENTITYVISIBILITY_OFFSET))(this, playerEntity, visible);
		}

		::System::Void _SwapVisibleAndPhysicsAttribute(::RPG::GameCore::GameEntity* oldLeader, ::RPG::GameCore::GameEntity* newLeader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__SWAPVISIBLEANDPHYSICSATTRIBUTE_OFFSET))(this, oldLeader, newLeader);
		}

		::System::Void _SetPlayerEntityLeader(::RPG::GameCore::GameEntity* playerEntity, ::System::Boolean isLeader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__SETPLAYERENTITYLEADER_OFFSET))(this, playerEntity, isLeader);
		}

		::System::Void _BindInputControllerToEntity(::RPG::GameCore::GameEntity* pEntity, ::System::Boolean bBind)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__BINDINPUTCONTROLLERTOENTITY_OFFSET))(this, pEntity, bBind);
		}

		::System::Boolean _GetEntityIsLockControl(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__GETENTITYISLOCKCONTROL_OFFSET))(this, pEntity);
		}

		::System::Boolean _GetEntityIsVisible(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__GETENTITYISVISIBLE_OFFSET))(this, pEntity);
		}

		::System::Void _SetEntityIsLockControl(::RPG::GameCore::GameEntity* pEntity, ::System::Boolean bIsLockControl)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__SETENTITYISLOCKCONTROL_OFFSET))(this, pEntity, bIsLockControl);
		}

		::System::Void _OnAvatarSyncData(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__ONAVATARSYNCDATA_OFFSET))(this, param);
		}

		::RPG::Client::IAvatarInfoProvider* GetAvatarByEntity(::RPG::GameCore::GameEntity* ownerRef)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GETAVATARBYENTITY_OFFSET))(this, ownerRef);
		}

		::RPG::GameCore::GameEntity* CtrlOtherEntity(::RPG::GameCore::GameEntity* other, ::System::Boolean ctrlOther, ::System::Boolean recoverUseOtherPosition, ::System::UInt32 specialNPCID, ::System::Boolean leavePlayerStubInplace, ::System::Nullable_1<::UnityEngine::Vector3> stubPosition, ::System::Nullable_1<::UnityEngine::Quaternion> stubRotation, ::System::String* stubAnimation, ::System::Nullable_1<::UnityEngine::Vector3> forcePosition, ::System::Nullable_1<::UnityEngine::Quaternion> forceRotation)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::Boolean, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::String*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_CTRLOTHERENTITY_OFFSET))(this, other, ctrlOther, recoverUseOtherPosition, specialNPCID, leavePlayerStubInplace, stubPosition, stubRotation, stubAnimation, forcePosition, forceRotation);
		}

		::System::Boolean _DoSwitchTeamLeader(::System::Boolean forceSwitch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__DOSWITCHTEAMLEADER_OFFSET))(this, forceSwitch);
		}

		::System::Void _OnTeamLeaderSwitched(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__ONTEAMLEADERSWITCHED_OFFSET))(this, param);
		}

		::System::Void _OnTeamChangeStoryMode(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__ONTEAMCHANGESTORYMODE_OFFSET))(this, param);
		}

		::System::Void _ChangeFakeAvatarStoryMode(::System::Boolean isStoryMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__CHANGEFAKEAVATARSTORYMODE_OFFSET))(this, isStoryMode);
		}

		::System::Void _ChangeTeamMemberStoryMode(::System::Boolean isStoryMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__CHANGETEAMMEMBERSTORYMODE_OFFSET))(this, isStoryMode);
		}

		::System::Void _OnTeamLineupSynced(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__ONTEAMLINEUPSYNCED_OFFSET))(this, param);
		}

		::System::Void _OnTeamLeaderChangeModel(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__ONTEAMLEADERCHANGEMODEL_OFFSET))(this, param);
		}

		::System::Void _SwitchCameraFollowTarget(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__SWITCHCAMERAFOLLOWTARGET_OFFSET))(this, entity);
		}

		::System::Void _OnAdventureBuffSync(::Class_0_16E4307DCC419505_382* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER__ONADVENTUREBUFFSYNC_OFFSET))(this, evt);
		}

		::RPG::GameCore::GameEntity* get_NextTeamLeader()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GET_NEXTTEAMLEADER_OFFSET))(this);
		}

		::RPG::MVector3 get_StartControlPos()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GET_STARTCONTROLPOS_OFFSET))(this);
		}

		::System::Void set_StartControlPos(::RPG::MVector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_SET_STARTCONTROLPOS_OFFSET))(this, value);
		}

		::RPG::MVector3 get_StartControlRot()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GET_STARTCONTROLROT_OFFSET))(this);
		}

		::System::Void set_StartControlRot(::RPG::MVector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_SET_STARTCONTROLROT_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_FakeAvatar()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GET_FAKEAVATAR_OFFSET))(this);
		}

		::System::Void set_FakeAvatar(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_SET_FAKEAVATAR_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_RealTeamLeader()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GET_REALTEAMLEADER_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_CurrentTeamLeader()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GET_CURRENTTEAMLEADER_OFFSET))(this);
		}

		::System::Void set_CurrentTeamLeader(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_SET_CURRENTTEAMLEADER_OFFSET))(this, value);
		}

		::System::UInt32 get_RealTeamLeaderAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GET_REALTEAMLEADERAVATARID_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_TeamMemberList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GET_TEAMMEMBERLIST_OFFSET))(this);
		}

		::System::Boolean get_IsMainCharacterOnlyTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GET_ISMAINCHARACTERONLYTEAM_OFFSET))(this);
		}

		::System::Boolean get_IsAllowedRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER_GET_ISALLOWEDREFRESH_OFFSET))(this);
		}
	};
}
