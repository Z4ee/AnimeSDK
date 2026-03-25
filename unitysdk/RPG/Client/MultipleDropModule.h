#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/MultipleDropTypeConfig.h"

class Class_1_FA4F4A67B1C04320_599;
namespace RPG::Client { class MultipleDropData; }
namespace RPG::Client { class MultipleDropUsedData; }
namespace RPG::Client { class ScheduleData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MULTIPLEDROPMODULE_GETMULTIPLEDROPDATABYID_OFFSET UNITYSDK_OFFSET(0x9DAE320)
#define RPG_CLIENT_MULTIPLEDROPMODULE_GET_MULTIPLEDROPDICBYID_OFFSET UNITYSDK_OFFSET(0x9DAF720)
#define RPG_CLIENT_MULTIPLEDROPMODULE_GET_MULTIPLEDROPDICBYTYPE_OFFSET UNITYSDK_OFFSET(0x9DAF710)
#define RPG_CLIENT_MULTIPLEDROPMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9DAEED0)
#define RPG_CLIENT_MULTIPLEDROPMODULE__ADDMULTIPLEDROPDATA_OFFSET UNITYSDK_OFFSET(0x9DB08C0)
#define RPG_CLIENT_MULTIPLEDROPMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DAF570)
#define RPG_CLIENT_MULTIPLEDROPMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DAF450)
#define RPG_CLIENT_MULTIPLEDROPMODULE__CLEARDICS_OFFSET UNITYSDK_OFFSET(0x9DAF9F0)
#define RPG_CLIENT_MULTIPLEDROPMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9DB1770)
#define RPG_CLIENT_MULTIPLEDROPMODULE__ONACTIVITYREFRESH_OFFSET UNITYSDK_OFFSET(0x9DB1440)
#define RPG_CLIENT_MULTIPLEDROPMODULE__ONGETMULTIPLEDROPINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9DAF730)
#define RPG_CLIENT_MULTIPLEDROPMODULE__ONGETPLAYERRETURNMULTIDROPINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9DB1180)
#define RPG_CLIENT_MULTIPLEDROPMODULE__ONMULTIPLEDROPINFONOTIFY_OFFSET UNITYSDK_OFFSET(0x9DB0600)
#define RPG_CLIENT_MULTIPLEDROPMODULE__ONMULTIPLEDROPINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9DB0CE0)
#define RPG_CLIENT_MULTIPLEDROPMODULE__ONPLAYERDAILYREFRESH_OFFSET UNITYSDK_OFFSET(0x9DB1490)
#define RPG_CLIENT_MULTIPLEDROPMODULE__ONSCHEDULECONFIGREFRESH_OFFSET UNITYSDK_OFFSET(0x9DB1220)
#define RPG_CLIENT_MULTIPLEDROPMODULE__ONSCHEDULESTART_OFFSET UNITYSDK_OFFSET(0x9DB15A0)
#define RPG_CLIENT_MULTIPLEDROPMODULE__REGISTERSCHEDULECALLBACK_OFFSET UNITYSDK_OFFSET(0x9DAF1C0)
#define RPG_CLIENT_MULTIPLEDROPMODULE__SYNCGAMEPLAYMULTIDROPINFO_OFFSET UNITYSDK_OFFSET(0x9DAFBE0)
#define RPG_CLIENT_MULTIPLEDROPMODULE__SYNCMULTIPLEDROPDATA_OFFSET UNITYSDK_OFFSET(0x9DAFB00)
#define RPG_CLIENT_MULTIPLEDROPMODULE__SYNCSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x9DB1270)
#define RPG_CLIENT_MULTIPLEDROPMODULE__TRYREFRESHACTIVITYPANELREDDOT_OFFSET UNITYSDK_OFFSET(0x9DB0040)
#define RPG_CLIENT_MULTIPLEDROPMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9DB1790)
#define RPG_CLIENT_MULTIPLEDROPMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DB1880)
#define RPG_CLIENT_MULTIPLEDROPMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DB1820)

namespace RPG::Client
{
	inline static constexpr unsigned int MultipleDropModule_TypeDefinitionIndex = 53941;

	class MultipleDropModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MultipleDropTypeConfig, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::MultipleDropData*>*>*>* _MultipleDropDicByType; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MultipleDropUsedData*>* LastBattleMultipleDropUsedDataList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MultipleDropData*>* _MultipleDropDicByID; // 0x20
		::System::Boolean _ActivityFirstStart; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::MultipleDropData* GetMultipleDropDataByID(::System::UInt32 ID)
		{
			return ((::RPG::Client::MultipleDropData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE_GETMULTIPLEDROPDATABYID_OFFSET))(this, ID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MultipleDropTypeConfig, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::MultipleDropData*>*>*>* get_MultipleDropDicByType()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MultipleDropTypeConfig, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::MultipleDropData*>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE_GET_MULTIPLEDROPDICBYTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MultipleDropData*>* get_MultipleDropDicByID()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MultipleDropData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE_GET_MULTIPLEDROPDICBYID_OFFSET))(this);
		}

		::System::Void _OnGetMultipleDropInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__ONGETMULTIPLEDROPINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMultipleDropInfoNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__ONMULTIPLEDROPINFONOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMultipleDropInfoScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__ONMULTIPLEDROPINFOSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetPlayerReturnMultiDropInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__ONGETPLAYERRETURNMULTIDROPINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SyncGamePlayMultiDropInfo(::System::Collections::Generic::IEnumerable_1<::Class_1_FA4F4A67B1C04320_599*>* infoList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_FA4F4A67B1C04320_599*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__SYNCGAMEPLAYMULTIDROPINFO_OFFSET))(this, infoList);
		}

		::System::Void _OnScheduleConfigRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__ONSCHEDULECONFIGREFRESH_OFFSET))(this, arg);
		}

		::System::Void _OnActivityRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__ONACTIVITYREFRESH_OFFSET))(this, arg);
		}

		::System::Void _OnPlayerDailyRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__ONPLAYERDAILYREFRESH_OFFSET))(this, arg);
		}

		::System::Void _TryRefreshActivityPanelReddot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__TRYREFRESHACTIVITYPANELREDDOT_OFFSET))(this);
		}

		::System::Void _RegisterScheduleCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__REGISTERSCHEDULECALLBACK_OFFSET))(this);
		}

		::System::Void _OnScheduleStart(::RPG::Client::ScheduleData* scheduleData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__ONSCHEDULESTART_OFFSET))(this, scheduleData);
		}

		::System::Void _SyncMultipleDropData(::System::UInt32 id, ::System::UInt32 remainTimes)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__SYNCMULTIPLEDROPDATA_OFFSET))(this, id, remainTimes);
		}

		::System::Void _SyncScheduleData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__SYNCSCHEDULEDATA_OFFSET))(this);
		}

		::System::Void _ClearDics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__CLEARDICS_OFFSET))(this);
		}

		::System::Void _AddMultipleDropData(::System::UInt32 id, ::System::UInt32 remainTimes)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE__ADDMULTIPLEDROPDATA_OFFSET))(this, id, remainTimes);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLEDROPMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
