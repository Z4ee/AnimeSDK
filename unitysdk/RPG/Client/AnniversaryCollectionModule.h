#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/Anniversary2NDPanelEnum.h"

namespace RPG::Client { class AnniversaryCollectionPanelData; }
namespace RPG::Client { class AnniversaryCollectionRedDotFilter; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90CB6F0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_GET_PANELDATADICT_OFFSET UNITYSDK_OFFSET(0x90CC040)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_GET_REDDOTFILTER_OFFSET UNITYSDK_OFFSET(0x90CC020)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x90CB430)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_ISANNIVERSARYACTIVITYOPEN_OFFSET UNITYSDK_OFFSET(0x90CA930)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_SET_PANELDATADICT_OFFSET UNITYSDK_OFFSET(0x90CC050)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_SET_REDDOTFILTER_OFFSET UNITYSDK_OFFSET(0x90CC030)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x90CB820)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x90CB7B0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x90CC060)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__INITANNIVERSARYPHASESCHEDULE_OFFSET UNITYSDK_OFFSET(0x90CAB10)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__INITDATA_OFFSET UNITYSDK_OFFSET(0x90CB4C0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__ONACTIVITYENDED_OFFSET UNITYSDK_OFFSET(0x90CB3D0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__ONACTIVITYOPENED_OFFSET UNITYSDK_OFFSET(0x90CB370)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__ONSCHEDULECONFIGREFRESH_OFFSET UNITYSDK_OFFSET(0x90CBD70)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__ONSETREDPOINTSTATUSSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x90CB930)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__REMOVEALLSCHEDULE_OFFSET UNITYSDK_OFFSET(0x90CACB0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__TRYADDSCHEDULE_OFFSET UNITYSDK_OFFSET(0x90CB010)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90CC140)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x90CC0B0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x90CC1B0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x90CC150)

namespace RPG::Client
{
	inline static constexpr unsigned int AnniversaryCollectionModule_TypeDefinitionIndex = 50698;

	class AnniversaryCollectionModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ScheduleTask*>* _WaitOpenTasks; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::Anniversary2NDPanelEnum, ::RPG::Client::AnniversaryCollectionPanelData*>* _PanelDataDict_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ScheduleTask*>* _WaitEndTask; // 0x20
		::RPG::Client::AnniversaryCollectionRedDotFilter* _RedDotFilter_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _InitAnniversaryPhaseSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__INITANNIVERSARYPHASESCHEDULE_OFFSET))(this);
		}

		::System::Void _TryAddSchedule(::System::UInt32 activityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__TRYADDSCHEDULE_OFFSET))(this, activityID);
		}

		::System::Void _RemoveAllSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__REMOVEALLSCHEDULE_OFFSET))(this);
		}

		::System::Void _OnActivityOpened(::RPG::Client::ScheduleData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__ONACTIVITYOPENED_OFFSET))(this, data);
		}

		::System::Void _OnActivityEnded(::RPG::Client::ScheduleData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__ONACTIVITYENDED_OFFSET))(this, data);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Boolean IsAnniversaryActivityOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_ISANNIVERSARYACTIVITYOPEN_OFFSET))(this);
		}

		::System::Void _InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__INITDATA_OFFSET))(this);
		}

		::System::Void _OnSetRedPointStatusScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__ONSETREDPOINTSTATUSSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnScheduleConfigRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE__ONSCHEDULECONFIGREFRESH_OFFSET))(this, arg);
		}

		::RPG::Client::AnniversaryCollectionRedDotFilter* get_RedDotFilter()
		{
			return ((::RPG::Client::AnniversaryCollectionRedDotFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_GET_REDDOTFILTER_OFFSET))(this);
		}

		::System::Void set_RedDotFilter(::RPG::Client::AnniversaryCollectionRedDotFilter* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnniversaryCollectionRedDotFilter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_SET_REDDOTFILTER_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::Anniversary2NDPanelEnum, ::RPG::Client::AnniversaryCollectionPanelData*>* get_PanelDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::Anniversary2NDPanelEnum, ::RPG::Client::AnniversaryCollectionPanelData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_GET_PANELDATADICT_OFFSET))(this);
		}

		::System::Void set_PanelDataDict(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::Anniversary2NDPanelEnum, ::RPG::Client::AnniversaryCollectionPanelData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::Anniversary2NDPanelEnum, ::RPG::Client::AnniversaryCollectionPanelData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE_SET_PANELDATADICT_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
