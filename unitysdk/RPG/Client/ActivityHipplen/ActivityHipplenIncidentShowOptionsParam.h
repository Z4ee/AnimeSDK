#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/StatusViewData.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenIncidentOption; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWOPTIONSPARAM_GETOPTION_OFFSET UNITYSDK_OFFSET(0xB0D1350)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWOPTIONSPARAM_GET_DIALOGID_OFFSET UNITYSDK_OFFSET(0xB0D12F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWOPTIONSPARAM_GET_FIRSTOPTION_OFFSET UNITYSDK_OFFSET(0xB0D1300)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWOPTIONSPARAM_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xB0D12E0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWOPTIONSPARAM_GET_SECONDOPTION_OFFSET UNITYSDK_OFFSET(0xB0D1310)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWOPTIONSPARAM_GET_STATUSLIST_OFFSET UNITYSDK_OFFSET(0xB0D1320)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWOPTIONSPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB0D1330)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenIncidentShowOptionsParam_TypeDefinitionIndex = 70420;

	class ActivityHipplenIncidentShowOptionsParam : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* _SecondOption_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::StatusViewData>* _StatusList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*>* _Options; // 0x20
		::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* _FirstOption_k__BackingField; // 0x28
		::System::String* _ImagePath_k__BackingField; // 0x30
		::System::UInt32 _DialogID_k__BackingField; // 0x38

		::System::Void _ctor(::System::String* a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::StatusViewData>* a3, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::StatusViewData>*, ::System::Collections::Generic::List_1<::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWOPTIONSPARAM__CTOR_OFFSET))(this, a1, a2, a3, a4);
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

		::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* GetOption(::System::Int32 a1)
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTSHOWOPTIONSPARAM_GETOPTION_OFFSET))(this, a1);
		}
	};
}
