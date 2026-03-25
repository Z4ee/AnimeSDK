#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class CompanionMissionActivityBannerData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE_GET_BANNERDATALIST_OFFSET UNITYSDK_OFFSET(0x9410B50)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x940FAB0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE_SET_BANNERDATALIST_OFFSET UNITYSDK_OFFSET(0x9410B60)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x940FCE0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9410B70)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__INITBANNERDATALIST_OFFSET UNITYSDK_OFFSET(0x940FBA0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__ONSCHEDULECONFIGREFRESH_OFFSET UNITYSDK_OFFSET(0x940FD90)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__ONUISCHEDULEENDS_OFFSET UNITYSDK_OFFSET(0x9410AF0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__ONUISCHEDULESTARTS_OFFSET UNITYSDK_OFFSET(0x9410880)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__TRYCLEARREDDOTDATA_OFFSET UNITYSDK_OFFSET(0x9410260)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9410BC0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9410C50)

namespace RPG::Client
{
	inline static constexpr unsigned int CompanionMissionActivityModule_TypeDefinitionIndex = 51590;

	class CompanionMissionActivityModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _WaitStartBannerID; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::CompanionMissionActivityBannerData*>* _BannerDataList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ScheduleTask*>* _ScheduleTaskContainer; // 0x20

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

		::System::Void _OnScheduleConfigRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__ONSCHEDULECONFIGREFRESH_OFFSET))(this, arg);
		}

		::System::Void _OnUIScheduleStarts(::RPG::Client::ScheduleData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__ONUISCHEDULESTARTS_OFFSET))(this, data);
		}

		::System::Void _OnUIScheduleEnds(::RPG::Client::ScheduleData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__ONUISCHEDULEENDS_OFFSET))(this, data);
		}

		::System::Void _TryClearRedDotData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__TRYCLEARREDDOTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CompanionMissionActivityBannerData*>* get_BannerDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CompanionMissionActivityBannerData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE_GET_BANNERDATALIST_OFFSET))(this);
		}

		::System::Void set_BannerDataList(::System::Collections::Generic::List_1<::RPG::Client::CompanionMissionActivityBannerData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::CompanionMissionActivityBannerData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE_SET_BANNERDATALIST_OFFSET))(this, value);
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
