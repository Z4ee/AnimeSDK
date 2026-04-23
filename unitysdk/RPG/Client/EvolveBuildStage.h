#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EvolveBuildStageStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

class Class_1_942D40AEEDD1812F;
class Class_1_A88C3AAF0DD46F4C_3;
namespace RPG::Client { class EvolveBuildCollectionGear; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class EvolveBuildStageRow; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDSTAGE_GETMONSTERIDS_OFFSET UNITYSDK_OFFSET(0xA303F50)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GETMONSTERS_OFFSET UNITYSDK_OFFSET(0xA3043A0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GETRANKNAME_OFFSET UNITYSDK_OFFSET(0xA3049D0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GETTEAMSAVE_OFFSET UNITYSDK_OFFSET(0xA305750)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0xA303D20)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA303900)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_DEVILDESC_OFFSET UNITYSDK_OFFSET(0xA3039D0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xA303A80)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_FIRSTWINQUEST_OFFSET UNITYSDK_OFFSET(0xA303B00)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_HASNORANDOMBONUS_OFFSET UNITYSDK_OFFSET(0xA304CB0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_HASRANDOMPERIOD_OFFSET UNITYSDK_OFFSET(0xA303C90)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_HIGHSCORE_OFFSET UNITYSDK_OFFSET(0xA304C70)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_ID_OFFSET UNITYSDK_OFFSET(0xA2FFEE0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_INITIALWEAPONID_OFFSET UNITYSDK_OFFSET(0xA3037F0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_ISCLICKED_OFFSET UNITYSDK_OFFSET(0xA304E40)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_ISWEAPONSELECTABLE_OFFSET UNITYSDK_OFFSET(0xA303AA0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_LOCKTOASTPARAM_OFFSET UNITYSDK_OFFSET(0xA303720)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA300B40)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_NEXTSTAGE_OFFSET UNITYSDK_OFFSET(0xA303C70)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_PERIODS_OFFSET UNITYSDK_OFFSET(0xA304C60)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_RECOMMENDGEARIDS_OFFSET UNITYSDK_OFFSET(0xA303AE0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_RECOMMENDGEARS_OFFSET UNITYSDK_OFFSET(0xA303B20)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SEASON_OFFSET UNITYSDK_OFFSET(0xA2FF430)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SELECTEDWEAPON_OFFSET UNITYSDK_OFFSET(0xA305350)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SHOULDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0xA304CD0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SHOWNEWRECORDMARK_OFFSET UNITYSDK_OFFSET(0xA304C90)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0xA304CF0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SKILLRECOMMENDATIONS_OFFSET UNITYSDK_OFFSET(0xA303AC0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xA303890)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSICONPATH_OFFSET UNITYSDK_OFFSET(0xA303990)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSMAZEBUFFID_OFFSET UNITYSDK_OFFSET(0xA3039B0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSMAZEBUFF_OFFSET UNITYSDK_OFFSET(0xA303A00)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSNUMFORMAT_OFFSET UNITYSDK_OFFSET(0xA303960)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSSHORTDESC_OFFSET UNITYSDK_OFFSET(0xA303930)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0xA303870)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_UNLOCKQUESTID_OFFSET UNITYSDK_OFFSET(0xA303700)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_ISFIRSTQUESTFINISHEDORCLOSE_OFFSET UNITYSDK_OFFSET(0xA304B30)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xA305250)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SETNEXTSTAGE_OFFSET UNITYSDK_OFFSET(0xA302220)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_HASNORANDOMBONUS_OFFSET UNITYSDK_OFFSET(0xA304CC0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_HIGHSCORE_OFFSET UNITYSDK_OFFSET(0xA304C80)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_ISCLICKED_OFFSET UNITYSDK_OFFSET(0xA304F60)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_NEXTSTAGE_OFFSET UNITYSDK_OFFSET(0xA303C80)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_SELECTEDWEAPON_OFFSET UNITYSDK_OFFSET(0xA305580)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_SHOULDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0xA304CE0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_SHOWNEWRECORDMARK_OFFSET UNITYSDK_OFFSET(0xA304CA0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA3033F0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE__ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0xA3051A0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildStage_TypeDefinitionIndex = 58802;

	class EvolveBuildStage : public ::System::Object
	{
	public:
		::RPG::Client::EvolveBuildStage* _NextStage_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _Periods_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::Class_1_942D40AEEDD1812F*>* _SortedRanks; // 0x20
		::RPG::Client::EvolveBuildCollectionGear* _SelectedWeapon; // 0x28
		::RPG::GameCore::EvolveBuildStageRow* _Row; // 0x30
		::System::Boolean _ShouldPlayUnlockAnim_k__BackingField; // 0x38
		::System::Boolean _ShowNewRecordMark_k__BackingField; // 0x39
		::System::Boolean _HasNoRandomBonus_k__BackingField; // 0x3A
		::System::UInt32 _HighScore_k__BackingField; // 0x3C

		::System::Void _ctor(::RPG::GameCore::EvolveBuildStageRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildStageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE__CTOR_OFFSET))(this, row);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_UnlockQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_UNLOCKQUESTID_OFFSET))(this);
		}

		::System::UInt32 get_LockToastParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_LOCKTOASTPARAM_OFFSET))(this);
		}

		::System::UInt32 get_InitialWeaponID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_INITIALWEAPONID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TrialAvatarIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TRIALAVATARIDS_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_TeamBonusShortDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSSHORTDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_TeamBonusNumFormat()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSNUMFORMAT_OFFSET))(this);
		}

		::System::String* get_TeamBonusIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_TeamBonusMazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSMAZEBUFFID_OFFSET))(this);
		}

		::RPG::Client::TextID get_DevilDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_DEVILDESC_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SEASON_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* get_TeamBonusMazeBuff()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSMAZEBUFF_OFFSET))(this);
		}

		::System::Int32 get_Difficulty()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Boolean get_IsWeaponSelectable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_ISWEAPONSELECTABLE_OFFSET))(this);
		}

		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_3*>* get_SkillRecommendations()
		{
			return ((::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SKILLRECOMMENDATIONS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RecommendGearIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_RECOMMENDGEARIDS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_FirstWinQuest()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_FIRSTWINQUEST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCollectionGear*>* get_RecommendGears()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCollectionGear*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_RECOMMENDGEARS_OFFSET))(this);
		}

		::RPG::Client::EvolveBuildStage* get_NextStage()
		{
			return ((::RPG::Client::EvolveBuildStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_NEXTSTAGE_OFFSET))(this);
		}

		::System::Void set_NextStage(::RPG::Client::EvolveBuildStage* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_SET_NEXTSTAGE_OFFSET))(this, value);
		}

		::System::Boolean get_HasRandomPeriod()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_HASRANDOMPERIOD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetTrialAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GETTRIALAVATARS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetMonsterIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GETMONSTERIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetMonsters()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GETMONSTERS_OFFSET))(this);
		}

		::System::String* GetRankName(::System::UInt32 score)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GETRANKNAME_OFFSET))(this, score);
		}

		::System::Void SetNextStage(::RPG::Client::EvolveBuildStage* stage)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_SETNEXTSTAGE_OFFSET))(this, stage);
		}

		::System::Boolean IsFirstQuestFinishedOrClose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_ISFIRSTQUESTFINISHEDORCLOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_Periods()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_PERIODS_OFFSET))(this);
		}

		::System::UInt32 get_HighScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_HIGHSCORE_OFFSET))(this);
		}

		::System::Void set_HighScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_SET_HIGHSCORE_OFFSET))(this, value);
		}

		::System::Boolean get_ShowNewRecordMark()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SHOWNEWRECORDMARK_OFFSET))(this);
		}

		::System::Void set_ShowNewRecordMark(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_SET_SHOWNEWRECORDMARK_OFFSET))(this, value);
		}

		::System::Boolean get_HasNoRandomBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_HASNORANDOMBONUS_OFFSET))(this);
		}

		::System::Void set_HasNoRandomBonus(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_SET_HASNORANDOMBONUS_OFFSET))(this, value);
		}

		::System::Boolean get_ShouldPlayUnlockAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SHOULDPLAYUNLOCKANIM_OFFSET))(this);
		}

		::System::Void set_ShouldPlayUnlockAnim(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_SET_SHOULDPLAYUNLOCKANIM_OFFSET))(this, value);
		}

		::System::Boolean get_ShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SHOWREDDOT_OFFSET))(this);
		}

		::System::Boolean get_IsClicked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_ISCLICKED_OFFSET))(this);
		}

		::System::Void set_IsClicked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_SET_ISCLICKED_OFFSET))(this, value);
		}

		::RPG::Client::EvolveBuildStageStatus get_Status()
		{
			return ((::RPG::Client::EvolveBuildStageStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_STATUS_OFFSET))(this);
		}

		::System::Boolean IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_ISLOCKED_OFFSET))(this);
		}

		::System::Boolean _IsInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE__ISINPROGRESS_OFFSET))(this);
		}

		::RPG::Client::EvolveBuildCollectionGear* get_SelectedWeapon()
		{
			return ((::RPG::Client::EvolveBuildCollectionGear*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SELECTEDWEAPON_OFFSET))(this);
		}

		::System::Void set_SelectedWeapon(::RPG::Client::EvolveBuildCollectionGear* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildCollectionGear*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_SET_SELECTEDWEAPON_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetTeamSave()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGE_GETTEAMSAVE_OFFSET))(this);
		}
	};
}
