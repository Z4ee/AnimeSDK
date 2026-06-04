#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A843FEC42C53F62F.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_075C34D03AFA1215_8;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FEATURESWITCHMODULE_CHECKOUTFITSHIELDED_OFFSET UNITYSDK_OFFSET(0xB9BE0C0)
#define RPG_CLIENT_FEATURESWITCHMODULE_CHECKOUTFITSKINSHIELDED_OFFSET UNITYSDK_OFFSET(0xB9BE120)
#define RPG_CLIENT_FEATURESWITCHMODULE_CHECKSHOPGOODSHIELDED_OFFSET UNITYSDK_OFFSET(0xB9BF370)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_CLOSEDACTIVITYPANELIDS_OFFSET UNITYSDK_OFFSET(0xB9BD720)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_CLOSEDACTIVITYSCHEDULEIDS_OFFSET UNITYSDK_OFFSET(0xB9BD250)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_DISABLEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0xB9BDBA0)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_ISALLPREAVATARDISABLING_OFFSET UNITYSDK_OFFSET(0xB9BDB10)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_ISCLOSEALLSHOP_OFFSET UNITYSDK_OFFSET(0xB9BF530)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_SHIELDEDSHOPGOODSIDDIC_OFFSET UNITYSDK_OFFSET(0xB9BF570)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_SHIELDEDSHOPIDS_OFFSET UNITYSDK_OFFSET(0xB9BF550)
#define RPG_CLIENT_FEATURESWITCHMODULE_ISFEATURECLOSED_OFFSET UNITYSDK_OFFSET(0xB9B4430)
#define RPG_CLIENT_FEATURESWITCHMODULE_ISFEATUREPARTIALCLOSED_OFFSET UNITYSDK_OFFSET(0xB9BFBB0)
#define RPG_CLIENT_FEATURESWITCHMODULE_ISFEATUREREDDOTCLOSED_OFFSET UNITYSDK_OFFSET(0xB9BFE00)
#define RPG_CLIENT_FEATURESWITCHMODULE_ISNEWPERFORMANCESKIP_OFFSET UNITYSDK_OFFSET(0xB9BE2C0)
#define RPG_CLIENT_FEATURESWITCHMODULE_NEWPERFORMANCESKIPEXCLUDEIDS_OFFSET UNITYSDK_OFFSET(0xB9BE350)
#define RPG_CLIENT_FEATURESWITCHMODULE_SET_CLOSEDACTIVITYPANELIDS_OFFSET UNITYSDK_OFFSET(0xB9BD730)
#define RPG_CLIENT_FEATURESWITCHMODULE_SET_CLOSEDACTIVITYSCHEDULEIDS_OFFSET UNITYSDK_OFFSET(0xB9BD260)
#define RPG_CLIENT_FEATURESWITCHMODULE_SET_DISABLEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0xB9BDBB0)
#define RPG_CLIENT_FEATURESWITCHMODULE_SET_ISCLOSEALLSHOP_OFFSET UNITYSDK_OFFSET(0xB9BF540)
#define RPG_CLIENT_FEATURESWITCHMODULE_SET_SHIELDEDSHOPGOODSIDDIC_OFFSET UNITYSDK_OFFSET(0xB9BF580)
#define RPG_CLIENT_FEATURESWITCHMODULE_SET_SHIELDEDSHOPIDS_OFFSET UNITYSDK_OFFSET(0xB9BF560)
#define RPG_CLIENT_FEATURESWITCHMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB9BF590)
#define RPG_CLIENT_FEATURESWITCHMODULE__ADDSHIELDEDSHOPGOODID_OFFSET UNITYSDK_OFFSET(0xB9BF1D0)
#define RPG_CLIENT_FEATURESWITCHMODULE__ADDSHIELDEDSHOPID_OFFSET UNITYSDK_OFFSET(0xB9BF140)
#define RPG_CLIENT_FEATURESWITCHMODULE__CHECKSHIELDEDOUTFITSCHANGED_OFFSET UNITYSDK_OFFSET(0xB9BDF40)
#define RPG_CLIENT_FEATURESWITCHMODULE__CLEARFEATURESWITCHSHOP_OFFSET UNITYSDK_OFFSET(0xB9BF090)
#define RPG_CLIENT_FEATURESWITCHMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB9BFFA0)
#define RPG_CLIENT_FEATURESWITCHMODULE__ISCLOSEDACTIVITYPANELIDSCHANGED_OFFSET UNITYSDK_OFFSET(0xB9BD370)
#define RPG_CLIENT_FEATURESWITCHMODULE__ISCLOSEDACTIVITYSCHEDULEIDSCHANGED_OFFSET UNITYSDK_OFFSET(0xB9BCEA0)
#define RPG_CLIENT_FEATURESWITCHMODULE__ISSHIELDEDDATACHANGED_OFFSET UNITYSDK_OFFSET(0xB9BE860)
#define RPG_CLIENT_FEATURESWITCHMODULE__ONUPDATEFEATURESWITCHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB9BF670)
#define RPG_CLIENT_FEATURESWITCHMODULE__UNINITFEATURESWITCHMODULEACTIVITYPANEL_OFFSET UNITYSDK_OFFSET(0xB9BD270)
#define RPG_CLIENT_FEATURESWITCHMODULE__UNINITFEATURESWITCHMODULEACTIVITY_OFFSET UNITYSDK_OFFSET(0xB9BCD60)
#define RPG_CLIENT_FEATURESWITCHMODULE__UNINITFEATURESWITCHMODULESHOP_OFFSET UNITYSDK_OFFSET(0xB9BE740)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATECLOSEDACTIVITYPANELIDS_OFFSET UNITYSDK_OFFSET(0xB9BD520)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATECLOSEDACTIVITYSCHEDULEIDS_OFFSET UNITYSDK_OFFSET(0xB9BD050)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHACTIVITYPANEL_OFFSET UNITYSDK_OFFSET(0xB9BD300)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHACTIVITYSCHEDULE_OFFSET UNITYSDK_OFFSET(0xB9BCDF0)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHAVATAROUTFIT_OFFSET UNITYSDK_OFFSET(0xB9BDBC0)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHAVATAR_OFFSET UNITYSDK_OFFSET(0xB9BD740)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB9BE180)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHSHOP_OFFSET UNITYSDK_OFFSET(0xB9BE7F0)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATESHIELDEDDATA_OFFSET UNITYSDK_OFFSET(0xB9BEDB0)
#define RPG_CLIENT_FEATURESWITCHMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB9C0220)

