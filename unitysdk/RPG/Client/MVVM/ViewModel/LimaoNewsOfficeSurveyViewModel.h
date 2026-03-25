#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3DE15EA7F53A0550.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_20.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsOfficeSurveyType.h"

namespace RPG::Client::MVVM::Model { class LimaoNewsLocationData; }
namespace RPG::Client::MVVM::Model { class LimaoNewsModule; }
namespace RPG::Client::MVVM::Model { class LimaoNewsOfficeSurveyItem; }
namespace RPG::Client::MVVM::Model { class LimaoNewsOfficeSurveyTypeData; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSOFFICESURVEYVIEWMODEL_FIXCOMPLETEOFFICESURVEYLIST_OFFSET UNITYSDK_OFFSET(0x9AAE320)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSOFFICESURVEYVIEWMODEL_GETFILTERLOCATIONDATAS_OFFSET UNITYSDK_OFFSET(0x9AAE050)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSOFFICESURVEYVIEWMODEL_GETFILTERSTATES_OFFSET UNITYSDK_OFFSET(0x9AAE1E0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSOFFICESURVEYVIEWMODEL_GETFILTERSURVEYTYPEDATAS_OFFSET UNITYSDK_OFFSET(0x9AADEC0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSOFFICESURVEYVIEWMODEL_GETSHOWITEMS_OFFSET UNITYSDK_OFFSET(0x9AADA00)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSOFFICESURVEYVIEWMODEL_GETTOTALSHOWCOUNT_OFFSET UNITYSDK_OFFSET(0x9AADB70)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSOFFICESURVEYVIEWMODEL_GET_RECOMMENDSERVICEID_OFFSET UNITYSDK_OFFSET(0x9AAE380)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSOFFICESURVEYVIEWMODEL_ISANYSURVEYCANSHOW_OFFSET UNITYSDK_OFFSET(0x9AADAE0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSOFFICESURVEYVIEWMODEL_ISFINISHEDALLSURVEY_OFFSET UNITYSDK_OFFSET(0x9AADA80)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSOFFICESURVEYVIEWMODEL_REFRESHOFFICESURVEYBYFILTER_OFFSET UNITYSDK_OFFSET(0x9AADE50)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSOFFICESURVEYVIEWMODEL_REFRESHSELECTEDFILTER_OFFSET UNITYSDK_OFFSET(0x9AADBD0)
#define RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSOFFICESURVEYVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x9AAD8D0)

namespace RPG::Client::MVVM::ViewModel
{
	inline static constexpr unsigned int LimaoNewsOfficeSurveyViewModel_TypeDefinitionIndex = 60945;

	class LimaoNewsOfficeSurveyViewModel : public ::Class_2_3DE15EA7F53A0550
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectedSurveyTypes; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectedLocationIDs; // 0x20
		::System::Collections::Generic::List_1<::Enum_3_4608E37A1B3D374A_20>* _SelectedStates; // 0x28
		::RPG::Client::MVVM::Model::LimaoNewsModule* _Module; // 0x30

		::System::Void _ctor(::RPG::Client::MVVM::Model::LimaoNewsModule* module)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsModule*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSOFFICESURVEYVIEWMODEL__CTOR_OFFSET))(this, module);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem*>* GetShowItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSOFFICESURVEYVIEWMODEL_GETSHOWITEMS_OFFSET))(this);
		}

		::System::Boolean IsFinishedAllSurvey()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSOFFICESURVEYVIEWMODEL_ISFINISHEDALLSURVEY_OFFSET))(this);
		}

		::System::Boolean IsAnySurveyCanShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSOFFICESURVEYVIEWMODEL_ISANYSURVEYCANSHOW_OFFSET))(this);
		}

		::System::Int32 GetTotalShowCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSOFFICESURVEYVIEWMODEL_GETTOTALSHOWCOUNT_OFFSET))(this);
		}

		::System::Void RefreshSelectedFilter(::System::Collections::Generic::List_1<::RPG::GameCore::LimaoNewsOfficeSurveyType>* surveyTypes, ::System::Collections::Generic::List_1<::System::UInt32>* locationIDs, ::System::Collections::Generic::List_1<::Enum_3_4608E37A1B3D374A_20>* states)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::LimaoNewsOfficeSurveyType>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::Enum_3_4608E37A1B3D374A_20>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSOFFICESURVEYVIEWMODEL_REFRESHSELECTEDFILTER_OFFSET))(this, surveyTypes, locationIDs, states);
		}

		::System::Void RefreshOfficeSurveyByFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSOFFICESURVEYVIEWMODEL_REFRESHOFFICESURVEYBYFILTER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData*>* GetFilterSurveyTypeDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSOFFICESURVEYVIEWMODEL_GETFILTERSURVEYTYPEDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsLocationData*>* GetFilterLocationDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsLocationData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSOFFICESURVEYVIEWMODEL_GETFILTERLOCATIONDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Tuple_2<::Enum_3_4608E37A1B3D374A_20, ::RPG::Client::TextID>*>* GetFilterStates()
		{
			return ((::System::Collections::Generic::List_1<::System::Tuple_2<::Enum_3_4608E37A1B3D374A_20, ::RPG::Client::TextID>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSOFFICESURVEYVIEWMODEL_GETFILTERSTATES_OFFSET))(this);
		}

		::System::Void FixCompleteOfficeSurveyList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSOFFICESURVEYVIEWMODEL_FIXCOMPLETEOFFICESURVEYLIST_OFFSET))(this);
		}

		::System::UInt32 get_RecommendServiceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEWMODEL_LIMAONEWSOFFICESURVEYVIEWMODEL_GET_RECOMMENDSERVICEID_OFFSET))(this);
		}
	};
}
