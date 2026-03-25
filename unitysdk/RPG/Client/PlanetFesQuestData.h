#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_46.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesQuestType.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_1B4761DC11CFA219;
namespace RPG::GameCore { class FinishWayRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESQUESTDATA_GET_ACHIEVEMENTLEVEL_OFFSET UNITYSDK_OFFSET(0x9FC37F0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0x9FC3290)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_DESCRIPTIONSTR_OFFSET UNITYSDK_OFFSET(0x9FC4D70)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9FC5D30)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_DYNAMICTARGETAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x9FC3760)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_DYNAMICTARGETPROFITRATE_OFFSET UNITYSDK_OFFSET(0x9FC3740)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_FINISHBUSINESSDAY_OFFSET UNITYSDK_OFFSET(0x9FC3700)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_FINISHWAYROW_OFFSET UNITYSDK_OFFSET(0x9FC37A0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9FC5D70)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_ISACHIEVEMENTVISIBLE_OFFSET UNITYSDK_OFFSET(0x9FC3D80)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_ISCLOSE_OFFSET UNITYSDK_OFFSET(0x9FC37C0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_ISDOING_OFFSET UNITYSDK_OFFSET(0x9FC37E0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x9FC37D0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_ISLASTACHIEVEMENTLEVEL_OFFSET UNITYSDK_OFFSET(0x9FC39B0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_NAMESTR_OFFSET UNITYSDK_OFFSET(0x9FC3E10)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9FC5D10)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_OVERRIDEREWARDID_OFFSET UNITYSDK_OFFSET(0x9FC3780)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_PREVACHIEVEMENTQUESTDATA_OFFSET UNITYSDK_OFFSET(0x9FC3B70)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_PROGRESSRATIO_OFFSET UNITYSDK_OFFSET(0x9FC32B0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0x9FC3270)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_QUESTTYPE_OFFSET UNITYSDK_OFFSET(0x9FC5CD0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_REWARDITEMLIST_OFFSET UNITYSDK_OFFSET(0x9FC5CF0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x9FC3720)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_TASKTIPS_OFFSET UNITYSDK_OFFSET(0x9FC5D50)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x9FC3690)
#define RPG_CLIENT_PLANETFESQUESTDATA_SETTASKOVERRIDEREWARDID_OFFSET UNITYSDK_OFFSET(0x9FB7080)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0x9FC32A0)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9FC5D40)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_DYNAMICTARGETAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x9FC3770)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_DYNAMICTARGETPROFITRATE_OFFSET UNITYSDK_OFFSET(0x9FC3750)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_FINISHBUSINESSDAY_OFFSET UNITYSDK_OFFSET(0x9FC3710)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_FINISHWAYROW_OFFSET UNITYSDK_OFFSET(0x9FC37B0)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9FC5D80)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9FC5D20)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_OVERRIDEREWARDID_OFFSET UNITYSDK_OFFSET(0x9FC3790)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_QUESTID_OFFSET UNITYSDK_OFFSET(0x9FC3280)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_QUESTTYPE_OFFSET UNITYSDK_OFFSET(0x9FC5CE0)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_REWARDITEMLIST_OFFSET UNITYSDK_OFFSET(0x9FC5D00)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_STATE_OFFSET UNITYSDK_OFFSET(0x9FC3730)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_TASKTIPS_OFFSET UNITYSDK_OFFSET(0x9FC5D60)
#define RPG_CLIENT_PLANETFESQUESTDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9FB7490)
#define RPG_CLIENT_PLANETFESQUESTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FB6DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesQuestData_TypeDefinitionIndex = 54220;

	class PlanetFesQuestData : public ::System::Object
	{
	public:
		::System::Numerics::BigInteger _DynamicTargetProfitRate_k__BackingField; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x20
		::RPG::GameCore::FinishWayRow* _FinishWayRow_k__BackingField; // 0x28
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* _RewardItemList_k__BackingField; // 0x30
		::RPG::Client::TextID _Name_k__BackingField; // 0x38
		::System::UInt32 _CurProgress_k__BackingField; // 0x48
		::System::UInt32 _OverrideRewardID_k__BackingField; // 0x4C
		::RPG::GameCore::PlanetFesQuestType _QuestType_k__BackingField; // 0x50
		::System::UInt32 _FinishBusinessDay_k__BackingField; // 0x54
		::RPG::Client::TextID _Description_k__BackingField; // 0x58
		::RPG::Client::TextID _TaskTips_k__BackingField; // 0x68
		::System::UInt32 _QuestID_k__BackingField; // 0x78
		::System::UInt32 _DynamicTargetAvatarLevel_k__BackingField; // 0x7C
		::Enum_3_DB663931210BBC27_46 _State_k__BackingField; // 0x80

		::System::Void _ctor(::System::UInt32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA__CTOR_OFFSET))(this, questID);
		}

		::System::Void Sync(::Class_1_1B4761DC11CFA219* quest)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1B4761DC11CFA219*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SYNC_OFFSET))(this, quest);
		}

		::System::Void SetTaskOverrideRewardID(::System::UInt32 rewardID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SETTASKOVERRIDEREWARDID_OFFSET))(this, rewardID);
		}

		::System::UInt32 get_QuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_QUESTID_OFFSET))(this);
		}

		::System::Void set_QuestID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_QUESTID_OFFSET))(this, value);
		}

		::System::UInt32 get_CurProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_CURPROGRESS_OFFSET))(this);
		}

		::System::Void set_CurProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_CURPROGRESS_OFFSET))(this, value);
		}

		::System::Single get_ProgressRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_PROGRESSRATIO_OFFSET))(this);
		}

		::System::UInt32 get_FinishBusinessDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_FINISHBUSINESSDAY_OFFSET))(this);
		}

		::System::Void set_FinishBusinessDay(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_FINISHBUSINESSDAY_OFFSET))(this, value);
		}

		::Enum_3_DB663931210BBC27_46 get_State()
		{
			return ((::Enum_3_DB663931210BBC27_46(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::Enum_3_DB663931210BBC27_46 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_46))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_STATE_OFFSET))(this, value);
		}

		::System::Numerics::BigInteger get_DynamicTargetProfitRate()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_DYNAMICTARGETPROFITRATE_OFFSET))(this);
		}

		::System::Void set_DynamicTargetProfitRate(::System::Numerics::BigInteger value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_DYNAMICTARGETPROFITRATE_OFFSET))(this, value);
		}

		::System::UInt32 get_DynamicTargetAvatarLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_DYNAMICTARGETAVATARLEVEL_OFFSET))(this);
		}

		::System::Void set_DynamicTargetAvatarLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_DYNAMICTARGETAVATARLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_OverrideRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_OVERRIDEREWARDID_OFFSET))(this);
		}

		::System::Void set_OverrideRewardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_OVERRIDEREWARDID_OFFSET))(this, value);
		}

		::RPG::GameCore::FinishWayRow* get_FinishWayRow()
		{
			return ((::RPG::GameCore::FinishWayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_FINISHWAYROW_OFFSET))(this);
		}

		::System::Void set_FinishWayRow(::RPG::GameCore::FinishWayRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FinishWayRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_FINISHWAYROW_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_IsClose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_ISCLOSE_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_ISFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsDoing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_ISDOING_OFFSET))(this);
		}

		::System::UInt32 get_AchievementLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_ACHIEVEMENTLEVEL_OFFSET))(this);
		}

		::System::Boolean get_IsLastAchievementLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_ISLASTACHIEVEMENTLEVEL_OFFSET))(this);
		}

		::RPG::Client::PlanetFesQuestData* get_PrevAchievementQuestData()
		{
			return ((::RPG::Client::PlanetFesQuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_PREVACHIEVEMENTQUESTDATA_OFFSET))(this);
		}

		::System::Boolean get_IsAchievementVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_ISACHIEVEMENTVISIBLE_OFFSET))(this);
		}

		::System::String* get_NameStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_NAMESTR_OFFSET))(this);
		}

		::System::String* get_DescriptionStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_DESCRIPTIONSTR_OFFSET))(this);
		}

		::RPG::GameCore::PlanetFesQuestType get_QuestType()
		{
			return ((::RPG::GameCore::PlanetFesQuestType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_QUESTTYPE_OFFSET))(this);
		}

		::System::Void set_QuestType(::RPG::GameCore::PlanetFesQuestType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesQuestType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_QUESTTYPE_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_RewardItemList()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_REWARDITEMLIST_OFFSET))(this);
		}

		::System::Void set_RewardItemList(::Il2CppArray<::RPG::GameCore::ItemConfig*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_REWARDITEMLIST_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_NAME_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Description()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_DESCRIPTION_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_TaskTips()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_TASKTIPS_OFFSET))(this);
		}

		::System::Void set_TaskTips(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_TASKTIPS_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_ICONPATH_OFFSET))(this, value);
		}
	};
}