namespace RPG::Client
{
	inline static constexpr unsigned int FeatureSwitchModule_TypeDefinitionIndex = 59963;

	class FeatureSwitchModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ShieldedOutfits; // 0x10
		::System::Collections::Generic::Dictionary_2<::Enum_3_A843FEC42C53F62F, ::System::Boolean>* _FeatureSwitchClosedDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::Enum_3_A843FEC42C53F62F, ::Il2CppArray<::Class_1_075C34D03AFA1215_8*>*>* _FeatureSwitchParamDict; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ClosedActivityPanelIDs_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _ShieldedShopIDs_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _DisabledAvatarIDs_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _ShieldedShopGoodsIDDic_k__BackingField; // 0x40
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

		::System::Void set_ClosedActivityScheduleIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_SET_CLOSEDACTIVITYSCHEDULEIDS_OFFSET))(this, a1);
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

		::System::Void set_ClosedActivityPanelIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_SET_CLOSEDACTIVITYPANELIDS_OFFSET))(this, a1);
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

		::System::Void set_DisabledAvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_SET_DISABLEDAVATARIDS_OFFSET))(this, a1);
		}

		::System::Void _UpdateFeatureSwitchAvatarOutfit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHAVATAROUTFIT_OFFSET))(this);
		}

		::System::Boolean _CheckShieldedOutfitsChanged(::Il2CppArray<::Class_1_075C34D03AFA1215_8*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Class_1_075C34D03AFA1215_8*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__CHECKSHIELDEDOUTFITSCHANGED_OFFSET))(this, a1);
		}

		::System::Boolean CheckOutfitShielded(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_CHECKOUTFITSHIELDED_OFFSET))(this, a1);
		}

		::System::Boolean CheckOutfitSkinShielded(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_CHECKOUTFITSKINSHIELDED_OFFSET))(this, a1);
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

		::System::Void _AddShieldedShopID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__ADDSHIELDEDSHOPID_OFFSET))(this, a1);
		}

		::System::Void _AddShieldedShopGoodID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__ADDSHIELDEDSHOPGOODID_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckShopGoodShielded(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_CHECKSHOPGOODSHIELDED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCloseAllShop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_GET_ISCLOSEALLSHOP_OFFSET))(this);
		}

		::System::Void set_IsCloseAllShop(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_SET_ISCLOSEALLSHOP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ShieldedShopIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_GET_SHIELDEDSHOPIDS_OFFSET))(this);
		}

		::System::Void set_ShieldedShopIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_SET_SHIELDEDSHOPIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* get_ShieldedShopGoodsIDDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_GET_SHIELDEDSHOPGOODSIDDIC_OFFSET))(this);
		}

		::System::Void set_ShieldedShopGoodsIDDic(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_SET_SHIELDEDSHOPGOODSIDDIC_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnUpdateFeatureSwitchScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__ONUPDATEFEATURESWITCHSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsFeatureClosed(::Enum_3_A843FEC42C53F62F a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_A843FEC42C53F62F))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_ISFEATURECLOSED_OFFSET))(this, a1);
		}

		::System::Boolean IsFeaturePartialClosed(::Enum_3_A843FEC42C53F62F a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_A843FEC42C53F62F, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_ISFEATUREPARTIALCLOSED_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsFeatureRedDotClosed(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_ISFEATUREREDDOTCLOSED_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
