#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace System { class Object; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC59B620)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA_GETACTIVITYQUESTTIMELIMITGROUPS_OFFSET UNITYSDK_OFFSET(0xC59B6C0)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA_GETCLOSEQUESTCOUNT_OFFSET UNITYSDK_OFFSET(0xC59B840)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA_GETFINISHEDQUESTCOUNT_OFFSET UNITYSDK_OFFSET(0xC59B710)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA_GETGOTOWORLDID_OFFSET UNITYSDK_OFFSET(0xC59BBC0)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA_GETTORWARDQUESTCOUNT_OFFSET UNITYSDK_OFFSET(0xC59B910)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA_GETTOTALHCOINREWARD_OFFSET UNITYSDK_OFFSET(0xC59B9E0)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0xC59BD60)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA_ISSHOWDAILYREDDOT_OFFSET UNITYSDK_OFFSET(0xC59C020)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA_ISSHOWGOTOBTNREDDOT_OFFSET UNITYSDK_OFFSET(0xC59C060)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0xC59BC40)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA_TRYTRACKQUESTMONSTER_OFFSET UNITYSDK_OFFSET(0xC59BF40)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA__CHECKHASFINISHQUEST_OFFSET UNITYSDK_OFFSET(0xC59C5D0)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA__CHECKISALLQUESTAWARDGOT_OFFSET UNITYSDK_OFFSET(0xC59BDC0)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC59B1A0)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA__ISCUSTOMREDDOTSHOW200_OFFSET UNITYSDK_OFFSET(0xC59C740)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA__ISCUSTOMREDDOTSHOW300_OFFSET UNITYSDK_OFFSET(0xC59C500)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA__ONINIT_OFFSET UNITYSDK_OFFSET(0xC59B3A0)
#define RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA__ONQUESTUPDATED_OFFSET UNITYSDK_OFFSET(0xC59C0A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityQuestTimeLimitData_TypeDefinitionIndex = 61585;

	class ActivityQuestTimeLimitData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_1<::System::Boolean>*>* _ReddotHandlerMap; // 0xA0
		::System::Collections::Generic::List_1<::System::UInt32>* _QuestTimeLimitGroupID; // 0xA8
		::System::UInt32 _TrackMonsterQuestID; // 0xB0

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA__CTOR_OFFSET))(this, a1);
		}

		::System::Void _OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA__ONINIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetActivityQuestTimeLimitGroups()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA_GETACTIVITYQUESTTIMELIMITGROUPS_OFFSET))(this);
		}

		::System::UInt32 GetFinishedQuestCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA_GETFINISHEDQUESTCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 GetCloseQuestCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA_GETCLOSEQUESTCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 GetToRwardQuestCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA_GETTORWARDQUESTCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 GetTotalHcoinReward(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA_GETTOTALHCOINREWARD_OFFSET))(this, a1);
		}

		::System::UInt32 GetGotoWorldID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA_GETGOTOWORLDID_OFFSET))(this, a1);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}

		::System::Void TryTrackQuestMonster(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA_TRYTRACKQUESTMONSTER_OFFSET))(this, a1);
		}

		::System::Boolean IsShowDailyRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA_ISSHOWDAILYREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowGotoBtnRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA_ISSHOWGOTOBTNREDDOT_OFFSET))(this);
		}

		::System::Void _OnQuestUpdated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA__ONQUESTUPDATED_OFFSET))(this, a1);
		}

		::System::Boolean _IsCustomRedDotShow300()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA__ISCUSTOMREDDOTSHOW300_OFFSET))(this);
		}

		::System::Boolean _IsCustomRedDotShow200()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA__ISCUSTOMREDDOTSHOW200_OFFSET))(this);
		}

		::System::Boolean _CheckHasFinishQuest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA__CHECKHASFINISHQUEST_OFFSET))(this);
		}

		::System::Boolean _CheckIsAllQuestAwardGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYQUESTTIMELIMITDATA__CHECKISALLQUESTAWARDGOT_OFFSET))(this);
		}
	};
}
