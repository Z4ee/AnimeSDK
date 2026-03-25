#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A84DFEC42C5C4A94.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_6E708EAB438EC183_5;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FEATURESWITCHMODULE_GET_CLOSEDACTIVITYPANELIDS_OFFSET UNITYSDK_OFFSET(0x96AAC90)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_CLOSEDACTIVITYSCHEDULEIDS_OFFSET UNITYSDK_OFFSET(0x96AA760)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_DISABLEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0x96AB140)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_ISALLPREAVATARDISABLING_OFFSET UNITYSDK_OFFSET(0x96AB0B0)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_ISCLOSEALLSHOP_OFFSET UNITYSDK_OFFSET(0x96AC300)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_SHIELDEDSHOPGOODSIDDIC_OFFSET UNITYSDK_OFFSET(0x96AC340)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_SHIELDEDSHOPIDS_OFFSET UNITYSDK_OFFSET(0x96AC320)
#define RPG_CLIENT_FEATURESWITCHMODULE_ISFEATURECLOSED_OFFSET UNITYSDK_OFFSET(0x96A0DD0)
#define RPG_CLIENT_FEATURESWITCHMODULE_ISFEATUREPARTIALCLOSED_OFFSET UNITYSDK_OFFSET(0x96AC920)
#define RPG_CLIENT_FEATURESWITCHMODULE_ISFEATUREREDDOTCLOSED_OFFSET UNITYSDK_OFFSET(0x96ACBA0)
#define RPG_CLIENT_FEATURESWITCHMODULE_ISNEWPERFORMANCESKIP_OFFSET UNITYSDK_OFFSET(0x96AB2A0)
#define RPG_CLIENT_FEATURESWITCHMODULE_NEWPERFORMANCESKIPEXCLUDEIDS_OFFSET UNITYSDK_OFFSET(0x96AB330)
#define RPG_CLIENT_FEATURESWITCHMODULE_SET_CLOSEDACTIVITYPANELIDS_OFFSET UNITYSDK_OFFSET(0x96AACA0)
#define RPG_CLIENT_FEATURESWITCHMODULE_SET_CLOSEDACTIVITYSCHEDULEIDS_OFFSET UNITYSDK_OFFSET(0x96AA770)
#define RPG_CLIENT_FEATURESWITCHMODULE_SET_DISABLEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0x96AB150)
#define RPG_CLIENT_FEATURESWITCHMODULE_SET_ISCLOSEALLSHOP_OFFSET UNITYSDK_OFFSET(0x96AC310)
#define RPG_CLIENT_FEATURESWITCHMODULE_SET_SHIELDEDSHOPGOODSIDDIC_OFFSET UNITYSDK_OFFSET(0x96AC350)
#define RPG_CLIENT_FEATURESWITCHMODULE_SET_SHIELDEDSHOPIDS_OFFSET UNITYSDK_OFFSET(0x96AC330)
#define RPG_CLIENT_FEATURESWITCHMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x96AC360)
#define RPG_CLIENT_FEATURESWITCHMODULE__ADDSHIELDEDSHOPGOODID_OFFSET UNITYSDK_OFFSET(0x96AC170)
#define RPG_CLIENT_FEATURESWITCHMODULE__ADDSHIELDEDSHOPID_OFFSET UNITYSDK_OFFSET(0x96AC110)
#define RPG_CLIENT_FEATURESWITCHMODULE__CLEARFEATURESWITCHSHOP_OFFSET UNITYSDK_OFFSET(0x96AC030)
#define RPG_CLIENT_FEATURESWITCHMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x96ACD50)
#define RPG_CLIENT_FEATURESWITCHMODULE__ISCLOSEDACTIVITYPANELIDSCHANGED_OFFSET UNITYSDK_OFFSET(0x96AA880)
#define RPG_CLIENT_FEATURESWITCHMODULE__ISCLOSEDACTIVITYSCHEDULEIDSCHANGED_OFFSET UNITYSDK_OFFSET(0x96AA350)
#define RPG_CLIENT_FEATURESWITCHMODULE__ISSHIELDEDDATACHANGED_OFFSET UNITYSDK_OFFSET(0x96AB880)
#define RPG_CLIENT_FEATURESWITCHMODULE__ONUPDATEFEATURESWITCHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x96AC3D0)
#define RPG_CLIENT_FEATURESWITCHMODULE__UNINITFEATURESWITCHMODULEACTIVITYPANEL_OFFSET UNITYSDK_OFFSET(0x96AA780)
#define RPG_CLIENT_FEATURESWITCHMODULE__UNINITFEATURESWITCHMODULEACTIVITY_OFFSET UNITYSDK_OFFSET(0x96AA210)
#define RPG_CLIENT_FEATURESWITCHMODULE__UNINITFEATURESWITCHMODULESHOP_OFFSET UNITYSDK_OFFSET(0x96AB730)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATECLOSEDACTIVITYPANELIDS_OFFSET UNITYSDK_OFFSET(0x96AAA70)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATECLOSEDACTIVITYSCHEDULEIDS_OFFSET UNITYSDK_OFFSET(0x96AA540)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHACTIVITYPANEL_OFFSET UNITYSDK_OFFSET(0x96AA810)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHACTIVITYSCHEDULE_OFFSET UNITYSDK_OFFSET(0x96AA2A0)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHAVATAR_OFFSET UNITYSDK_OFFSET(0x96AACB0)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x96AB160)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHSHOP_OFFSET UNITYSDK_OFFSET(0x96AB810)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATESHIELDEDDATA_OFFSET UNITYSDK_OFFSET(0x96ABD50)
#define RPG_CLIENT_FEATURESWITCHMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x96ACFB0)

namespace RPG::Client
{
	inline static constexpr unsigned int FeatureSwitchModule_TypeDefinitionIndex = 52084;

	class FeatureSwitchModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Enum_3_A84DFEC42C5C4A94, ::System::Boolean>* _FeatureSwitchClosedDict; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ClosedActivityScheduleIDs_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _ShieldedShopGoodsIDDic_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::Enum_3_A84DFEC42C5C4A94, ::Il2CppArray<::Class_1_6E708EAB438EC183_5*>*>* _FeatureSwitchParamDict; // 0x28
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ClosedActivityPanelIDs_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _DisabledAvatarIDs_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _ShieldedShopIDs_k__BackingField; // 0x40
		::System::Boolean _IsCloseAllShop_k__BackingField; // 0x48

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

		::System::Boolean IsFeatureClosed(::Enum_3_A84DFEC42C5C4A94 featureType)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_A84DFEC42C5C4A94))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_ISFEATURECLOSED_OFFSET))(this, featureType);
		}

		::System::Boolean IsFeaturePartialClosed(::Enum_3_A84DFEC42C5C4A94 featureType, ::Il2CppArray<::System::UInt32>* args)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_A84DFEC42C5C4A94, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_ISFEATUREPARTIALCLOSED_OFFSET))(this, featureType, args);
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
