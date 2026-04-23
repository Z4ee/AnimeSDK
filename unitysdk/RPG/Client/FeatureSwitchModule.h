#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A843FEC42C53F62F.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_075C34D03AFA1215_8;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FEATURESWITCHMODULE_CHECKOUTFITSHIELDED_OFFSET UNITYSDK_OFFSET(0xA36A950)
#define RPG_CLIENT_FEATURESWITCHMODULE_CHECKOUTFITSKINSHIELDED_OFFSET UNITYSDK_OFFSET(0xA36A9B0)
#define RPG_CLIENT_FEATURESWITCHMODULE_CHECKSHOPGOODSHIELDED_OFFSET UNITYSDK_OFFSET(0xA36BBB0)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_CLOSEDACTIVITYPANELIDS_OFFSET UNITYSDK_OFFSET(0xA369F30)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_CLOSEDACTIVITYSCHEDULEIDS_OFFSET UNITYSDK_OFFSET(0xA369A00)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_DISABLEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0xA36A440)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_ISALLPREAVATARDISABLING_OFFSET UNITYSDK_OFFSET(0xA36A350)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_ISCLOSEALLSHOP_OFFSET UNITYSDK_OFFSET(0xA36BCF0)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_SHIELDEDSHOPGOODSIDDIC_OFFSET UNITYSDK_OFFSET(0xA36BD30)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_SHIELDEDSHOPIDS_OFFSET UNITYSDK_OFFSET(0xA36BD10)
#define RPG_CLIENT_FEATURESWITCHMODULE_ISFEATURECLOSED_OFFSET UNITYSDK_OFFSET(0xA36A3E0)
#define RPG_CLIENT_FEATURESWITCHMODULE_ISFEATUREPARTIALCLOSED_OFFSET UNITYSDK_OFFSET(0xA36C320)
#define RPG_CLIENT_FEATURESWITCHMODULE_ISFEATUREREDDOTCLOSED_OFFSET UNITYSDK_OFFSET(0xA36C5A0)
#define RPG_CLIENT_FEATURESWITCHMODULE_ISNEWPERFORMANCESKIP_OFFSET UNITYSDK_OFFSET(0xA36AB50)
#define RPG_CLIENT_FEATURESWITCHMODULE_NEWPERFORMANCESKIPEXCLUDEIDS_OFFSET UNITYSDK_OFFSET(0xA36ABE0)
#define RPG_CLIENT_FEATURESWITCHMODULE_SET_CLOSEDACTIVITYPANELIDS_OFFSET UNITYSDK_OFFSET(0xA369F40)
#define RPG_CLIENT_FEATURESWITCHMODULE_SET_CLOSEDACTIVITYSCHEDULEIDS_OFFSET UNITYSDK_OFFSET(0xA369A10)
#define RPG_CLIENT_FEATURESWITCHMODULE_SET_DISABLEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0xA36A450)
#define RPG_CLIENT_FEATURESWITCHMODULE_SET_ISCLOSEALLSHOP_OFFSET UNITYSDK_OFFSET(0xA36BD00)
#define RPG_CLIENT_FEATURESWITCHMODULE_SET_SHIELDEDSHOPGOODSIDDIC_OFFSET UNITYSDK_OFFSET(0xA36BD40)
#define RPG_CLIENT_FEATURESWITCHMODULE_SET_SHIELDEDSHOPIDS_OFFSET UNITYSDK_OFFSET(0xA36BD20)
#define RPG_CLIENT_FEATURESWITCHMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA36BD50)
#define RPG_CLIENT_FEATURESWITCHMODULE__ADDSHIELDEDSHOPGOODID_OFFSET UNITYSDK_OFFSET(0xA36BA20)
#define RPG_CLIENT_FEATURESWITCHMODULE__ADDSHIELDEDSHOPID_OFFSET UNITYSDK_OFFSET(0xA36B9C0)
#define RPG_CLIENT_FEATURESWITCHMODULE__CHECKSHIELDEDOUTFITSCHANGED_OFFSET UNITYSDK_OFFSET(0xA36A800)
#define RPG_CLIENT_FEATURESWITCHMODULE__CLEARFEATURESWITCHSHOP_OFFSET UNITYSDK_OFFSET(0xA36B8E0)
#define RPG_CLIENT_FEATURESWITCHMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA36C750)
#define RPG_CLIENT_FEATURESWITCHMODULE__ISCLOSEDACTIVITYPANELIDSCHANGED_OFFSET UNITYSDK_OFFSET(0xA369B20)
#define RPG_CLIENT_FEATURESWITCHMODULE__ISCLOSEDACTIVITYSCHEDULEIDSCHANGED_OFFSET UNITYSDK_OFFSET(0xA3695F0)
#define RPG_CLIENT_FEATURESWITCHMODULE__ISSHIELDEDDATACHANGED_OFFSET UNITYSDK_OFFSET(0xA36B130)
#define RPG_CLIENT_FEATURESWITCHMODULE__ONUPDATEFEATURESWITCHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA36BDC0)
#define RPG_CLIENT_FEATURESWITCHMODULE__UNINITFEATURESWITCHMODULEACTIVITYPANEL_OFFSET UNITYSDK_OFFSET(0xA369A20)
#define RPG_CLIENT_FEATURESWITCHMODULE__UNINITFEATURESWITCHMODULEACTIVITY_OFFSET UNITYSDK_OFFSET(0xA3694B0)
#define RPG_CLIENT_FEATURESWITCHMODULE__UNINITFEATURESWITCHMODULESHOP_OFFSET UNITYSDK_OFFSET(0xA36AFE0)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATECLOSEDACTIVITYPANELIDS_OFFSET UNITYSDK_OFFSET(0xA369D10)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATECLOSEDACTIVITYSCHEDULEIDS_OFFSET UNITYSDK_OFFSET(0xA3697E0)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHACTIVITYPANEL_OFFSET UNITYSDK_OFFSET(0xA369AB0)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHACTIVITYSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA369540)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHAVATAROUTFIT_OFFSET UNITYSDK_OFFSET(0xA36A460)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHAVATAR_OFFSET UNITYSDK_OFFSET(0xA369F50)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA36AA10)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHSHOP_OFFSET UNITYSDK_OFFSET(0xA36B0C0)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATESHIELDEDDATA_OFFSET UNITYSDK_OFFSET(0xA36B600)
#define RPG_CLIENT_FEATURESWITCHMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA36C9D0)

