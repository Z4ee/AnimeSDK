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

#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_GET_ACTIVITYAETHERDIVIDEMODULEREDDOTFILTER_OFFSET UNITYSDK_OFFSET(0xB085590)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_GET_AETHERDIVIDEACTIVITYDATALIST_OFFSET UNITYSDK_OFFSET(0xB085510)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_GET_AETHERDIVIDEACTIVITYTYPEGROUPDICT_OFFSET UNITYSDK_OFFSET(0xB085530)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_GET_COMPLETEDPROGRESS_OFFSET UNITYSDK_OFFSET(0xB085550)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0xB085570)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB084350)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_SET_ACTIVITYAETHERDIVIDEMODULEREDDOTFILTER_OFFSET UNITYSDK_OFFSET(0xB0855A0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_SET_AETHERDIVIDEACTIVITYDATALIST_OFFSET UNITYSDK_OFFSET(0xB085520)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_SET_AETHERDIVIDEACTIVITYTYPEGROUPDICT_OFFSET UNITYSDK_OFFSET(0xB085540)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_SET_COMPLETEDPROGRESS_OFFSET UNITYSDK_OFFSET(0xB085560)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_SET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0xB085580)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB084410)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB0843D0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__CONVERTACTIVITYLISTTOTYPEGROUPDICT_OFFSET UNITYSDK_OFFSET(0xB084C90)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB0855B0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__INITDATA_OFFSET UNITYSDK_OFFSET(0xB084740)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__ONACTIVITYREFRESHALL_OFFSET UNITYSDK_OFFSET(0xB084570)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__ONQUESTUPDATED_OFFSET UNITYSDK_OFFSET(0xB0850E0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__ONSCHEDULESTART_OFFSET UNITYSDK_OFFSET(0xB0854C0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__REFRESHPROGRESSVALUE_OFFSET UNITYSDK_OFFSET(0xB084FC0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB0855D0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB0856B0)
#define RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB085650)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityAetherDivideModule_TypeDefinitionIndex = 57388;

	class ActivityAetherDivideModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityAetherDivideData*>* _AetherDivideActivityDataList_k__BackingField; // 0x10
		::RPG::Client::ScheduleTask* _ScheduleTask; // 0x18
		::RPG::Client::ActivityAetherDivideModuleRedDotFilter* _ActivityAetherDivideModuleRedDotFilter_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ActivityAetherDivideData*>*>* _AetherDivideActivityTypeGroupDict_k__BackingField; // 0x28
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

		::System::Void _OnActivityRefreshAll(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__ONACTIVITYREFRESHALL_OFFSET))(this, a1);
		}

		::System::Void _InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__INITDATA_OFFSET))(this);
		}

		::System::Void _OnQuestUpdated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__ONQUESTUPDATED_OFFSET))(this, a1);
		}

		::System::Void _ConvertActivityListToTypeGroupDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__CONVERTACTIVITYLISTTOTYPEGROUPDICT_OFFSET))(this);
		}

		::System::Void _RefreshProgressValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__REFRESHPROGRESSVALUE_OFFSET))(this);
		}

		::System::Void _OnScheduleStart(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE__ONSCHEDULESTART_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityAetherDivideData*>* get_AetherDivideActivityDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityAetherDivideData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_GET_AETHERDIVIDEACTIVITYDATALIST_OFFSET))(this);
		}

		::System::Void set_AetherDivideActivityDataList(::System::Collections::Generic::List_1<::RPG::Client::ActivityAetherDivideData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityAetherDivideData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_SET_AETHERDIVIDEACTIVITYDATALIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ActivityAetherDivideData*>*>* get_AetherDivideActivityTypeGroupDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ActivityAetherDivideData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_GET_AETHERDIVIDEACTIVITYTYPEGROUPDICT_OFFSET))(this);
		}

		::System::Void set_AetherDivideActivityTypeGroupDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ActivityAetherDivideData*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ActivityAetherDivideData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_SET_AETHERDIVIDEACTIVITYTYPEGROUPDICT_OFFSET))(this, a1);
		}

		::System::UInt32 get_CompletedProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_GET_COMPLETEDPROGRESS_OFFSET))(this);
		}

		::System::Void set_CompletedProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_SET_COMPLETEDPROGRESS_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::System::Void set_TotalProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_SET_TOTALPROGRESS_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityAetherDivideModuleRedDotFilter* get_ActivityAetherDivideModuleRedDotFilter()
		{
			return ((::RPG::Client::ActivityAetherDivideModuleRedDotFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_GET_ACTIVITYAETHERDIVIDEMODULEREDDOTFILTER_OFFSET))(this);
		}

		::System::Void set_ActivityAetherDivideModuleRedDotFilter(::RPG::Client::ActivityAetherDivideModuleRedDotFilter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAetherDivideModuleRedDotFilter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYAETHERDIVIDEMODULE_SET_ACTIVITYAETHERDIVIDEMODULEREDDOTFILTER_OFFSET))(this, a1);
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
