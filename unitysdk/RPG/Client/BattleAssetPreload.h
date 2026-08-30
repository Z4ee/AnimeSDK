#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_21A1F6196B1F5D5B_ELoadingWaitType.h"
#include "unitysdk/RPG/Client/BattlePreloadPhase.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/PreloadGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_BF2B522AC5DB4E39;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroup; }
namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroupCreateParam; }
namespace RPG::Client { class BattleAssetPreload_AvatarAssetPreloadGroup; }
namespace RPG::Client { class BattleAssetPreload_BattleEventAssetPreloadGroup; }
namespace RPG::Client { class BattleAssetPreload_IPreloadTypeModifier; }
namespace RPG::Client { class BattleAssetPreload_InBattleAssetPreloadGroup; }
namespace RPG::Client { class BattleAssetPreload_MonsterAssetPreloadGroup; }
namespace RPG::Client { class BattleAssetPreload_PreBattleAssetPreloadGroup; }
namespace RPG::Client { class BattleAssetPreload_RtCharacterPreloadGroupBase; }
namespace RPG::Client { class BattleAssetPreload_ServantAssetPreloadGroup; }
namespace RPG::Client { class BattleAssetPreload_UIAssetPreloadGroup; }
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

#define RPG_CLIENT_BATTLEASSETPRELOAD_ADDPRELOADTYPEMODIFIER_OFFSET UNITYSDK_OFFSET(0xC8D4E50)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHECKLOADFINISH_OFFSET UNITYSDK_OFFSET(0xC8D5C80)
#define RPG_CLIENT_BATTLEASSETPRELOAD_CHECKREGISTERINPRELOAD_OFFSET UNITYSDK_OFFSET(0xC8D7950)
#define RPG_CLIENT_BATTLEASSETPRELOAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC8D5640)
#define RPG_CLIENT_BATTLEASSETPRELOAD_FOREACHPRELOADGROUPS_OFFSET UNITYSDK_OFFSET(0xC8D7870)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETAIDECISIONGROUP_OFFSET UNITYSDK_OFFSET(0xC8D5E20)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETAVATARASSETPRELOADENABLE_OFFSET UNITYSDK_OFFSET(0xC8D6780)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETAVATARASSETPRELOADGROUP_OFFSET UNITYSDK_OFFSET(0xC8D6B50)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETBATTLEEVENTASSETPRELOADGROUP_OFFSET UNITYSDK_OFFSET(0xC8D6E90)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETENTITYASSETPRELOADGROUP_OFFSET UNITYSDK_OFFSET(0xC8D6A10)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETENTITYPRELOADGROUPID_OFFSET UNITYSDK_OFFSET(0xC8D7080)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETMONSTERASSETPRELOADGROUP_OFFSET UNITYSDK_OFFSET(0xC8D6C60)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETPRELOADGROUPLIST_OFFSET UNITYSDK_OFFSET(0xC8D69A0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETPRELOADGROUP_1_OFFSET UNITYSDK_OFFSET(0xC8D7260)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETPRELOADGROUP_OFFSET UNITYSDK_OFFSET(0xC8D7170)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETRTCHARACTERPRELOADGROUP_OFFSET UNITYSDK_OFFSET(0xC8D6F80)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETRULE_OFFSET UNITYSDK_OFFSET(0xC8D64D0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GETSERVANTASSETPRELOADGROUP_OFFSET UNITYSDK_OFFSET(0xC8D6DC0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_ADVENTUREPRELOADCONFIG_OFFSET UNITYSDK_OFFSET(0xC8D7DA0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_ALLASSETPRELOADGROUPS_OFFSET UNITYSDK_OFFSET(0xC8D7FE0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_BATTLEPRELOADCONFIG_OFFSET UNITYSDK_OFFSET(0xC8D7DB0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_INBATTLEASSETGROUP_OFFSET UNITYSDK_OFFSET(0xC8D7ED0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_ISBATTLENEWPRELOADPHASE_OFFSET UNITYSDK_OFFSET(0xC8D8400)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_ISBATTLEPRELOADPHASE_OFFSET UNITYSDK_OFFSET(0xC8D83B0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_ISDISPOSING_OFFSET UNITYSDK_OFFSET(0xC8D7D80)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_ISRECORDFINISHED_OFFSET UNITYSDK_OFFSET(0xC8D85A0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_ISSPAWNBENCHMARKFINISHED_OFFSET UNITYSDK_OFFSET(0xC8D8690)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_ISTARGETADVENTUREPHASE_OFFSET UNITYSDK_OFFSET(0xC8D84B0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_ISTARGETBATTLEPHASE_OFFSET UNITYSDK_OFFSET(0xC8D8460)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_LASTPRELOADPHASE_OFFSET UNITYSDK_OFFSET(0xC8D8450)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_LINEUPDATA_OFFSET UNITYSDK_OFFSET(0xC8D7FF0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_MONSTERLODCONFIG_OFFSET UNITYSDK_OFFSET(0xC8D7D90)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_PREBATTLEASSETGROUP_OFFSET UNITYSDK_OFFSET(0xC8D5F50)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_PRELOADPHASE_OFFSET UNITYSDK_OFFSET(0xC8D8000)
#define RPG_CLIENT_BATTLEASSETPRELOAD_GET_UIASSETGROUP_OFFSET UNITYSDK_OFFSET(0xC8D7DC0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ISPRELOADTAGACTIVE_OFFSET UNITYSDK_OFFSET(0xC8D7D00)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ISRULEFORBIDBYCONFICT_OFFSET UNITYSDK_OFFSET(0xC8D65D0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ONBEGINPLAYVIDEO_OFFSET UNITYSDK_OFFSET(0xC8D62A0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ONENDPLAYVIDEO_OFFSET UNITYSDK_OFFSET(0xC8D6300)
#define RPG_CLIENT_BATTLEASSETPRELOAD_RECORDONESTEP_OFFSET UNITYSDK_OFFSET(0xC8D8560)
#define RPG_CLIENT_BATTLEASSETPRELOAD_REFRESHPETPRELOAD_OFFSET UNITYSDK_OFFSET(0xC8D5EF0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_REMOVEGROUPBYID_OFFSET UNITYSDK_OFFSET(0xC8D7470)
#define RPG_CLIENT_BATTLEASSETPRELOAD_REMOVEGROUPLIST_OFFSET UNITYSDK_OFFSET(0xC8D75C0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_REMOVEGROUP_OFFSET UNITYSDK_OFFSET(0xC8D5900)
#define RPG_CLIENT_BATTLEASSETPRELOAD_REMOVEPRELOADTYPEMODIFIER_OFFSET UNITYSDK_OFFSET(0xC8D4F70)
#define RPG_CLIENT_BATTLEASSETPRELOAD_SETAVATARASSETPRELOADENABLE_OFFSET UNITYSDK_OFFSET(0xC8D67C0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_SETBATTLELINEUPDATA_OFFSET UNITYSDK_OFFSET(0xC8D5C10)
#define RPG_CLIENT_BATTLEASSETPRELOAD_SETPRELOADTAGSTATE_OFFSET UNITYSDK_OFFSET(0xC8D79C0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_SET_PRELOADPHASE_OFFSET UNITYSDK_OFFSET(0xC8D8010)
#define RPG_CLIENT_BATTLEASSETPRELOAD_STOPRECORD_OFFSET UNITYSDK_OFFSET(0xC8D85B0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_UAUTOSTARTRECORD_OFFSET UNITYSDK_OFFSET(0xC8D8500)
#define RPG_CLIENT_BATTLEASSETPRELOAD_UAUTOSTARTSPAWNBENCHMARK_OFFSET UNITYSDK_OFFSET(0xC8D85F0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_UAUTOSTOPSPAWNBENCHMARK_OFFSET UNITYSDK_OFFSET(0xC8D8650)
#define RPG_CLIENT_BATTLEASSETPRELOAD_WAITLOADFINISH_OFFSET UNITYSDK_OFFSET(0xC8D5D50)
#define RPG_CLIENT_BATTLEASSETPRELOAD__CLEARRULES_OFFSET UNITYSDK_OFFSET(0xC8D5AE0)
#define RPG_CLIENT_BATTLEASSETPRELOAD__CTOR_OFFSET UNITYSDK_OFFSET(0xC8D5000)
#define RPG_CLIENT_BATTLEASSETPRELOAD__DELAYTRIGGERONENDPLAYVIDEO_OFFSET UNITYSDK_OFFSET(0xC8D63A0)
#define RPG_CLIENT_BATTLEASSETPRELOAD__REGISTERRULES_OFFSET UNITYSDK_OFFSET(0xC8D5420)
#define RPG_CLIENT_BATTLEASSETPRELOAD__REIGSTERRULE_OFFSET UNITYSDK_OFFSET(0xC8D6400)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAssetPreload_TypeDefinitionIndex = 59787;

	class BattleAssetPreload : public ::System::Object
	{
	public:
		// static const ::System::String* PRELOAD_SCORE_CONFIG_PATH_FORMATTER; // 0x0
		// static const ::System::String* BATTLE_PRELOAD_JSON_PATH; // 0x0
		// static const ::System::String* ADVENTURE_PRELOAD_JSON_PATH; // 0x0
		// static const ::System::String* MONSTER_LOD_JSON_PATH; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>* _AllAssetPreloadGroups; // 0x10
		::System::Action* BatttleLineupDataInitCallback; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AIDecisionGroup*>* _InBattlePreloadAIDecisionGroupDic; // 0x20
		::RPG::GameCore::AdventurePreloadConfig* _AdventurePreloadConfig; // 0x28
		::RPG::GameCore::MonsterLodConfig* _monsterLodConfig; // 0x30
		::RPG::GameCore::BattleLineupData* _LineupData; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::BattleAssetPreload_IPreloadTypeModifier*>* _PreloadTypeModifiers; // 0x40
		::Il2CppArray<::System::Collections::Generic::List_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>*>* _AssetGroupsByGroupType; // 0x48
		::System::Collections::Generic::List_1<::Class_1_BF2B522AC5DB4E39*>* _PreloadRules; // 0x50
		::RPG::GameCore::BattlePreloadConfig* _BattlePreloadConfig; // 0x58
		::System::Collections::Generic::HashSet_1<::System::String*>* _ActivePreloadTags; // 0x60
		::System::Boolean _AvatarAssetPreloadEnable; // 0x68
		::System::Boolean _IsDisposing; // 0x69
		::RPG::Client::BattlePreloadPhase _PreloadPhase; // 0x6C
		::RPG::Client::BattlePreloadPhase _LastPreloadPhase; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD__CTOR_OFFSET))(this);
		}

		::System::Void AddPreloadTypeModifier(::RPG::Client::BattleAssetPreload_IPreloadTypeModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_IPreloadTypeModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ADDPRELOADTYPEMODIFIER_OFFSET))(this, a1);
		}

		::System::Void RemovePreloadTypeModifier(::RPG::Client::BattleAssetPreload_IPreloadTypeModifier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_IPreloadTypeModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_REMOVEPRELOADTYPEMODIFIER_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_DISPOSE_OFFSET))(this);
		}

		::System::Void SetBattleLineupData(::RPG::GameCore::BattleLineupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleLineupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_SETBATTLELINEUPDATA_OFFSET))(this, a1);
		}

		::System::Boolean CheckLoadFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHECKLOADFINISH_OFFSET))(this);
		}

		::System::Void WaitLoadFinish(::System::Action* a1, ::Class_1_21A1F6196B1F5D5B_ELoadingWaitType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::Class_1_21A1F6196B1F5D5B_ELoadingWaitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_WAITLOADFINISH_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AIDecisionGroup* GetAIDecisionGroup(::System::String* a1)
		{
			return ((::RPG::GameCore::AIDecisionGroup*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETAIDECISIONGROUP_OFFSET))(this, a1);
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

		::System::Void _ReigsterRule(::Class_1_BF2B522AC5DB4E39* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BF2B522AC5DB4E39*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD__REIGSTERRULE_OFFSET))(this, a1);
		}

		::System::Void _ClearRules()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD__CLEARRULES_OFFSET))(this);
		}

		::Class_1_BF2B522AC5DB4E39* GetRule(::System::Type* a1)
		{
			return ((::Class_1_BF2B522AC5DB4E39*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETRULE_OFFSET))(this, a1);
		}

		::System::Boolean IsRuleForbidByConfict(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ISRULEFORBIDBYCONFICT_OFFSET))(this, a1);
		}

		::System::Boolean GetAvatarAssetPreloadEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETAVATARASSETPRELOADENABLE_OFFSET))(this);
		}

		::System::Void SetAvatarAssetPreloadEnable(::System::Boolean a1, ::System::Boolean a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_SETAVATARASSETPRELOADENABLE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::BattleAssetPreload_AssetPreloadGroup* GetEntityAssetPreloadGroup(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::BattleAssetPreload_AssetPreloadGroup*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETENTITYASSETPRELOADGROUP_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetEntityPreloadGroupID(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETENTITYPRELOADGROUPID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>* GetPreloadGroupList(::RPG::GameCore::PreloadGroupType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>*(*)(::PVOID, ::RPG::GameCore::PreloadGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETPRELOADGROUPLIST_OFFSET))(this, a1);
		}

		::RPG::Client::BattleAssetPreload_AssetPreloadGroup* GetPreloadGroup(::RPG::GameCore::PreloadGroupType a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::BattleAssetPreload_AssetPreloadGroup*(*)(::PVOID, ::RPG::GameCore::PreloadGroupType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETPRELOADGROUP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::BattleAssetPreload_AssetPreloadGroup* GetPreloadGroup_1(::RPG::GameCore::EntityType a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::BattleAssetPreload_AssetPreloadGroup*(*)(::PVOID, ::RPG::GameCore::EntityType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETPRELOADGROUP_1_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveGroup(::RPG::Client::BattleAssetPreload_AssetPreloadGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_REMOVEGROUP_OFFSET))(this, a1);
		}

		::System::Void RemoveGroupByID(::RPG::GameCore::PreloadGroupType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PreloadGroupType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_REMOVEGROUPBYID_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveGroupList(::RPG::GameCore::PreloadGroupType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PreloadGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_REMOVEGROUPLIST_OFFSET))(this, a1);
		}

		::RPG::Client::BattleAssetPreload_AvatarAssetPreloadGroup* GetAvatarAssetPreloadGroup(::System::UInt32 a1, ::System::Boolean a2, ::System::String* a3, ::RPG::AvatarSystem::IAvatar* a4)
		{
			return ((::RPG::Client::BattleAssetPreload_AvatarAssetPreloadGroup*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::String*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETAVATARASSETPRELOADGROUP_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::BattleAssetPreload_ServantAssetPreloadGroup* GetServantAssetPreloadGroup(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::BattleAssetPreload_ServantAssetPreloadGroup*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETSERVANTASSETPRELOADGROUP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::BattleAssetPreload_MonsterAssetPreloadGroup* GetMonsterAssetPreloadGroup(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::BattleAssetPreload_MonsterAssetPreloadGroup*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETMONSTERASSETPRELOADGROUP_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::BattleAssetPreload_BattleEventAssetPreloadGroup* GetBattleEventAssetPreloadGroup(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::BattleAssetPreload_BattleEventAssetPreloadGroup*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETBATTLEEVENTASSETPRELOADGROUP_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::BattleAssetPreload_RtCharacterPreloadGroupBase* GetRtCharacterPreloadGroup(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::BattleAssetPreload_RtCharacterPreloadGroupBase*(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GETRTCHARACTERPRELOADGROUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ForEachPreloadGroups(::System::Action_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::BattleAssetPreload_AssetPreloadGroup*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_FOREACHPRELOADGROUPS_OFFSET))(this, a1);
		}

		::System::Boolean CheckRegisterInPreload(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_CHECKREGISTERINPRELOAD_OFFSET))(this, a1);
		}

		::System::Void SetPreloadTagState(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_SETPRELOADTAGSTATE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsPreloadTagActive(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ISPRELOADTAGACTIVE_OFFSET))(this, a1);
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

		::System::Void set_PreloadPhase(::RPG::Client::BattlePreloadPhase a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattlePreloadPhase))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_SET_PRELOADPHASE_OFFSET))(this, a1);
		}

		::RPG::Client::BattlePreloadPhase get_LastPreloadPhase()
		{
			return ((::RPG::Client::BattlePreloadPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GET_LASTPRELOADPHASE_OFFSET))(this);
		}

		::System::Boolean get_IsBattlePreloadPhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GET_ISBATTLEPRELOADPHASE_OFFSET))(this);
		}

		::System::Boolean get_IsBattleNewPreloadPhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GET_ISBATTLENEWPRELOADPHASE_OFFSET))(this);
		}

		::System::Boolean get_IsTargetBattlePhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GET_ISTARGETBATTLEPHASE_OFFSET))(this);
		}

		::System::Boolean get_IsTargetAdventurePhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GET_ISTARGETADVENTUREPHASE_OFFSET))(this);
		}

		::System::Void UAutoStartRecord(::System::String* a1, ::System::Single a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_UAUTOSTARTRECORD_OFFSET))(this, a1, a2, a3);
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

		::System::Void UAutoStartSpawnBenchmark(::System::String* a1, ::System::Single a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_UAUTOSTARTSPAWNBENCHMARK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UAutoStopSpawnBenchmark()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_UAUTOSTOPSPAWNBENCHMARK_OFFSET))(this);
		}

		::System::Boolean get_IsSpawnBenchmarkFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_GET_ISSPAWNBENCHMARKFINISHED_OFFSET))(this);
		}
	};
}
