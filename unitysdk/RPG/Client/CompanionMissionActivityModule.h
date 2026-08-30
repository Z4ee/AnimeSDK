#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class CompanionMissionActivityBannerData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE_GET_BANNERDATALIST_OFFSET UNITYSDK_OFFSET(0x1A285C80)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1A2847F0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE_SET_BANNERDATALIST_OFFSET UNITYSDK_OFFSET(0x1A285C90)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A284AB0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A285CA0)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__INITBANNERDATALIST_OFFSET UNITYSDK_OFFSET(0x1A284890)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__ONSCHEDULECONFIGREFRESH_OFFSET UNITYSDK_OFFSET(0x1A284B80)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__ONUISCHEDULEENDS_OFFSET UNITYSDK_OFFSET(0x1A285C20)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__ONUISCHEDULESTARTS_OFFSET UNITYSDK_OFFSET(0x1A285970)
#define RPG_CLIENT_COMPANIONMISSIONACTIVITYMODULE__TRYCLEARREDDOTDATA_OFFSET UNITYSDK_OFFSET(0x1A285170)

namespace RPG::Client
{
	inline static constexpr unsigned int CompanionMissionActivityModule_TypeDefinitionIndex = 63595;

	class CompanionMissionActivityModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ScheduleTask*>* _ScheduleTaskContainer; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::CompanionMissionActivityBannerData*>* _BannerDataList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _WaitStartBannerID; // 0x20

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
	};
}
