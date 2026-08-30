#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CompanionMissionActivityBannerData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_COMPANIONMISSIONACTIVITYUTILS_GETINSCHEDULEBANNERDATALIST_OFFSET UNITYSDK_OFFSET(0x1A2861C0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYUTILS_GETINSCHEDULEBANNERIDLIST_OFFSET UNITYSDK_OFFSET(0x1A285CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int CompanionMissionActivityUtils_TypeDefinitionIndex = 63596;

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
