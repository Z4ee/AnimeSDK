#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class ActivityAetherDivideData; }
namespace RPG::Client { class ActivityAetherDivideModuleRedDotFilter; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_GET_ACTIVITYAETHERDIVIDEMODULEREDDOTFILTER_OFFSET UNITYSDK_OFFSET(0x8ED34B0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_GET_AETHERDIVIDEACTIVITYDATALIST_OFFSET UNITYSDK_OFFSET(0x8ED3430)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_GET_AETHERDIVIDEACTIVITYTYPEGROUPDICT_OFFSET UNITYSDK_OFFSET(0x8ED3450)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_GET_COMPLETEDPROGRESS_OFFSET UNITYSDK_OFFSET(0x8ED3470)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x8ED3490)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x8ED2410)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_SET_ACTIVITYAETHERDIVIDEMODULEREDDOTFILTER_OFFSET UNITYSDK_OFFSET(0x8ED34C0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_SET_AETHERDIVIDEACTIVITYDATALIST_OFFSET UNITYSDK_OFFSET(0x8ED3440)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_SET_AETHERDIVIDEACTIVITYTYPEGROUPDICT_OFFSET UNITYSDK_OFFSET(0x8ED3460)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_SET_COMPLETEDPROGRESS_OFFSET UNITYSDK_OFFSET(0x8ED3480)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_SET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x8ED34A0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8ED24D0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8ED2490)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__CONVERTACTIVITYLISTTOTYPEGROUPDICT_OFFSET UNITYSDK_OFFSET(0x8ED2C50)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x8ED34D0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__INITDATA_OFFSET UNITYSDK_OFFSET(0x8ED27B0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__ONACTIVITYREFRESHALL_OFFSET UNITYSDK_OFFSET(0x8ED25F0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__ONQUESTUPDATED_OFFSET UNITYSDK_OFFSET(0x8ED2F70)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__ONSCHEDULESTART_OFFSET UNITYSDK_OFFSET(0x8ED33E0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__REFRESHPROGRESSVALUE_OFFSET UNITYSDK_OFFSET(0x8ED2E70)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x8ED34F0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8ED35E0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8ED3580)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityAetherDivideModule_TypeDefinitionIndex = 49789;

	class ActivityAetherDivideModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::ScheduleTask* _ScheduleTask; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityAetherDivideData*>* _AetherDivideActivityDataList_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ActivityAetherDivideData*>*>* _AetherDivideActivityTypeGroupDict_k__BackingField; // 0x20
		::RPG::Client::ActivityAetherDivideModuleRedDotFilter* _ActivityAetherDivideModuleRedDotFilter_k__BackingField; // 0x28
		::System::UInt32 _TotalProgress_k__BackingField; // 0x30
		::System::Boolean _IsAvailable; // 0x34
		::System::UInt32 _CompletedProgress_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnActivityRefreshAll(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__ONACTIVITYREFRESHALL_OFFSET))(this, arg);
		}

		::System::Void _InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__INITDATA_OFFSET))(this);
		}

		::System::Void _OnQuestUpdated(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__ONQUESTUPDATED_OFFSET))(this, arg);
		}

		::System::Void _ConvertActivityListToTypeGroupDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__CONVERTACTIVITYLISTTOTYPEGROUPDICT_OFFSET))(this);
		}

		::System::Void _RefreshProgressValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__REFRESHPROGRESSVALUE_OFFSET))(this);
		}

		::System::Void _OnScheduleStart(::RPG::Client::ScheduleData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__ONSCHEDULESTART_OFFSET))(this, data);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityAetherDivideData*>* get_AetherDivideActivityDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityAetherDivideData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_GET_AETHERDIVIDEACTIVITYDATALIST_OFFSET))(this);
		}

		::System::Void set_AetherDivideActivityDataList(::System::Collections::Generic::List_1<::RPG::Client::ActivityAetherDivideData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityAetherDivideData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_SET_AETHERDIVIDEACTIVITYDATALIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ActivityAetherDivideData*>*>* get_AetherDivideActivityTypeGroupDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ActivityAetherDivideData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_GET_AETHERDIVIDEACTIVITYTYPEGROUPDICT_OFFSET))(this);
		}

		::System::Void set_AetherDivideActivityTypeGroupDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ActivityAetherDivideData*>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ActivityAetherDivideData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_SET_AETHERDIVIDEACTIVITYTYPEGROUPDICT_OFFSET))(this, value);
		}

		::System::UInt32 get_CompletedProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_GET_COMPLETEDPROGRESS_OFFSET))(this);
		}

		::System::Void set_CompletedProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_SET_COMPLETEDPROGRESS_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::System::Void set_TotalProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_SET_TOTALPROGRESS_OFFSET))(this, value);
		}

		::RPG::Client::ActivityAetherDivideModuleRedDotFilter* get_ActivityAetherDivideModuleRedDotFilter()
		{
			return ((::RPG::Client::ActivityAetherDivideModuleRedDotFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_GET_ACTIVITYAETHERDIVIDEMODULEREDDOTFILTER_OFFSET))(this);
		}

		::System::Void set_ActivityAetherDivideModuleRedDotFilter(::RPG::Client::ActivityAetherDivideModuleRedDotFilter* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAetherDivideModuleRedDotFilter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_SET_ACTIVITYAETHERDIVIDEMODULEREDDOTFILTER_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
