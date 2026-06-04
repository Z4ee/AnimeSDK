#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_EFF6ABE3B36522D9;
namespace Proto { class ItemList; }
namespace RPG::Client { class ActiveActivityData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYACTIVEMODULE_GETACTIVEACTIVITYDATABYACTIVITYID_OFFSET UNITYSDK_OFFSET(0xB081DD0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB081C90)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB082350)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB082480)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE_SENDACTIVITYDATAREQUEST_OFFSET UNITYSDK_OFFSET(0xB081CF0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE_SENDTAKEREWARDREQUEST_OFFSET UNITYSDK_OFFSET(0xB082700)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB0824D0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB0831D0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__NOTIFYACTIVITYREWARD_OFFSET UNITYSDK_OFFSET(0xB082F80)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__ONACTIVEACTIVITYDATACHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB083150)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__ONGETACTIVEACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0xB0827C0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__ONTAKEACTIVEACTIVITYREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xB082DE0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__SYNCACTIVEACTIVITYDATALIST_OFFSET UNITYSDK_OFFSET(0xB082840)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__SYNCACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xB082E60)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB083220)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB0832A0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB083300)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityActiveModule_TypeDefinitionIndex = 57381;

	class ActivityActiveModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActiveActivityData*>* _ActiveActivityDataList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void SendActivityDataRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE_SENDACTIVITYDATAREQUEST_OFFSET))(this);
		}

		::System::Void SendTakeRewardRequest(::RPG::Client::ActiveActivityData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActiveActivityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE_SENDTAKEREWARDREQUEST_OFFSET))(this, a1);
		}

		::RPG::Client::ActiveActivityData* GetActiveActivityDataByActivityID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActiveActivityData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE_GETACTIVEACTIVITYDATABYACTIVITYID_OFFSET))(this, a1);
		}

		::System::Void _OnGetActiveActivityDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE__ONGETACTIVEACTIVITYDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncActiveActivityDataList(::System::Collections::Generic::IEnumerable_1<::Class_1_EFF6ABE3B36522D9*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_EFF6ABE3B36522D9*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE__SYNCACTIVEACTIVITYDATALIST_OFFSET))(this, a1);
		}

		::System::Void _OnTakeActiveActivityRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE__ONTAKEACTIVEACTIVITYREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _NotifyActivityReward(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE__NOTIFYACTIVITYREWARD_OFFSET))(this, a1);
		}

		::System::Void _OnActiveActivityDataChangeScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE__ONACTIVEACTIVITYDATACHANGESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncActivityData(::Class_1_EFF6ABE3B36522D9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EFF6ABE3B36522D9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE__SYNCACTIVITYDATA_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityActiveModule* get_Instance()
		{
			return ((::RPG::Client::ActivityActiveModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE_GET_INSTANCE_OFFSET))();
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
