#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_3714832A39691304_1;
namespace Proto { class ItemList; }
namespace RPG::Client { class ActiveActivityData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYACTIVEMODULE_GETACTIVEACTIVITYDATABYACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1ABC28E0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1ABC2780)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1ABC2D30)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1ABC2E10)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE_SENDACTIVITYDATAREQUEST_OFFSET UNITYSDK_OFFSET(0x1ABC2800)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE_SENDTAKEREWARDREQUEST_OFFSET UNITYSDK_OFFSET(0x1ABC3090)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1ABC2E60)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABC3D60)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__NOTIFYACTIVITYREWARD_OFFSET UNITYSDK_OFFSET(0x1ABC3B10)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__ONACTIVEACTIVITYDATACHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1ABC3CE0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__ONGETACTIVEACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1ABC31D0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__ONTAKEACTIVEACTIVITYREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1ABC3970)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__SYNCACTIVEACTIVITYDATALIST_OFFSET UNITYSDK_OFFSET(0x1ABC3250)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE__SYNCACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1ABC39F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityActiveModule_TypeDefinitionIndex = 61474;

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

		::System::Void _SyncActiveActivityDataList(::System::Collections::Generic::IEnumerable_1<::Class_1_3714832A39691304_1*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_3714832A39691304_1*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE__SYNCACTIVEACTIVITYDATALIST_OFFSET))(this, a1);
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

		::System::Void _SyncActivityData(::Class_1_3714832A39691304_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3714832A39691304_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE__SYNCACTIVITYDATA_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityActiveModule* get_Instance()
		{
			return ((::RPG::Client::ActivityActiveModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE_GET_INSTANCE_OFFSET))();
		}
	};
}
