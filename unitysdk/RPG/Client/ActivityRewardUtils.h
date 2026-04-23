#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityRewardUtils_MultiIDCheckerFunc; }
namespace RPG::Client { class ActivityRewardUtils_QuestCheckerFunc; }
namespace RPG::Client { class IActivityQuestRewardData; }
namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class ActivityQuestRewardConfigRow; }
namespace RPG::GameCore { class ActivityQuestRewardDataRow; }
namespace RPG::GameCore { class ActivityQuestRewardTabRow; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYREWARDUTILS_CREATECOMMONACTIVITYQUESTREWARDDATA_OFFSET UNITYSDK_OFFSET(0x9C577B0)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTDATA_OFFSET UNITYSDK_OFFSET(0x9C57700)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTIDSBYREWARDCONFIGID_OFFSET UNITYSDK_OFFSET(0x9C58450)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTIDSBYREWARDCONFIGROW_OFFSET UNITYSDK_OFFSET(0x9C584B0)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTIDSBYTABGROUPID_OFFSET UNITYSDK_OFFSET(0x9C58600)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTIDSBYTABGROUPROW_OFFSET UNITYSDK_OFFSET(0x9C58670)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTIDSBYTABID_OFFSET UNITYSDK_OFFSET(0x9C587C0)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTIDSBYTABROW_OFFSET UNITYSDK_OFFSET(0x9C58830)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_ISACTIVITYREWARDSHOWREDDOT_1_OFFSET UNITYSDK_OFFSET(0x9C57890)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_ISACTIVITYREWARDSHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x9C3B080)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_ISALLACTIVITYREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9C57FF0)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_ISANYACTIVITYREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9C58260)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_ISTABGROUPSHOWREDDOT_1_OFFSET UNITYSDK_OFFSET(0x9C57AB0)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_ISTABGROUPSHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x9C57A50)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_ISTABSHOWREDDOT_1_OFFSET UNITYSDK_OFFSET(0x9C57C00)
#define RPG_CLIENT_ACTIVITYREWARDUTILS_ISTABSHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x9C57BA0)
#define RPG_CLIENT_ACTIVITYREWARDUTILS__CHECKMULTIIDAND_OFFSET UNITYSDK_OFFSET(0x9C58EE0)
#define RPG_CLIENT_ACTIVITYREWARDUTILS__CHECKMULTIIDOR_OFFSET UNITYSDK_OFFSET(0x9C58F90)
#define RPG_CLIENT_ACTIVITYREWARDUTILS__ISACTIVITYREWARDQUESTPASS_OFFSET UNITYSDK_OFFSET(0x9C57D80)
#define RPG_CLIENT_ACTIVITYREWARDUTILS__ISQUESTREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9C58210)
#define RPG_CLIENT_ACTIVITYREWARDUTILS__ISQUESTSHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x9C57CF0)
#define RPG_CLIENT_ACTIVITYREWARDUTILS__ISTABGROUPQUESTPASS_OFFSET UNITYSDK_OFFSET(0x9C57E50)
#define RPG_CLIENT_ACTIVITYREWARDUTILS__ISTABQUESTPASS_OFFSET UNITYSDK_OFFSET(0x9C57F20)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRewardUtils_TypeDefinitionIndex = 56946;

	class ActivityRewardUtils : public ::System::Object
	{
	public:
		static ::RPG::Client::QuestData* GetQuestData(::System::UInt32 questID)
		{
			return ((::RPG::Client::QuestData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTDATA_OFFSET))(questID);
		}

		static ::RPG::Client::IActivityQuestRewardData* CreateCommonActivityQuestRewardData(::System::UInt32 activityRewardID)
		{
			return ((::RPG::Client::IActivityQuestRewardData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_CREATECOMMONACTIVITYQUESTREWARDDATA_OFFSET))(activityRewardID);
		}

		static ::System::Boolean IsActivityRewardShowRedDot(::System::UInt32 activityRewardID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_ISACTIVITYREWARDSHOWREDDOT_OFFSET))(activityRewardID);
		}

		static ::System::Boolean IsTabGroupShowRedDot(::System::UInt32 tabGroupID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_ISTABGROUPSHOWREDDOT_OFFSET))(tabGroupID);
		}

		static ::System::Boolean IsTabShowRedDot(::System::UInt32 tabID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_ISTABSHOWREDDOT_OFFSET))(tabID);
		}

		static ::System::Boolean IsActivityRewardShowRedDot_1(::RPG::GameCore::ActivityQuestRewardConfigRow* activityRewardRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ActivityQuestRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_ISACTIVITYREWARDSHOWREDDOT_1_OFFSET))(activityRewardRow);
		}

		static ::System::Boolean IsTabGroupShowRedDot_1(::RPG::GameCore::ActivityQuestRewardTabRow* tabGroupRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ActivityQuestRewardTabRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_ISTABGROUPSHOWREDDOT_1_OFFSET))(tabGroupRow);
		}

		static ::System::Boolean IsTabShowRedDot_1(::RPG::GameCore::ActivityQuestRewardDataRow* tabRow)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ActivityQuestRewardDataRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_ISTABSHOWREDDOT_1_OFFSET))(tabRow);
		}

		static ::System::Boolean _IsQuestShowRedDot(::RPG::Client::QuestData* questData)
		{
			return ((::System::Boolean(*)(::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS__ISQUESTSHOWREDDOT_OFFSET))(questData);
		}

		static ::System::Boolean IsAllActivityRewardTaken(::System::UInt32 activityRewardID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_ISALLACTIVITYREWARDTAKEN_OFFSET))(activityRewardID);
		}

		static ::System::Boolean IsAnyActivityRewardTaken(::System::UInt32 activityRewardID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_ISANYACTIVITYREWARDTAKEN_OFFSET))(activityRewardID);
		}

		static ::System::Boolean _IsQuestRewardTaken(::RPG::Client::QuestData* questData)
		{
			return ((::System::Boolean(*)(::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS__ISQUESTREWARDTAKEN_OFFSET))(questData);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetQuestIDsByRewardConfigID(::System::UInt32 configID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTIDSBYREWARDCONFIGID_OFFSET))(configID);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetQuestIDsByTabGroupID(::System::UInt32 tabGroupID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTIDSBYTABGROUPID_OFFSET))(tabGroupID);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetQuestIDsByTabID(::System::UInt32 tabID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTIDSBYTABID_OFFSET))(tabID);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetQuestIDsByRewardConfigRow(::RPG::GameCore::ActivityQuestRewardConfigRow* configRow)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::RPG::GameCore::ActivityQuestRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTIDSBYREWARDCONFIGROW_OFFSET))(configRow);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetQuestIDsByTabGroupRow(::RPG::GameCore::ActivityQuestRewardTabRow* tabGroupRow, ::System::Collections::Generic::List_1<::System::UInt32>* createdList)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::RPG::GameCore::ActivityQuestRewardTabRow*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTIDSBYTABGROUPROW_OFFSET))(tabGroupRow, createdList);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetQuestIDsByTabRow(::RPG::GameCore::ActivityQuestRewardDataRow* tabRow, ::System::Collections::Generic::List_1<::System::UInt32>* createdList)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::RPG::GameCore::ActivityQuestRewardDataRow*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS_GETQUESTIDSBYTABROW_OFFSET))(tabRow, createdList);
		}

		static ::System::Boolean _IsActivityRewardQuestPass(::RPG::GameCore::ActivityQuestRewardConfigRow* activityRewardRow, ::RPG::Client::ActivityRewardUtils_MultiIDCheckerFunc* multiChecker, ::RPG::Client::ActivityRewardUtils_QuestCheckerFunc* questChecker)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ActivityQuestRewardConfigRow*, ::RPG::Client::ActivityRewardUtils_MultiIDCheckerFunc*, ::RPG::Client::ActivityRewardUtils_QuestCheckerFunc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS__ISACTIVITYREWARDQUESTPASS_OFFSET))(activityRewardRow, multiChecker, questChecker);
		}

		static ::System::Boolean _IsTabGroupQuestPass(::RPG::GameCore::ActivityQuestRewardTabRow* tabGroupRow, ::RPG::Client::ActivityRewardUtils_MultiIDCheckerFunc* multiChecker, ::RPG::Client::ActivityRewardUtils_QuestCheckerFunc* questChecker)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ActivityQuestRewardTabRow*, ::RPG::Client::ActivityRewardUtils_MultiIDCheckerFunc*, ::RPG::Client::ActivityRewardUtils_QuestCheckerFunc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS__ISTABGROUPQUESTPASS_OFFSET))(tabGroupRow, multiChecker, questChecker);
		}

		static ::System::Boolean _IsTabQuestPass(::RPG::GameCore::ActivityQuestRewardDataRow* tabRow, ::RPG::Client::ActivityRewardUtils_MultiIDCheckerFunc* multiChecker, ::RPG::Client::ActivityRewardUtils_QuestCheckerFunc* questChecker)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ActivityQuestRewardDataRow*, ::RPG::Client::ActivityRewardUtils_MultiIDCheckerFunc*, ::RPG::Client::ActivityRewardUtils_QuestCheckerFunc*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS__ISTABQUESTPASS_OFFSET))(tabRow, multiChecker, questChecker);
		}

		static ::System::Boolean _CheckMultiIDAnd(::Il2CppArray<::System::UInt32>* arr, ::System::Func_2<::System::UInt32, ::System::Boolean>* checker)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::UInt32>*, ::System::Func_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS__CHECKMULTIIDAND_OFFSET))(arr, checker);
		}

		static ::System::Boolean _CheckMultiIDOr(::Il2CppArray<::System::UInt32>* arr, ::System::Func_2<::System::UInt32, ::System::Boolean>* checker)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::UInt32>*, ::System::Func_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDUTILS__CHECKMULTIIDOR_OFFSET))(arr, checker);
		}
	};
}