namespace RPG::Client
{
	inline static constexpr unsigned int FeatureSwitchModule_TypeDefinitionIndex = 59033;

	class FeatureSwitchModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Enum_3_A843FEC42C53F62F, ::Il2CppArray<::Class_1_075C34D03AFA1215_8*>*>* _FeatureSwitchParamDict; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ShieldedOutfits; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _DisabledAvatarIDs_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _ShieldedShopIDs_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _ShieldedShopGoodsIDDic_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::Enum_3_A843FEC42C53F62F, ::System::Boolean>* _FeatureSwitchClosedDict; // 0x38
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ClosedActivityPanelIDs_k__BackingField; // 0x40
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ClosedActivityScheduleIDs_k__BackingField; // 0x48
		::System::Boolean _IsCloseAllShop_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _UnInitFeatureSwitchModuleActivity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__UNINITFEATURESWITCHMODULEACTIVITY_OFFSET))(this);
		}

		::System::Void _UpdateFeatureSwitchActivitySchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHACTIVITYSCHEDULE_OFFSET))(this);
		}

		::System::Boolean _IsClosedActivityScheduleIDsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__ISCLOSEDACTIVITYSCHEDULEIDSCHANGED_OFFSET))(this);
		}

		::System::Void _UpdateClosedActivityScheduleIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__UPDATECLOSEDACTIVITYSCHEDULEIDS_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_ClosedActivityScheduleIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_GET_CLOSEDACTIVITYSCHEDULEIDS_OFFSET))(this);
		}

		::System::Void set_ClosedActivityScheduleIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_SET_CLOSEDACTIVITYSCHEDULEIDS_OFFSET))(this, value);
		}

		::System::Void _UnInitFeatureSwitchModuleActivityPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__UNINITFEATURESWITCHMODULEACTIVITYPANEL_OFFSET))(this);
		}

		::System::Void _UpdateFeatureSwitchActivityPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHACTIVITYPANEL_OFFSET))(this);
		}

		::System::Boolean _IsClosedActivityPanelIDsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__ISCLOSEDACTIVITYPANELIDSCHANGED_OFFSET))(this);
		}

		::System::Void _UpdateClosedActivityPanelIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__UPDATECLOSEDACTIVITYPANELIDS_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_ClosedActivityPanelIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_GET_CLOSEDACTIVITYPANELIDS_OFFSET))(this);
		}

		::System::Void set_ClosedActivityPanelIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_SET_CLOSEDACTIVITYPANELIDS_OFFSET))(this, value);
		}

		::System::Void _UpdateFeatureSwitchAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHAVATAR_OFFSET))(this);
		}

		::System::Boolean get_IsAllPreAvatarDisabling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_GET_ISALLPREAVATARDISABLING_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DisabledAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_GET_DISABLEDAVATARIDS_OFFSET))(this);
		}

		::System::Void set_DisabledAvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_SET_DISABLEDAVATARIDS_OFFSET))(this, value);
		}

		::System::Void _UpdateFeatureSwitchAvatarOutfit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHAVATAROUTFIT_OFFSET))(this);
		}

		::System::Boolean _CheckShieldedOutfitsChanged(::Il2CppArray<::Class_1_075C34D03AFA1215_8*>* featureSwitchOutfitParams)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Class_1_075C34D03AFA1215_8*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__CHECKSHIELDEDOUTFITSCHANGED_OFFSET))(this, featureSwitchOutfitParams);
		}

		::System::Boolean CheckOutfitShielded(::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_CHECKOUTFITSHIELDED_OFFSET))(this, itemID);
		}

		::System::Boolean CheckOutfitSkinShielded(::System::UInt32 skinID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_CHECKOUTFITSKINSHIELDED_OFFSET))(this, skinID);
		}

		::System::Void _UpdateFeatureSwitchPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean IsNewPerformanceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_ISNEWPERFORMANCESKIP_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* NewPerformanceSkipExcludeIds()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_NEWPERFORMANCESKIPEXCLUDEIDS_OFFSET))(this);
		}

		::System::Void _UnInitFeatureSwitchModuleShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__UNINITFEATURESWITCHMODULESHOP_OFFSET))(this);
		}

		::System::Void _UpdateFeatureSwitchShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHSHOP_OFFSET))(this);
		}

		::System::Boolean _IsShieldedDataChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__ISSHIELDEDDATACHANGED_OFFSET))(this);
		}

		::System::Void _UpdateShieldedData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__UPDATESHIELDEDDATA_OFFSET))(this);
		}

		::System::Void _ClearFeatureSwitchShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__CLEARFEATURESWITCHSHOP_OFFSET))(this);
		}

		::System::Void _AddShieldedShopID(::System::UInt32 shopID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__ADDSHIELDEDSHOPID_OFFSET))(this, shopID);
		}

		::System::Void _AddShieldedShopGoodID(::System::UInt32 shopID, ::System::UInt32 goodID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__ADDSHIELDEDSHOPGOODID_OFFSET))(this, shopID, goodID);
		}

		::System::Boolean CheckShopGoodShielded(::System::UInt32 goodID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_CHECKSHOPGOODSHIELDED_OFFSET))(this, goodID);
		}

		::System::Boolean get_IsCloseAllShop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_GET_ISCLOSEALLSHOP_OFFSET))(this);
		}

		::System::Void set_IsCloseAllShop(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_SET_ISCLOSEALLSHOP_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ShieldedShopIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_GET_SHIELDEDSHOPIDS_OFFSET))(this);
		}

		::System::Void set_ShieldedShopIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_SET_SHIELDEDSHOPIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* get_ShieldedShopGoodsIDDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_GET_SHIELDEDSHOPGOODSIDDIC_OFFSET))(this);
		}

		::System::Void set_ShieldedShopGoodsIDDic(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_SET_SHIELDEDSHOPGOODSIDDIC_OFFSET))(this, value);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnUpdateFeatureSwitchScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__ONUPDATEFEATURESWITCHSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Boolean IsFeatureClosed(::Enum_3_A843FEC42C53F62F featureType)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_A843FEC42C53F62F))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_ISFEATURECLOSED_OFFSET))(this, featureType);
		}

		::System::Boolean IsFeaturePartialClosed(::Enum_3_A843FEC42C53F62F featureType, ::Il2CppArray<::System::UInt32>* args)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_A843FEC42C53F62F, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_ISFEATUREPARTIALCLOSED_OFFSET))(this, featureType, args);
		}

		::System::Boolean IsFeatureRedDotClosed(::System::UInt32 reddotID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_ISFEATUREREDDOTCLOSED_OFFSET))(this, reddotID);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
