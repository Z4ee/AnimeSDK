#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_0590E1F8F275BA30;
namespace RPG::Client { class CumulativeConsumptionActivity; }
namespace RPG::Client { class ScheduleData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE_CHECKACTIVITYISENABLED_OFFSET UNITYSDK_OFFSET(0xB720490)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE_CHECKCANSHOWBYSHOPTYPE_OFFSET UNITYSDK_OFFSET(0xB721890)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE_GETACTIVITY_OFFSET UNITYSDK_OFFSET(0xB721680)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE_GETSCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xB721790)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE_GET_ACTIVITYIDFORSHOP_OFFSET UNITYSDK_OFFSET(0xB720E90)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB720F50)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB7211B0)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE__CLEARDISABLEDACTIVITYCACHE_OFFSET UNITYSDK_OFFSET(0xB721120)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB721A20)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE__ONGETRECHARGEBENEFITINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xB7213E0)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE__ONSYNCRECHARGEBENEFITINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB721500)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE__ONTAKERECHARGEBENEFITREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xB721590)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB721B60)
#define RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB721BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int CumulativeConsumptionModule_TypeDefinitionIndex = 59463;

	class CumulativeConsumptionModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _DisabledActivityIDs; // 0x10
		::Class_1_0590E1F8F275BA30* _ServerAgent; // 0x18
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

		::System::Void _OnGetRechargeBenefitInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE__ONGETRECHARGEBENEFITINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncRechargeBenefitInfoScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE__ONSYNCRECHARGEBENEFITINFOSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTakeRechargeBenefitRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE__ONTAKERECHARGEBENEFITREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::CumulativeConsumptionActivity* GetActivity(::System::UInt32 a1)
		{
			return ((::RPG::Client::CumulativeConsumptionActivity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE_GETACTIVITY_OFFSET))(this, a1);
		}

		::System::Boolean CheckActivityIsEnabled(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE_CHECKACTIVITYISENABLED_OFFSET))(this, a1);
		}

		::RPG::Client::ScheduleData* GetScheduleData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE_GETSCHEDULEDATA_OFFSET))(this, a1);
		}

		::System::Boolean CheckCanShowByShopType(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUMULATIVECONSUMPTIONMODULE_CHECKCANSHOWBYSHOPTYPE_OFFSET))(this, a1);
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
