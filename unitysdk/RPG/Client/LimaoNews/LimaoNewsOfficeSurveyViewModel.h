#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_21.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsOfficeSurveyType.h"
#include "unitysdk/Sofa/BaseViewModel.h"

namespace RPG::Client::LimaoNews { class LimaoNewsLocationData; }
namespace RPG::Client::LimaoNews { class LimaoNewsModule; }
namespace RPG::Client::LimaoNews { class LimaoNewsOfficeSurveyItem; }
namespace RPG::Client::LimaoNews { class LimaoNewsOfficeSurveyTypeData; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYVIEWMODEL_FIXCOMPLETEOFFICESURVEYLIST_OFFSET UNITYSDK_OFFSET(0xD477F20)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYVIEWMODEL_GETFILTERLOCATIONDATAS_OFFSET UNITYSDK_OFFSET(0xD4779A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYVIEWMODEL_GETFILTERSTATES_OFFSET UNITYSDK_OFFSET(0xD477C40)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYVIEWMODEL_GETFILTERSURVEYTYPEDATAS_OFFSET UNITYSDK_OFFSET(0xD477770)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYVIEWMODEL_GETSHOWITEMS_OFFSET UNITYSDK_OFFSET(0xD477300)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYVIEWMODEL_GETTOTALSHOWCOUNT_OFFSET UNITYSDK_OFFSET(0xD477470)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYVIEWMODEL_GET_RECOMMENDSERVICEID_OFFSET UNITYSDK_OFFSET(0xD477F80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYVIEWMODEL_ISANYSURVEYCANSHOW_OFFSET UNITYSDK_OFFSET(0xD4773E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYVIEWMODEL_ISFINISHEDALLSURVEY_OFFSET UNITYSDK_OFFSET(0xD477380)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYVIEWMODEL_REFRESHOFFICESURVEYBYFILTER_OFFSET UNITYSDK_OFFSET(0xD477700)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYVIEWMODEL_REFRESHSELECTEDFILTER_OFFSET UNITYSDK_OFFSET(0xD4774D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xD4771D0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsOfficeSurveyViewModel_TypeDefinitionIndex = 79116;

	class LimaoNewsOfficeSurveyViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectedLocationIDs; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectedSurveyTypes; // 0x28
		::System::Collections::Generic::List_1<::Enum_3_4608E37A1B3D374A_21>* _SelectedStates; // 0x30
		::RPG::Client::LimaoNews::LimaoNewsModule* _Module; // 0x38

		::System::Void _ctor(::RPG::Client::LimaoNews::LimaoNewsModule* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsModule*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyItem*>* GetShowItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYVIEWMODEL_GETSHOWITEMS_OFFSET))(this);
		}

		::System::Boolean IsFinishedAllSurvey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYVIEWMODEL_ISFINISHEDALLSURVEY_OFFSET))(this);
		}

		::System::Boolean IsAnySurveyCanShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYVIEWMODEL_ISANYSURVEYCANSHOW_OFFSET))(this);
		}

		::System::Int32 GetTotalShowCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYVIEWMODEL_GETTOTALSHOWCOUNT_OFFSET))(this);
		}

		::System::Void RefreshSelectedFilter(::System::Collections::Generic::List_1<::RPG::GameCore::LimaoNewsOfficeSurveyType>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Collections::Generic::List_1<::Enum_3_4608E37A1B3D374A_21>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::LimaoNewsOfficeSurveyType>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::Enum_3_4608E37A1B3D374A_21>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYVIEWMODEL_REFRESHSELECTEDFILTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RefreshOfficeSurveyByFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYVIEWMODEL_REFRESHOFFICESURVEYBYFILTER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData*>* GetFilterSurveyTypeDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYVIEWMODEL_GETFILTERSURVEYTYPEDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsLocationData*>* GetFilterLocationDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsLocationData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYVIEWMODEL_GETFILTERLOCATIONDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Tuple_2<::Enum_3_4608E37A1B3D374A_21, ::RPG::Client::TextID>*>* GetFilterStates()
		{
			return ((::System::Collections::Generic::List_1<::System::Tuple_2<::Enum_3_4608E37A1B3D374A_21, ::RPG::Client::TextID>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYVIEWMODEL_GETFILTERSTATES_OFFSET))(this);
		}

		::System::Void FixCompleteOfficeSurveyList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYVIEWMODEL_FIXCOMPLETEOFFICESURVEYLIST_OFFSET))(this);
		}

		::System::UInt32 get_RecommendServiceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYVIEWMODEL_GET_RECOMMENDSERVICEID_OFFSET))(this);
		}
	};
}
