#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_21A1F6196B1F5D5B_ELoadingWaitType.h"
#include "unitysdk/RPG/Client/BattlePreloadPhase.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/PreloadGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_BF2B522AC5DB4E39;
namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroup; }
namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroupCreateParam; }
namespace RPG::Client { class BattleAssetPreload_AvatarAssetPreloadGroup; }
namespace RPG::Client { class BattleAssetPreload_BattleEventAssetPreloadGroup; }
namespace RPG::Client { class BattleAssetPreload_InBattleAssetPreloadGroup; }
namespace RPG::Client { class BattleAssetPreload_MonsterAssetPreloadGroup; }
namespace RPG::Client { class BattleAssetPreload_PreBattleAssetPreloadGroup; }
namespace RPG::Client { class BattleAssetPreload_ServantAssetPreloadGroup; }
namespace RPG::Client { class BattleAssetPreload_UIAssetPreloadGroup; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::GameCore { class AIDecisionGroup; }
namespace RPG::GameCore { class AdventurePreloadConfig; }
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class BattlePreloadConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MonsterLodConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEASSETPRELOAD_CHECKLOADFINISH_OFFSET UNITYSDK_OFFSET(0x917EA70)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHECKREGISTERINPRELOAD_OFFSET UNITYSDK_OFFSET(0x91800E0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x917E4F0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_FOREACHPRELOADGROUPS_OFFSET UNITYSDK_OFFSET(0x9180030)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETAIDECISIONGROUP_OFFSET UNITYSDK_OFFSET(0x917EC10)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETAVATARASSETPRELOADENABLE_OFFSET UNITYSDK_OFFSET(0x917F1B0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETAVATARASSETPRELOADGROUP_OFFSET UNITYSDK_OFFSET(0x917F520)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETBATTLEEVENTASSETPRELOADGROUP_OFFSET UNITYSDK_OFFSET(0x917F860)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETENTITYASSETPRELOADGROUP_OFFSET UNITYSDK_OFFSET(0x917F3B0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETENTITYPRELOADGROUPID_OFFSET UNITYSDK_OFFSET(0x917F950)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETMONSTERASSETPRELOADGROUP_OFFSET UNITYSDK_OFFSET(0x917F620)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETPRELOADGROUPLIST_OFFSET UNITYSDK_OFFSET(0x917F340)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETPRELOADGROUP_1_OFFSET UNITYSDK_OFFSET(0x917FB10)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETPRELOADGROUP_OFFSET UNITYSDK_OFFSET(0x917FA40)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETRULE_OFFSET UNITYSDK_OFFSET(0x917EFF0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETSERVANTASSETPRELOADGROUP_OFFSET UNITYSDK_OFFSET(0x917F790)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_ADVENTUREPRELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x9180440)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_ALLASSETPRELOADGROUPS_OFFSET UNITYSDK_OFFSET(0x9180660)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_BATTLEPRELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x9180450)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_INBATTLEASSETGROUP_OFFSET UNITYSDK_OFFSET(0x9180560)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_ISBATTLEPRELOADPHASE_OFFSET UNITYSDK_OFFSET(0x9180900)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_ISDISPOSING_OFFSET UNITYSDK_OFFSET(0x9180420)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_ISRECORDFINISHED_OFFSET UNITYSDK_OFFSET(0x9180AA0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_ISTARGETADVENTUREPHASE_OFFSET UNITYSDK_OFFSET(0x91809B0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_ISTARGETBATTLEPHASE_OFFSET UNITYSDK_OFFSET(0x9180960)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_LASTPRELOADPHASE_OFFSET UNITYSDK_OFFSET(0x9180950)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_LINEUPDATA_OFFSET UNITYSDK_OFFSET(0x9180670)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_MONSTERLODCONFIG_OFFSET UNITYSDK_OFFSET(0x9180430)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_PREBATTLEASSETGROUP_OFFSET UNITYSDK_OFFSET(0x917ED50)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_PRELOADPHASE_OFFSET UNITYSDK_OFFSET(0x9180680)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_UIASSETGROUP_OFFSET UNITYSDK_OFFSET(0x9180460)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ISPRELOADTAGACTIVE_OFFSET UNITYSDK_OFFSET(0x9180380)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ISRULEFORBIDBYCONFICT_OFFSET UNITYSDK_OFFSET(0x917F0D0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ONBEGINPLAYVIDEO_OFFSET UNITYSDK_OFFSET(0x917EE10)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ONENDPLAYVIDEO_OFFSET UNITYSDK_OFFSET(0x917EE70)
#define RPG_CLIENT_BATTLEASSETPRELOAD_RECORDONESTEP_OFFSET UNITYSDK_OFFSET(0x9180A60)
#define RPG_CLIENT_BATTLEASSETPRELOAD_REFRESHPETPRELOAD_OFFSET UNITYSDK_OFFSET(0x917ECF0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_REMOVEGROUPBYID_OFFSET UNITYSDK_OFFSET(0x917FCC0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_REMOVEGROUPLIST_OFFSET UNITYSDK_OFFSET(0x917FDF0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_REMOVEGROUP_OFFSET UNITYSDK_OFFSET(0x917E7B0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_SETAVATARASSETPRELOADENABLE_OFFSET UNITYSDK_OFFSET(0x917F1F0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_SETBATTLELINEUPDATA_OFFSET UNITYSDK_OFFSET(0x917EA10)
#define RPG_CLIENT_BATTLEASSETPRELOAD_SETPRELOADTAGSTATE_OFFSET UNITYSDK_OFFSET(0x9180150)
#define RPG_CLIENT_BATTLEASSETPRELOAD_SET_PRELOADPHASE_OFFSET UNITYSDK_OFFSET(0x9180690)
#define RPG_CLIENT_BATTLEASSETPRELOAD_STOPRECORD_OFFSET UNITYSDK_OFFSET(0x9180AB0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_UAUTOSTARTRECORD_OFFSET UNITYSDK_OFFSET(0x9180A00)
#define RPG_CLIENT_BATTLEASSETPRELOAD_WAITLOADFINISH_OFFSET UNITYSDK_OFFSET(0x917EB40)
#define RPG_CLIENT_BATTLEASSETPRELOAD__CLEARRULES_OFFSET UNITYSDK_OFFSET(0x917E930)
#define RPG_CLIENT_BATTLEASSETPRELOAD__CTOR_OFFSET UNITYSDK_OFFSET(0x917DF00)
#define RPG_CLIENT_BATTLEASSETPRELOAD__DELAYTRIGGERONENDPLAYVIDEO_OFFSET UNITYSDK_OFFSET(0x917EEE0)
#define RPG_CLIENT_BATTLEASSETPRELOAD__REGISTERRULES_OFFSET UNITYSDK_OFFSET(0x917E2F0)
#define RPG_CLIENT_BATTLEASSETPRELOAD__REIGSTERRULE_OFFSET UNITYSDK_OFFSET(0x917EF40)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAssetPreload_TypeDefinitionIndex = 48283;

	class BattleAssetPreload : public ::System::Object
	{
	public:
		// static const ::System::String* PRELOAD_SCORE_CONFIG_PATH_FORMATTER; // 0x0
		// static const ::System::String* BATTLE_PRELOAD_JSON_PATH; // 0x0
		// static const ::System::String* ADVENTURE_PRELOAD_JSON_PATH; // 0x0
		// static const ::System::String* MONSTER_LOD_JSON_PATH; // 0x0
		::System::Action* BatttleLineupDataInitCallback; // 0x10
		::System::Collections::Generic::List_1<::Class_1_BF2B522AC5DB4E39*>* _PreloadRules; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AIDecisionGroup*>* _InBattlePreloadAIDecisionGroupDic; // 0x20
		::Il2CppArray<::System::Collections::Generic::List_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>*>* _AssetGroupsByGroupType; // 0x28
		::RPG::GameCore::AdventurePreloadConfig* _AdventurePreloadConfig; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>* _AllAssetPreloadGroups; // 0x38
		::RPG::GameCore::BattlePreloadConfig* _BattlePreloadConfig; // 0x40
		::System::Collections::Generic::HashSet_1<::System::String*>* _ActivePreloadTags; // 0x48
		::RPG::GameCore::MonsterLodConfig* _monsterLodConfig; // 0x50
		::RPG::GameCore::BattleLineupData* _LineupData; // 0x58
		::RPG::Client::BattlePreloadPhase _PreloadPhase; // 0x60
		::RPG::Client::BattlePreloadPhase _LastPreloadPhase; // 0x64
		::System::Boolean _IsDisposing; // 0x68
		::System::Boolean _AvatarAssetPreloadEnable; // 0x69

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_DISPOSE_OFFSET))(this);
		}

		::System::Void SetBattleLineupData(::RPG::GameCore::BattleLineupData* pLineupData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleLineupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_SETBATTLELINEUPDATA_OFFSET))(this, pLineupData);
		}

		::System::Boolean CheckLoadFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHECKLOADFINISH_OFFSET))(this);
		}

		::System::Void WaitLoadFinish(::System::Action* pOnLoadFinish, ::Class_1_21A1F6196B1F5D5B_ELoadingWaitType waitType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::Class_1_21A1F6196B1F5D5B_ELoadingWaitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_WAITLOADFINISH_OFFSET))(this, pOnLoadFinish, waitType);
		}

		::RPG::GameCore::AIDecisionGroup* GetAIDecisionGroup(::System::String* jsonPath)
		{
			return ((::RPG::GameCore::AIDecisionGroup*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETAIDECISIONGROUP_OFFSET))(this, jsonPath);
		}

		::System::Void RefreshPetPreload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_REFRESHPETPRELOAD_OFFSET))(this);
		}

		::System::Void OnBeginPlayVideo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ONBEGINPLAYVIDEO_OFFSET))(this);
		}

		::System::Void OnEndPlayVideo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ONENDPLAYVIDEO_OFFSET))(this);
		}

		::System::Void _DelayTriggerOnEndPlayVideo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD__DELAYTRIGGERONENDPLAYVIDEO_OFFSET))(this);
		}

		::System::Void _RegisterRules()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD__REGISTERRULES_OFFSET))(this);
		}

		::System::Void _ReigsterRule(::Class_1_BF2B522AC5DB4E39* rule)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BF2B522AC5DB4E39*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD__REIGSTERRULE_OFFSET))(this, rule);
		}

		::System::Void _ClearRules()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD__CLEARRULES_OFFSET))(this);
		}

		::Class_1_BF2B522AC5DB4E39* GetRule(::System::Type* ruleType)
		{
			return ((::Class_1_BF2B522AC5DB4E39*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETRULE_OFFSET))(this, ruleType);
		}

		::System::Boolean IsRuleForbidByConfict(::System::Type* ruleType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ISRULEFORBIDBYCONFICT_OFFSET))(this, ruleType);
		}

		::System::Boolean GetAvatarAssetPreloadEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETAVATARASSETPRELOADENABLE_OFFSET))(this);
		}

		::System::Void SetAvatarAssetPreloadEnable(::System::Boolean enable, ::System::Boolean isAyncLoad, ::System::Action* onLoadFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_SETAVATARASSETPRELOADENABLE_OFFSET))(this, enable, isAyncLoad, onLoadFinish);
		}

		::RPG::Client::BattleAssetPreload_AssetPreloadGroup* GetEntityAssetPreloadGroup(::RPG::GameCore::GameEntity* entity, ::System::Boolean autoLoad)
		{
			return ((::RPG::Client::BattleAssetPreload_AssetPreloadGroup*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETENTITYASSETPRELOADGROUP_OFFSET))(this, entity, autoLoad);
		}

		::System::UInt32 GetEntityPreloadGroupID(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETENTITYPRELOADGROUPID_OFFSET))(this, entity);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>* GetPreloadGroupList(::RPG::GameCore::PreloadGroupType groupType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>*(*)(::PVOID, ::RPG::GameCore::PreloadGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETPRELOADGROUPLIST_OFFSET))(this, groupType);
		}

		::RPG::Client::BattleAssetPreload_AssetPreloadGroup* GetPreloadGroup(::RPG::GameCore::PreloadGroupType groupType, ::System::UInt32 groupID)
		{
			return ((::RPG::Client::BattleAssetPreload_AssetPreloadGroup*(*)(::PVOID, ::RPG::GameCore::PreloadGroupType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETPRELOADGROUP_OFFSET))(this, groupType, groupID);
		}

		::RPG::Client::BattleAssetPreload_AssetPreloadGroup* GetPreloadGroup_1(::RPG::GameCore::EntityType entityType, ::System::UInt32 groupID)
		{
			return ((::RPG::Client::BattleAssetPreload_AssetPreloadGroup*(*)(::PVOID, ::RPG::GameCore::EntityType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETPRELOADGROUP_1_OFFSET))(this, entityType, groupID);
		}

		::System::Void RemoveGroup(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* group)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_REMOVEGROUP_OFFSET))(this, group);
		}

		::System::Void RemoveGroupByID(::RPG::GameCore::PreloadGroupType groupType, ::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PreloadGroupType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_REMOVEGROUPBYID_OFFSET))(this, groupType, groupID);
		}

		::System::Void RemoveGroupList(::RPG::GameCore::PreloadGroupType groupType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PreloadGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_REMOVEGROUPLIST_OFFSET))(this, groupType);
		}

		::RPG::Client::BattleAssetPreload_AvatarAssetPreloadGroup* GetAvatarAssetPreloadGroup(::System::UInt32 avatarID, ::System::Boolean autoLoad, ::System::String* overrideModelPath, ::RPG::Client::IAvatarInfoProvider* avatarData)
		{
			return ((::RPG::Client::BattleAssetPreload_AvatarAssetPreloadGroup*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::String*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETAVATARASSETPRELOADGROUP_OFFSET))(this, avatarID, autoLoad, overrideModelPath, avatarData);
		}

		::RPG::Client::BattleAssetPreload_ServantAssetPreloadGroup* GetServantAssetPreloadGroup(::System::UInt32 servantID, ::System::Boolean autoLoad)
		{
			return ((::RPG::Client::BattleAssetPreload_ServantAssetPreloadGroup*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETSERVANTASSETPRELOADGROUP_OFFSET))(this, servantID, autoLoad);
		}

		::RPG::Client::BattleAssetPreload_MonsterAssetPreloadGroup* GetMonsterAssetPreloadGroup(::System::UInt32 monsterID, ::System::Boolean autoLoad, ::System::Boolean bIsSummonMonster)
		{
			return ((::RPG::Client::BattleAssetPreload_MonsterAssetPreloadGroup*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETMONSTERASSETPRELOADGROUP_OFFSET))(this, monsterID, autoLoad, bIsSummonMonster);
		}

		::RPG::Client::BattleAssetPreload_BattleEventAssetPreloadGroup* GetBattleEventAssetPreloadGroup(::System::UInt32 battleEventId, ::System::Boolean autoLoad, ::System::Boolean isDynamicPreload)
		{
			return ((::RPG::Client::BattleAssetPreload_BattleEventAssetPreloadGroup*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETBATTLEEVENTASSETPRELOADGROUP_OFFSET))(this, battleEventId, autoLoad, isDynamicPreload);
		}

		::System::Void ForEachPreloadGroups(::System::Action_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_FOREACHPRELOADGROUPS_OFFSET))(this, action);
		}

		::System::Boolean CheckRegisterInPreload(::System::String* assetpath)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHECKREGISTERINPRELOAD_OFFSET))(this, assetpath);
		}

		::System::Void SetPreloadTagState(::System::String* tag, ::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_SETPRELOADTAGSTATE_OFFSET))(this, tag, isActive);
		}

		::System::Boolean IsPreloadTagActive(::System::String* tag)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ISPRELOADTAGACTIVE_OFFSET))(this, tag);
		}

		::System::Boolean get_IsDisposing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GET_ISDISPOSING_OFFSET))(this);
		}

		::RPG::GameCore::MonsterLodConfig* get_MonsterLodConfig()
		{
			return ((::RPG::GameCore::MonsterLodConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GET_MONSTERLODCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::AdventurePreloadConfig* get_AdventurePreloadConfig()
		{
			return ((::RPG::GameCore::AdventurePreloadConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GET_ADVENTUREPRELOADCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::BattlePreloadConfig* get_BattlePreloadConfig()
		{
			return ((::RPG::GameCore::BattlePreloadConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GET_BATTLEPRELOADCONFIG_OFFSET))(this);
		}

		::RPG::Client::BattleAssetPreload_UIAssetPreloadGroup* get_UIAssetGroup()
		{
			return ((::RPG::Client::BattleAssetPreload_UIAssetPreloadGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GET_UIASSETGROUP_OFFSET))(this);
		}

		::RPG::Client::BattleAssetPreload_PreBattleAssetPreloadGroup* get_PreBattleAssetGroup()
		{
			return ((::RPG::Client::BattleAssetPreload_PreBattleAssetPreloadGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GET_PREBATTLEASSETGROUP_OFFSET))(this);
		}

		::RPG::Client::BattleAssetPreload_InBattleAssetPreloadGroup* get_InBattleAssetGroup()
		{
			return ((::RPG::Client::BattleAssetPreload_InBattleAssetPreloadGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GET_INBATTLEASSETGROUP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>* get_AllAssetPreloadGroups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GET_ALLASSETPRELOADGROUPS_OFFSET))(this);
		}

		::RPG::GameCore::BattleLineupData* get_LineupData()
		{
			return ((::RPG::GameCore::BattleLineupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GET_LINEUPDATA_OFFSET))(this);
		}

		::RPG::Client::BattlePreloadPhase get_PreloadPhase()
		{
			return ((::RPG::Client::BattlePreloadPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GET_PRELOADPHASE_OFFSET))(this);
		}

		::System::Void set_PreloadPhase(::RPG::Client::BattlePreloadPhase value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattlePreloadPhase))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_SET_PRELOADPHASE_OFFSET))(this, value);
		}

		::RPG::Client::BattlePreloadPhase get_LastPreloadPhase()
		{
			return ((::RPG::Client::BattlePreloadPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GET_LASTPRELOADPHASE_OFFSET))(this);
		}

		::System::Boolean get_IsBattlePreloadPhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GET_ISBATTLEPRELOADPHASE_OFFSET))(this);
		}

		::System::Boolean get_IsTargetBattlePhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GET_ISTARGETBATTLEPHASE_OFFSET))(this);
		}

		::System::Boolean get_IsTargetAdventurePhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GET_ISTARGETADVENTUREPHASE_OFFSET))(this);
		}

		::System::Void UAutoStartRecord(::System::String* jsonString, ::System::Single interval, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_UAUTOSTARTRECORD_OFFSET))(this, jsonString, interval, finishCallback);
		}

		::System::Void RecordOneStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_RECORDONESTEP_OFFSET))(this);
		}

		::System::Boolean get_IsRecordFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GET_ISRECORDFINISHED_OFFSET))(this);
		}

		::System::Void StopRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_STOPRECORD_OFFSET))(this);
		}
	};
}
