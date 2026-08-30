#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ActivityQuestTimeLimitRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_CHECKHASFINISHQUEST_OFFSET UNITYSDK_OFFSET(0x1B874CF0)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_CHECKISALLQUESTAWARDGOT_OFFSET UNITYSDK_OFFSET(0x1B874EF0)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_GETACTIVITYQUESTTIMELIMITGROUPS_OFFSET UNITYSDK_OFFSET(0x1B8756E0)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_GETCLOSEQUESTCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8758F0)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_GETFINISHEDQUESTCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8757C0)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_GETGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0x1B875720)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_GETTORWARDQUESTCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8759C0)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_GETTOTALHCOINREWARD_OFFSET UNITYSDK_OFFSET(0x1B875A90)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B874910)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityQuestTimeLimitModuleData_TypeDefinitionIndex = 61988;

	class ActivityQuestTimeLimitModuleData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _QuestTimeLimitGroupID; // 0x10
		::RPG::GameCore::ActivityQuestTimeLimitRow* _Meta; // 0x18

		::System::Void _ctor(::RPG::GameCore::ActivityQuestTimeLimitRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityQuestTimeLimitRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetActivityQuestTimeLimitGroups()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_GETACTIVITYQUESTTIMELIMITGROUPS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetGroupIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_GETGROUPIDLIST_OFFSET))(this);
		}

		::System::UInt32 GetFinishedQuestCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_GETFINISHEDQUESTCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 GetCloseQuestCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_GETCLOSEQUESTCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 GetToRwardQuestCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_GETTORWARDQUESTCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 GetTotalHcoinReward(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_GETTOTALHCOINREWARD_OFFSET))(this, a1);
		}

		::System::Boolean CheckHasFinishQuest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_CHECKHASFINISHQUEST_OFFSET))(this);
		}

		::System::Boolean CheckIsAllQuestAwardGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITMODULEDATA_CHECKISALLQUESTAWARDGOT_OFFSET))(this);
		}
	};
}
