#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/StatusViewData.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenIncidentOption; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWOPTIONSPARAM_GETOPTION_OFFSET UNITYSDK_OFFSET(0x9AECEB0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWOPTIONSPARAM_GET_DIALOGID_OFFSET UNITYSDK_OFFSET(0x9AECE50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWOPTIONSPARAM_GET_FIRSTOPTION_OFFSET UNITYSDK_OFFSET(0x9AECE60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWOPTIONSPARAM_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9AECE40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWOPTIONSPARAM_GET_SECONDOPTION_OFFSET UNITYSDK_OFFSET(0x9AECE70)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWOPTIONSPARAM_GET_STATUSLIST_OFFSET UNITYSDK_OFFSET(0x9AECE80)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWOPTIONSPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9AECE90)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenIncidentShowOptionsParam_TypeDefinitionIndex = 69608;

	class ActivityHipplenIncidentShowOptionsParam : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* _FirstOption_k__BackingField; // 0x10
		::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* _SecondOption_k__BackingField; // 0x18
		::System::String* _ImagePath_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*>* _Options; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::StatusViewData>* _StatusList_k__BackingField; // 0x30
		::System::UInt32 _DialogID_k__BackingField; // 0x38

		::System::Void _ctor(::System::String* imagePath, ::System::UInt32 dialogID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::StatusViewData>* statusList, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*>* options)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::StatusViewData>*, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWOPTIONSPARAM__CTOR_OFFSET))(this, imagePath, dialogID, statusList, options);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWOPTIONSPARAM_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::UInt32 get_DialogID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWOPTIONSPARAM_GET_DIALOGID_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* get_FirstOption()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWOPTIONSPARAM_GET_FIRSTOPTION_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* get_SecondOption()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWOPTIONSPARAM_GET_SECONDOPTION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::StatusViewData>* get_StatusList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::StatusViewData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWOPTIONSPARAM_GET_STATUSLIST_OFFSET))(this);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* GetOption(::System::Int32 index)
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWOPTIONSPARAM_GETOPTION_OFFSET))(this, index);
		}
	};
}
