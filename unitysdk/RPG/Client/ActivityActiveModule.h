#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_0A1329B6B19F70B0;
namespace Proto { class ItemList; }
namespace RPG::Client { class ActiveActivityData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYACTIVEMODULE_GETACTIVEACTIVITYDATABYACTIVITYID_OFFSET UNITYSDK_OFFSET(0x8ED0120)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x8ECFFE0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x8ED06B0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x8ED07C0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE_SENDACTIVITYDATAREQUEST_OFFSET UNITYSDK_OFFSET(0x8ED0040)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE_SENDTAKEREWARDREQUEST_OFFSET UNITYSDK_OFFSET(0x8ED08F0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8ED0810)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x8ED1280)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__NOTIFYACTIVITYREWARD_OFFSET UNITYSDK_OFFSET(0x8ED10B0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__ONACTIVEACTIVITYDATACHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8ED1200)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__ONGETACTIVEACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x8ED09B0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__ONTAKEACTIVEACTIVITYREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x8ED0F30)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__SYNCACTIVEACTIVITYDATALIST_OFFSET UNITYSDK_OFFSET(0x8ED0A30)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__SYNCACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x8ED0FB0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x8ED12D0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x8ED1360)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8ED13C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityActiveModule_TypeDefinitionIndex = 49782;

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

		::System::Void SendTakeRewardRequest(::RPG::Client::ActiveActivityData* activeActivityData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActiveActivityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE_SENDTAKEREWARDREQUEST_OFFSET))(this, activeActivityData);
		}

		::RPG::Client::ActiveActivityData* GetActiveActivityDataByActivityID(::System::UInt32 activityID)
		{
			return ((::RPG::Client::ActiveActivityData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE_GETACTIVEACTIVITYDATABYACTIVITYID_OFFSET))(this, activityID);
		}

		::System::Void _OnGetActiveActivityDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE__ONGETACTIVEACTIVITYDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SyncActiveActivityDataList(::System::Collections::Generic::IEnumerable_1<::Class_1_0A1329B6B19F70B0*>* protoDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_0A1329B6B19F70B0*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE__SYNCACTIVEACTIVITYDATALIST_OFFSET))(this, protoDataList);
		}

		::System::Void _OnTakeActiveActivityRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE__ONTAKEACTIVEACTIVITYREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _NotifyActivityReward(::Proto::ItemList* itemList)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE__NOTIFYACTIVITYREWARD_OFFSET))(this, itemList);
		}

		::System::Void _OnActiveActivityDataChangeScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE__ONACTIVEACTIVITYDATACHANGESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SyncActivityData(::Class_1_0A1329B6B19F70B0* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A1329B6B19F70B0*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE__SYNCACTIVITYDATA_OFFSET))(this, proto);
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
