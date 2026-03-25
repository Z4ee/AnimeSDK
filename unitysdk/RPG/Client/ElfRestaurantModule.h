#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class ElfBehaviorInfo; }
namespace RPG::Client { class ElfEventInfo; }
namespace RPG::Client { class ElfFacilityInfo; }
namespace RPG::Client { class ElfFarmInfo; }
namespace RPG::Client { class ElfGame; }
namespace RPG::Client { class ElfRedDotManager; }
namespace RPG::Client { class ElfRestaurantEmployeeInfo; }
namespace RPG::Client { class ElfRestaurantInfo; }
namespace RPG::Client { class ElfRestaurantModule_TakeOutInfo; }
namespace RPG::Client { class ElfRestaurantProfileInfo; }
namespace RPG::Client { class ElfRestaurantProgressInfo; }
namespace RPG::Client { class ElfShopInfo; }
namespace System { class Object; }

#define RPG_CLIENT_ELFRESTAURANTMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95E6C70)
#define RPG_CLIENT_ELFRESTAURANTMODULE_GETDECORATORLEVEL_OFFSET UNITYSDK_OFFSET(0x95D76C0)
#define RPG_CLIENT_ELFRESTAURANTMODULE_GET_BEHAVIORINFO_OFFSET UNITYSDK_OFFSET(0x95E78F0)
#define RPG_CLIENT_ELFRESTAURANTMODULE_GET_EVENTINFO_OFFSET UNITYSDK_OFFSET(0x95E7910)
#define RPG_CLIENT_ELFRESTAURANTMODULE_GET_FARMINFO_OFFSET UNITYSDK_OFFSET(0x95E7930)
#define RPG_CLIENT_ELFRESTAURANTMODULE_GET_RESTAURANTINFO_OFFSET UNITYSDK_OFFSET(0x95E78D0)
#define RPG_CLIENT_ELFRESTAURANTMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x95E6380)
#define RPG_CLIENT_ELFRESTAURANTMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x95E6B80)
#define RPG_CLIENT_ELFRESTAURANTMODULE_SENDGETDATAREQUEST_OFFSET UNITYSDK_OFFSET(0x95E2D10)
#define RPG_CLIENT_ELFRESTAURANTMODULE_SET_BEHAVIORINFO_OFFSET UNITYSDK_OFFSET(0x95E7900)
#define RPG_CLIENT_ELFRESTAURANTMODULE_SET_EVENTINFO_OFFSET UNITYSDK_OFFSET(0x95E7920)
#define RPG_CLIENT_ELFRESTAURANTMODULE_SET_FARMINFO_OFFSET UNITYSDK_OFFSET(0x95E7940)
#define RPG_CLIENT_ELFRESTAURANTMODULE_SET_RESTAURANTINFO_OFFSET UNITYSDK_OFFSET(0x95E78E0)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x95E6AD0)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x95E2970)
#define RPG_CLIENT_ELFRESTAURANTMODULE__CANCELREQUESTSONRECONNECT_OFFSET UNITYSDK_OFFSET(0x95E2CD0)
#define RPG_CLIENT_ELFRESTAURANTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x95E7950)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONACTIVITYOPEN_OFFSET UNITYSDK_OFFSET(0x95E75F0)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTBUYFIELDSCRSP_OFFSET UNITYSDK_OFFSET(0x95E4F70)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTBUYSHOPITEMSCRSP_OFFSET UNITYSDK_OFFSET(0x95E5570)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTDATACHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0x95E38F0)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTFINISHTRADEORDERSCRSP_OFFSET UNITYSDK_OFFSET(0x95E56D0)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTHARVESTCROPSCRSP_OFFSET UNITYSDK_OFFSET(0x95E5020)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTPLANTSEEDSCRSP_OFFSET UNITYSDK_OFFSET(0x95E3680)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTRECYCLESEEDSCRSP_OFFSET UNITYSDK_OFFSET(0x95E53F0)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTTAKEVILLAGERREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x95E5C10)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTUPGRADEEMPLOYEELEVELSCRSP_OFFSET UNITYSDK_OFFSET(0x95E5B00)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTUPGRADEFACILITYLEVELSCRSP_OFFSET UNITYSDK_OFFSET(0x95E5830)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTUPGRADERECIPELEVELSCRSP_OFFSET UNITYSDK_OFFSET(0x95E5510)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDENTERELFRESTAURANTNEXTDAYSCRSP_OFFSET UNITYSDK_OFFSET(0x95E5490)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDGETELFRESTAURANTDATASCRSP_OFFSET UNITYSDK_OFFSET(0x95E2E60)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDSETELFRESTAURANTPLAYRECIPESCRSP_OFFSET UNITYSDK_OFFSET(0x95E5BC0)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDSETTLEELFRESTAURANTPLAYSCRSP_OFFSET UNITYSDK_OFFSET(0x95E5B60)
#define RPG_CLIENT_ELFRESTAURANTMODULE__ONMODULEINITREQ_OFFSET UNITYSDK_OFFSET(0x95E7310)
#define RPG_CLIENT_ELFRESTAURANTMODULE__TRYSYNCPLANTVIEW_OFFSET UNITYSDK_OFFSET(0x95E4CB0)
#define RPG_CLIENT_ELFRESTAURANTMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95E7B20)
#define RPG_CLIENT_ELFRESTAURANTMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x95E79D0)
#define RPG_CLIENT_ELFRESTAURANTMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x95E7AC0)
#define RPG_CLIENT_ELFRESTAURANTMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x95E7A60)
#define RPG_CLIENT_ELFRESTAURANTMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x95E7970)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantModule_TypeDefinitionIndex = 51704;

	class ElfRestaurantModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::ElfFarmInfo* _FarmInfo_k__BackingField; // 0x10
		::RPG::Client::ElfRestaurantModule_TakeOutInfo* TakeoutInfo; // 0x18
		::RPG::Client::ElfFacilityInfo* FacilityInfo; // 0x20
		::RPG::Client::ElfGame* Game; // 0x28
		::RPG::Client::ElfRedDotManager* RedDotManager; // 0x30
		::RPG::Client::ElfBehaviorInfo* _BehaviorInfo_k__BackingField; // 0x38
		::RPG::Client::ElfRestaurantEmployeeInfo* EmployeeInfo; // 0x40
		::RPG::Client::ElfShopInfo* ShopInfo; // 0x48
		::RPG::Client::ElfRestaurantInfo* _RestaurantInfo_k__BackingField; // 0x50
		::RPG::Client::ElfRestaurantProgressInfo* TimeInfo; // 0x58
		::RPG::Client::ElfEventInfo* _EventInfo_k__BackingField; // 0x60
		::RPG::Client::ElfRestaurantProfileInfo* ProfileInfo; // 0x68
		::System::Boolean _IsRequestingGetElfRestaurantData; // 0x70
		::System::Boolean IsMustFullRecipeSlot; // 0x71

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _CancelRequestsOnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__CANCELREQUESTSONRECONNECT_OFFSET))(this);
		}

		::System::Void SendGetDataRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_SENDGETDATAREQUEST_OFFSET))(this);
		}

		::System::Void _OnCmdGetElfRestaurantDataScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDGETELFRESTAURANTDATASCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdElfRestaurantPlantSeedScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTPLANTSEEDSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdElfRestaurantDataChangeNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTDATACHANGENOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _TrySyncPlantView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__TRYSYNCPLANTVIEW_OFFSET))(this);
		}

		::System::Void _OnCmdElfRestaurantBuyFieldScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTBUYFIELDSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdElfRestaurantHarvestCropScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTHARVESTCROPSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdElfRestaurantRecycleSeedScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTRECYCLESEEDSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdEnterElfRestaurantNextDayScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDENTERELFRESTAURANTNEXTDAYSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdElfRestaurantUpgradeRecipeLevelScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTUPGRADERECIPELEVELSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdElfRestaurantBuyShopItemScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTBUYSHOPITEMSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdElfRestaurantFinishTradeOrderScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTFINISHTRADEORDERSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdElfRestaurantUpgradeFacilityLevelScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTUPGRADEFACILITYLEVELSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdElfRestaurantUpgradeEmployeeLevelScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTUPGRADEEMPLOYEELEVELSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdSettleElfRestaurantPlayScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDSETTLEELFRESTAURANTPLAYSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdSetElfRestaurantPlayRecipeScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDSETELFRESTAURANTPLAYRECIPESCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnCmdElfRestaurantTakeVillagerRewardScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONCMDELFRESTAURANTTAKEVILLAGERREWARDSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnModuleInitReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONMODULEINITREQ_OFFSET))(this);
		}

		::System::Void _OnActivityOpen(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE__ONACTIVITYOPEN_OFFSET))(this, param);
		}

		::RPG::Client::ElfRestaurantInfo* get_RestaurantInfo()
		{
			return ((::RPG::Client::ElfRestaurantInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_GET_RESTAURANTINFO_OFFSET))(this);
		}

		::System::Void set_RestaurantInfo(::RPG::Client::ElfRestaurantInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_SET_RESTAURANTINFO_OFFSET))(this, value);
		}

		::RPG::Client::ElfBehaviorInfo* get_BehaviorInfo()
		{
			return ((::RPG::Client::ElfBehaviorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_GET_BEHAVIORINFO_OFFSET))(this);
		}

		::System::Void set_BehaviorInfo(::RPG::Client::ElfBehaviorInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfBehaviorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_SET_BEHAVIORINFO_OFFSET))(this, value);
		}

		::RPG::Client::ElfEventInfo* get_EventInfo()
		{
			return ((::RPG::Client::ElfEventInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_GET_EVENTINFO_OFFSET))(this);
		}

		::System::Void set_EventInfo(::RPG::Client::ElfEventInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfEventInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_SET_EVENTINFO_OFFSET))(this, value);
		}

		::RPG::Client::ElfFarmInfo* get_FarmInfo()
		{
			return ((::RPG::Client::ElfFarmInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_GET_FARMINFO_OFFSET))(this);
		}

		::System::Void set_FarmInfo(::RPG::Client::ElfFarmInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfFarmInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_SET_FARMINFO_OFFSET))(this, value);
		}

		::System::UInt32 GetDecoratorLevel(::System::UInt32 decoratorID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE_GETDECORATORLEVEL_OFFSET))(this, decoratorID);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
