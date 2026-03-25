#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_0590E1F8F275BA30;
namespace RPG::Client { class CumulativeConsumptionActivity; }
namespace RPG::Client { class ScheduleData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE_CHECKACTIVITYISENABLED_OFFSET UNITYSDK_OFFSET(0x9432EE0)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE_CHECKCANSHOWBYSHOPTYPE_OFFSET UNITYSDK_OFFSET(0x94341E0)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE_GETACTIVITY_OFFSET UNITYSDK_OFFSET(0x9433F90)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE_GETSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x94340E0)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE_GET_ACTIVITYIDFORSHOP_OFFSET UNITYSDK_OFFSET(0x9433890)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9433940)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9433B70)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE__CLEARDISABLEDACTIVITYCACHE_OFFSET UNITYSDK_OFFSET(0x9433AE0)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9434380)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE__ONGETRECHARGEBENEFITINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9433C50)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE__ONSYNCRECHARGEBENEFITINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9433D70)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE__ONTAKERECHARGEBENEFITREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x9433E00)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x94344C0)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9434550)

namespace RPG::Client
{
	inline static constexpr unsigned int CumulativeConsumptionModule_TypeDefinitionIndex = 51595;

	class CumulativeConsumptionModule : public ::RPG::Client::BaseModule
	{
	public:
		::Class_1_0590E1F8F275BA30* _ServerAgent; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _DisabledActivityIDs; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CumulativeConsumptionActivity*>* _ConsumptionActivities; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ActivityIDForShop()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE_GET_ACTIVITYIDFORSHOP_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetRechargeBenefitInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE__ONGETRECHARGEBENEFITINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSyncRechargeBenefitInfoScNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE__ONSYNCRECHARGEBENEFITINFOSCNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnTakeRechargeBenefitRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE__ONTAKERECHARGEBENEFITREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::RPG::Client::CumulativeConsumptionActivity* GetActivity(::System::UInt32 id)
		{
			return ((::RPG::Client::CumulativeConsumptionActivity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE_GETACTIVITY_OFFSET))(this, id);
		}

		::System::Boolean CheckActivityIsEnabled(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE_CHECKACTIVITYISENABLED_OFFSET))(this, id);
		}

		::RPG::Client::ScheduleData* GetScheduleData(::System::UInt32 id)
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE_GETSCHEDULEDATA_OFFSET))(this, id);
		}

		::System::Boolean CheckCanShowByShopType(::System::UInt32 targetShopType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE_CHECKCANSHOWBYSHOPTYPE_OFFSET))(this, targetShopType);
		}

		::System::Void _ClearDisabledActivityCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE__CLEARDISABLEDACTIVITYCACHE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
