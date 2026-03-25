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

#define RPG_CLIENT_EVOLVEBUILDSTAGE_GETMONSTERIDS_OFFSET UNITYSDK_OFFSET(0x96452C0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GETMONSTERS_OFFSET UNITYSDK_OFFSET(0x9645710)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GETRANKNAME_OFFSET UNITYSDK_OFFSET(0x9645D40)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GETTEAMSAVE_OFFSET UNITYSDK_OFFSET(0x9646AC0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0x9645090)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9644D40)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_DEVILDESC_OFFSET UNITYSDK_OFFSET(0x9644E10)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x9644EC0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_FIRSTWINQUEST_OFFSET UNITYSDK_OFFSET(0x9644F00)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_HASNORANDOMBONUS_OFFSET UNITYSDK_OFFSET(0x9646020)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_HASRANDOMPERIOD_OFFSET UNITYSDK_OFFSET(0x9640B00)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_HIGHSCORE_OFFSET UNITYSDK_OFFSET(0x9645FE0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_ID_OFFSET UNITYSDK_OFFSET(0x963E9F0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_INITIALWEAPONID_OFFSET UNITYSDK_OFFSET(0x9644CA0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_ISCLICKED_OFFSET UNITYSDK_OFFSET(0x96461B0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_ISWEAPONSELECTABLE_OFFSET UNITYSDK_OFFSET(0x963BA20)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_LOCKTOASTPARAM_OFFSET UNITYSDK_OFFSET(0x9644BD0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9642E50)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_NEXTSTAGE_OFFSET UNITYSDK_OFFSET(0x9645070)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_PERIODS_OFFSET UNITYSDK_OFFSET(0x9645FD0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_RECOMMENDGEARIDS_OFFSET UNITYSDK_OFFSET(0x9644EE0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_RECOMMENDGEARS_OFFSET UNITYSDK_OFFSET(0x9644F20)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SEASON_OFFSET UNITYSDK_OFFSET(0x963B9C0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SELECTEDWEAPON_OFFSET UNITYSDK_OFFSET(0x96466C0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SHOULDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x9646040)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SHOWNEWRECORDMARK_OFFSET UNITYSDK_OFFSET(0x9646000)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x9646060)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_SKILLRECOMMENDATIONS_OFFSET UNITYSDK_OFFSET(0x963B9E0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x96409C0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSICONPATH_OFFSET UNITYSDK_OFFSET(0x9644DD0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSMAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x9644DF0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSMAZEBUFF_OFFSET UNITYSDK_OFFSET(0x9644E40)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSNUMFORMAT_OFFSET UNITYSDK_OFFSET(0x9644DA0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TEAMBONUSSHORTDESC_OFFSET UNITYSDK_OFFSET(0x9644D70)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_TRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0x9644D20)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_GET_UNLOCKQUESTID_OFFSET UNITYSDK_OFFSET(0x9644BB0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_ISFIRSTQUESTFINISHEDORCLOSE_OFFSET UNITYSDK_OFFSET(0x9645EA0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x96465C0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SETNEXTSTAGE_OFFSET UNITYSDK_OFFSET(0x9643C30)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_HASNORANDOMBONUS_OFFSET UNITYSDK_OFFSET(0x9646030)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_HIGHSCORE_OFFSET UNITYSDK_OFFSET(0x9645FF0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_ISCLICKED_OFFSET UNITYSDK_OFFSET(0x96462D0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_NEXTSTAGE_OFFSET UNITYSDK_OFFSET(0x9645080)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_SELECTEDWEAPON_OFFSET UNITYSDK_OFFSET(0x96468F0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_SHOULDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x9646050)
#define RPG_CLIENT_EVOLVEBUILDSTAGE_SET_SHOWNEWRECORDMARK_OFFSET UNITYSDK_OFFSET(0x9646010)
#define RPG_CLIENT_EVOLVEBUILDSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x963E6E0)
#define RPG_CLIENT_EVOLVEBUILDSTAGE__ISINPROGRESS_OFFSET UNITYSDK_OFFSET(0x9646510)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildStage_TypeDefinitionIndex = 51854;

	class EvolveBuildStage : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveBuildStageRow* _Row; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _Periods_k__BackingField; // 0x18
		::RPG::Client::EvolveBuildStage* _NextStage_k__BackingField; // 0x20
		::RPG::Client::EvolveBuildCollectionGear* _SelectedWeapon; // 0x28
		::System::Collections::Generic::List_1<::Class_1_942D40AEEDD1812F*>* _SortedRanks; // 0x30
		::System::UInt32 _HighScore_k__BackingField; // 0x38
		::System::Boolean _ShouldPlayUnlockAnim_k__BackingField; // 0x3C
		::System::Boolean _HasNoRandomBonus_k__BackingField; // 0x3D
		::System::Boolean _ShowNewRecordMark_k__BackingField; // 0x3E

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
