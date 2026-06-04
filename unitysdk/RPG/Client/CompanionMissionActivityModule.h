#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class CompanionMissionActivityBannerData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE_GET_BANNERDATALIST_OFFSET UNITYSDK_OFFSET(0xB6FCC40)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB6FB910)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE_SET_BANNERDATALIST_OFFSET UNITYSDK_OFFSET(0xB6FCC50)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB6FBC20)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB6FCC60)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__INITBANNERDATALIST_OFFSET UNITYSDK_OFFSET(0xB6FBA00)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__ONSCHEDULECONFIGREFRESH_OFFSET UNITYSDK_OFFSET(0xB6FBCF0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__ONUISCHEDULEENDS_OFFSET UNITYSDK_OFFSET(0xB6FCBE0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__ONUISCHEDULESTARTS_OFFSET UNITYSDK_OFFSET(0xB6FC930)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__TRYCLEARREDDOTDATA_OFFSET UNITYSDK_OFFSET(0xB6FC2D0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB6FCCB0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB6FCD30)

namespace RPG::Client
{
	inline static constexpr unsigned int CompanionMissionActivityModule_TypeDefinitionIndex = 59458;

	class CompanionMissionActivityModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _WaitStartBannerID; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ScheduleTask*>* _ScheduleTaskContainer; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::CompanionMissionActivityBannerData*>* _BannerDataList_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE_INIT_OFFSET))(this);
		}

		::System::Void _InitBannerDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__INITBANNERDATALIST_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnScheduleConfigRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__ONSCHEDULECONFIGREFRESH_OFFSET))(this, a1);
		}

		::System::Void _OnUIScheduleStarts(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__ONUISCHEDULESTARTS_OFFSET))(this, a1);
		}

		::System::Void _OnUIScheduleEnds(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__ONUISCHEDULEENDS_OFFSET))(this, a1);
		}

		::System::Void _TryClearRedDotData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__TRYCLEARREDDOTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CompanionMissionActivityBannerData*>* get_BannerDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CompanionMissionActivityBannerData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE_GET_BANNERDATALIST_OFFSET))(this);
		}

		::System::Void set_BannerDataList(::System::Collections::Generic::List_1<::RPG::Client::CompanionMissionActivityBannerData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::CompanionMissionActivityBannerData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE_SET_BANNERDATALIST_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
