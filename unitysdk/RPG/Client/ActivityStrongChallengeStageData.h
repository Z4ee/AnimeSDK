#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/StrongChallengeBattleType.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ActivityStrongChallengeBossDetailData; }
namespace RPG::Client { class ActivityStrongChallengeBuffData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class StrongChallengeStageRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0xC68C830)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_AVAILABLEBUFFS_OFFSET UNITYSDK_OFFSET(0xC68C770)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0xC68C6D0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_BOSSDETAILS_OFFSET UNITYSDK_OFFSET(0xC68C780)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_CLEARSCORELINE_OFFSET UNITYSDK_OFFSET(0xC68B190)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_COSTLIMIT_OFFSET UNITYSDK_OFFSET(0xC68C720)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_FIGHTEVENTID_OFFSET UNITYSDK_OFFSET(0xC68C9A0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_HISTORYHIGHSCORE_OFFSET UNITYSDK_OFFSET(0xC68D020)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISACTIVITYINPROGRESS_OFFSET UNITYSDK_OFFSET(0xC68D740)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISCHALLENGED_OFFSET UNITYSDK_OFFSET(0xC68D1F0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISCLEARED_OFFSET UNITYSDK_OFFSET(0xC68D190)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISCLICKED_OFFSET UNITYSDK_OFFSET(0xC68D3B0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xC68D0A0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0xC68D040)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISVICTORY_OFFSET UNITYSDK_OFFSET(0xC68D350)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_LASTBATTLEAVATARS_OFFSET UNITYSDK_OFFSET(0xC68D870)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_LASTBATTLEBUFFS_OFFSET UNITYSDK_OFFSET(0xC68D880)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_MONSTERBGFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xC68C610)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_MONSTERFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xC68C570)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_MONSTERGRAYFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xC68C5C0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_MONSTERLIST_OFFSET UNITYSDK_OFFSET(0xC68CE40)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC68C660)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_PRESTAGEID_OFFSET UNITYSDK_OFFSET(0xC68C330)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_PRESTAGE_OFFSET UNITYSDK_OFFSET(0xC68C4C0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_QUESTGROUPID_OFFSET UNITYSDK_OFFSET(0xC68C220)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_QUESTLIST_OFFSET UNITYSDK_OFFSET(0xC687B30)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_RECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0xC68CD80)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_RECOMMENDNATURE_OFFSET UNITYSDK_OFFSET(0xC68C7E0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xC68C9F0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_SCOREINTERVAL_OFFSET UNITYSDK_OFFSET(0xC68C790)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_SHOULDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0xC68D370)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_SHOULDPLAYVICTORYANIM_OFFSET UNITYSDK_OFFSET(0xC68D390)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0xC68D800)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xC68BE80)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_SET_HISTORYHIGHSCORE_OFFSET UNITYSDK_OFFSET(0xC68D030)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_SET_ISCLICKED_OFFSET UNITYSDK_OFFSET(0xC68D4E0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_SET_ISVICTORY_OFFSET UNITYSDK_OFFSET(0xC68D360)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_SET_SHOULDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0xC68D380)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_SET_SHOULDPLAYVICTORYANIM_OFFSET UNITYSDK_OFFSET(0xC68D3A0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC68BC90)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityStrongChallengeStageData_TypeDefinitionIndex = 61999;

	class ActivityStrongChallengeStageData : public ::System::Object
	{
	public:
		::RPG::GameCore::StrongChallengeStageRow* _Row; // 0x10
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* _LastBattleAvatars_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityStrongChallengeBuffData*>* _LastBattleBuffs_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ActivityStrongChallengeBuffData*>* _AvailableBuffs_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ActivityStrongChallengeBossDetailData*>* _BossDetails_k__BackingField; // 0x30
		::System::UInt32 _HistoryHighScore_k__BackingField; // 0x38
		::System::Boolean _ShouldPlayVictoryAnim_k__BackingField; // 0x3C
		::System::Boolean _IsVictory_k__BackingField; // 0x3D
		::System::Boolean _ShouldPlayUnlockAnim_k__BackingField; // 0x3E

		::System::Void _ctor(::RPG::GameCore::StrongChallengeStageRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StrongChallengeStageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_STAGEID_OFFSET))(this);
		}

		::System::UInt32 get_PreStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_PRESTAGEID_OFFSET))(this);
		}

		::RPG::Client::ActivityStrongChallengeStageData* get_PreStage()
		{
			return ((::RPG::Client::ActivityStrongChallengeStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_PRESTAGE_OFFSET))(this);
		}

		::System::String* get_MonsterFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_MONSTERFIGUREPATH_OFFSET))(this);
		}

		::System::String* get_MonsterGrayFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_MONSTERGRAYFIGUREPATH_OFFSET))(this);
		}

		::System::String* get_MonsterBgFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_MONSTERBGFIGUREPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_NAME_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_QuestList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_QUESTLIST_OFFSET))(this);
		}

		::System::UInt32 get_QuestGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_QUESTGROUPID_OFFSET))(this);
		}

		::RPG::GameCore::StrongChallengeBattleType get_BattleType()
		{
			return ((::RPG::GameCore::StrongChallengeBattleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_BATTLETYPE_OFFSET))(this);
		}

		::System::UInt32 get_CostLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_COSTLIMIT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityStrongChallengeBuffData*>* get_AvailableBuffs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityStrongChallengeBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_AVAILABLEBUFFS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityStrongChallengeBossDetailData*>* get_BossDetails()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityStrongChallengeBossDetailData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_BOSSDETAILS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ScoreInterval()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_SCOREINTERVAL_OFFSET))(this);
		}

		::System::UInt32 get_ClearScoreLine()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_CLEARSCORELINE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_RecommendNature()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_RECOMMENDNATURE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetTrialAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GETTRIALAVATARS_OFFSET))(this);
		}

		::System::UInt32 get_FightEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_FIGHTEVENTID_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::UInt32 get_RecommendLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_RECOMMENDLEVEL_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_MonsterList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_MONSTERLIST_OFFSET))(this);
		}

		::System::UInt32 get_HistoryHighScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_HISTORYHIGHSCORE_OFFSET))(this);
		}

		::System::Void set_HistoryHighScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_SET_HISTORYHIGHSCORE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISOPEN_OFFSET))(this);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISCHALLENGED_OFFSET))(this);
		}

		::System::Boolean get_IsCleared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISCLEARED_OFFSET))(this);
		}

		::System::Boolean get_IsVictory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISVICTORY_OFFSET))(this);
		}

		::System::Void set_IsVictory(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_SET_ISVICTORY_OFFSET))(this, a1);
		}

		::System::Boolean get_ShouldPlayUnlockAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_SHOULDPLAYUNLOCKANIM_OFFSET))(this);
		}

		::System::Void set_ShouldPlayUnlockAnim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_SET_SHOULDPLAYUNLOCKANIM_OFFSET))(this, a1);
		}

		::System::Boolean get_ShouldPlayVictoryAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_SHOULDPLAYVICTORYANIM_OFFSET))(this);
		}

		::System::Void set_ShouldPlayVictoryAnim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_SET_SHOULDPLAYVICTORYANIM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsClicked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISCLICKED_OFFSET))(this);
		}

		::System::Void set_IsClicked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_SET_ISCLICKED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActivityInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_ISACTIVITYINPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_ShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_SHOWREDDOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* get_LastBattleAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_LASTBATTLEAVATARS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityStrongChallengeBuffData*>* get_LastBattleBuffs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityStrongChallengeBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGESTAGEDATA_GET_LASTBATTLEBUFFS_OFFSET))(this);
		}
	};
}
