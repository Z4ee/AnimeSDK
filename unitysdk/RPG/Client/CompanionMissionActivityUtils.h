#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CompanionMissionActivityBannerData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_COMPANIONMISSIONACTIVITYUTILS_GETINSCHEDULEBANNERDATALIST_OFFSET UNITYSDK_OFFSET(0x94110E0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYUTILS_GETINSCHEDULEBANNERIDLIST_OFFSET UNITYSDK_OFFSET(0x9410CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int CompanionMissionActivityUtils_TypeDefinitionIndex = 51591;

	class CompanionMissionActivityUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>* GetInScheduleBannerIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYUTILS_GETINSCHEDULEBANNERIDLIST_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::CompanionMissionActivityBannerData*>* GetInScheduleBannerDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CompanionMissionActivityBannerData*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYUTILS_GETINSCHEDULEBANNERDATALIST_OFFSET))();
		}
	};
}
