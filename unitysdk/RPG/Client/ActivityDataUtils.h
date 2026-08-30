#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityPanelData; }
namespace RPG::Client { class ActivityRewardItem; }
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYDATAUTILS_GETACTIVITYDISPLAYARRAYBYITEMCONFIGS_OFFSET UNITYSDK_OFFSET(0xC4DE650)
#define RPG_CLIENT_ACTIVITYDATAUTILS_GETSORTEDDISPLAYITEMLIST_OFFSET UNITYSDK_OFFSET(0xC4DE800)
#define RPG_CLIENT_ACTIVITYDATAUTILS_ISSHOWDAILYGOTOCLICKREDDOTTODAY_1_OFFSET UNITYSDK_OFFSET(0xC4DE930)
#define RPG_CLIENT_ACTIVITYDATAUTILS_ISSHOWDAILYGOTOCLICKREDDOTTODAY_OFFSET UNITYSDK_OFFSET(0xC4DE890)
#define RPG_CLIENT_ACTIVITYDATAUTILS_ISSHOWEARLYACCESSCLICKREDDOTTODAY_OFFSET UNITYSDK_OFFSET(0xC4DEFB0)
#define RPG_CLIENT_ACTIVITYDATAUTILS_UPDATEDAILYGOTOCLICKREDDOT_1_OFFSET UNITYSDK_OFFSET(0xC4DECB0)
#define RPG_CLIENT_ACTIVITYDATAUTILS_UPDATEDAILYGOTOCLICKREDDOT_OFFSET UNITYSDK_OFFSET(0xC4DEC10)
#define RPG_CLIENT_ACTIVITYDATAUTILS_UPDATEDAILYTABCLICKREDDOT_OFFSET UNITYSDK_OFFSET(0xC4DF210)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityDataUtils_TypeDefinitionIndex = 61676;

	class ActivityDataUtils : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::Client::ActivityRewardItem*>* GetActivityDisplayArrayByItemConfigs(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::Il2CppArray<::RPG::Client::ActivityRewardItem*>*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATAUTILS_GETACTIVITYDISPLAYARRAYBYITEMCONFIGS_OFFSET))(a1);
		}

		static ::Il2CppArray<::RPG::Client::ActivityRewardItem*>* GetSortedDisplayItemList(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::Il2CppArray<::RPG::Client::ActivityRewardItem*>*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATAUTILS_GETSORTEDDISPLAYITEMLIST_OFFSET))(a1);
		}

		static ::System::Boolean IsShowDailyGotoClickRedDotToday(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATAUTILS_ISSHOWDAILYGOTOCLICKREDDOTTODAY_OFFSET))(a1);
		}

		static ::System::Boolean IsShowDailyGotoClickRedDotToday_1(::RPG::Client::ActivityPanelData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATAUTILS_ISSHOWDAILYGOTOCLICKREDDOTTODAY_1_OFFSET))(a1);
		}

		static ::System::Void UpdateDailyGotoClickRedDot(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATAUTILS_UPDATEDAILYGOTOCLICKREDDOT_OFFSET))(a1);
		}

		static ::System::Void UpdateDailyGotoClickRedDot_1(::RPG::Client::ActivityPanelData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATAUTILS_UPDATEDAILYGOTOCLICKREDDOT_1_OFFSET))(a1);
		}

		static ::System::Boolean IsShowEarlyAccessClickRedDotToday(::RPG::Client::ActivityPanelData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATAUTILS_ISSHOWEARLYACCESSCLICKREDDOTTODAY_OFFSET))(a1);
		}

		static ::System::Void UpdateDailyTabClickRedDot(::RPG::Client::ActivityPanelData* a1)
		{
			return ((::System::Void(*)(::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYDATAUTILS_UPDATEDAILYTABCLICKREDDOT_OFFSET))(a1);
		}
	};
}
