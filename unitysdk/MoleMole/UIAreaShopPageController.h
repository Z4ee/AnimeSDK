#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/UIAreaShopPageController_TabType.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_79AE422BA06F6D26_236;
class Class_2_9A2734A1BC17687A;
class Class_2_B70D73F10A6E587B;
class Class_3_9F091E965E210217_13;
class Class_3_E27FF972D6A12E8E_1;
class MonoUITableScrollV2;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIAbyssS2InfoBtnWidgetController; }
namespace MoleMole { class UIAbyssS2TalentItemWidgetController; }
namespace MoleMole { class UIAreaGoodsWidgetController; }
namespace MoleMole { class UIAreaShopPageController_Context; }
namespace MoleMole { class UIAreaShopRoleWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralToggleWidgetControllerWithModel; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_CREATEITEM_OFFSET UNITYSDK_OFFSET(0x12F3EF80)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_GETCURLAYER_OFFSET UNITYSDK_OFFSET(0x12F3D250)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_GETEFFECTIVESCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x12F3F7A0)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_GETMAXLAYER_OFFSET UNITYSDK_OFFSET(0x12F3D460)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_GETSORTEDGOODS_OFFSET UNITYSDK_OFFSET(0x12F40750)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_GET_CURSELECTEDGOODSID_OFFSET UNITYSDK_OFFSET(0x12F3ECA0)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x12F3C110)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_GET_INBUYTAB_OFFSET UNITYSDK_OFFSET(0x12F3C120)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_GET_INCONSOLE_OFFSET UNITYSDK_OFFSET(0x12F3EEB0)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_GET_INSELLTAB_OFFSET UNITYSDK_OFFSET(0x12F3C130)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x12F3EDE0)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_GET_NETHANDLER_OFFSET UNITYSDK_OFFSET(0x12F3ED20)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_GET_UID_OFFSET UNITYSDK_OFFSET(0x12F3F170)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x12F3C140)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_INITHPBAR_OFFSET UNITYSDK_OFFSET(0x12F3F820)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONCLICKBTNBUY_OFFSET UNITYSDK_OFFSET(0x12F3E2D0)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONCLICKBTNSELL_OFFSET UNITYSDK_OFFSET(0x12F3EBE0)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONCLICKHPINFO_OFFSET UNITYSDK_OFFSET(0x12F3D180)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONCLICKMAP_OFFSET UNITYSDK_OFFSET(0x12F3CDC0)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONCLICKPACKAGE_OFFSET UNITYSDK_OFFSET(0x12F3CFA0)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONCLICKREFRESHGOODS_OFFSET UNITYSDK_OFFSET(0x12F40340)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12F3C150)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONDATAUPDATE_OFFSET UNITYSDK_OFFSET(0x12F3D590)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x12F40F20)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONITEMCHANGE_OFFSET UNITYSDK_OFFSET(0x12F3E120)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONSCROLLVIEWSELECTHANDLE_OFFSET UNITYSDK_OFFSET(0x12F3EC50)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONTOGGLECHANGE_OFFSET UNITYSDK_OFFSET(0x12F3CB70)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12F40A90)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12F3C1E0)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12F3F180)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_REFRESHDESC_OFFSET UNITYSDK_OFFSET(0x12F3CC70)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_REFRESHHPBAR_OFFSET UNITYSDK_OFFSET(0x12F408E0)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_REFRESHITEMSVIEW_OFFSET UNITYSDK_OFFSET(0x12F3E180)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_REFRESHOUTERUI_OFFSET UNITYSDK_OFFSET(0x12F3D810)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_REFRESHSCROLLVIEWITEMS_OFFSET UNITYSDK_OFFSET(0x12F3E340)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_REFRESHSHOPDATA_OFFSET UNITYSDK_OFFSET(0x12F3D5F0)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_REFRESHTOGGLETEXT_OFFSET UNITYSDK_OFFSET(0x12F3CBD0)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_REFRESHTOKENS_OFFSET UNITYSDK_OFFSET(0x12F3FC90)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER_SETCURSELECTGOODS_OFFSET UNITYSDK_OFFSET(0x12F3EAD0)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12F40FD0)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER__REFRESHSCROLLVIEWITEMS_B__59_0_OFFSET UNITYSDK_OFFSET(0x12F41060)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER__REFRESHSCROLLVIEWITEMS_B__59_1_OFFSET UNITYSDK_OFFSET(0x12F410E0)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12F41380)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12F413D0)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12F413E0)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12F413F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaShopPageController_TypeDefinitionIndex = 75403;

	class UIAreaShopPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* MuteLogicTimerTag; // 0x0
		::MoleMole::UIAreaShopPageController_TabType m_curTabType; // 0x310
		::Class_2_79AE422BA06F6D26_236* _view; // 0x318
		::MoleMole::UIGeneralToggleWidgetControllerWithModel* toggle; // 0x320
		::MoleMole::UIAbyssS2InfoBtnWidgetController* _infoButton; // 0x328
		::Class_3_9F091E965E210217_13* m_curSelectedBuyGoods; // 0x330
		::Class_3_E27FF972D6A12E8E_1* m_curSelectedSellGoods; // 0x338
		::System::Collections::Generic::List_1<::MoleMole::UIAreaGoodsWidgetController*>* m_goodsList; // 0x340
		::MoleMole::UIAreaShopPageController_Context* m_ctx; // 0x348
		::System::UInt32 m_uid; // 0x350
		::System::Int32 _currencyID; // 0x354
		::System::Collections::Generic::List_1<::Class_3_9F091E965E210217_13*>* m_globalBuyGoodsList; // 0x358
		::System::Collections::Generic::List_1<::Class_3_9F091E965E210217_13*>* m_buyGoodsList; // 0x360
		::System::Collections::Generic::List_1<::Class_3_E27FF972D6A12E8E_1*>* m_sellGoodsList; // 0x368
		::System::UInt32 m_shopID; // 0x370
		::System::Collections::Generic::List_1<::MoleMole::UIAreaGoodsWidgetController*>* m_ctrlList; // 0x378
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIAbyssS2TalentItemWidgetController*>* m_ctrlDict; // 0x380
		::System::Collections::Generic::List_1<::MoleMole::UIAreaShopRoleWidgetController*>* _areaShopList; // 0x388
		::System::Boolean _needShowLeft; // 0x390

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Boolean get_InBuyTab()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_GET_INBUYTAB_OFFSET))(this);
		}

		::System::Boolean get_InSellTab()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_GET_INSELLTAB_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnToggleChange(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONTOGGLECHANGE_OFFSET))(this, isOn);
		}

		::System::Void RefreshToggleText(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_REFRESHTOGGLETEXT_OFFSET))(this, isOn);
		}

		::System::Void RefreshDesc(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_REFRESHDESC_OFFSET))(this, isOn);
		}

		::System::Void OnClickMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONCLICKMAP_OFFSET))(this);
		}

		::System::Void OnClickPackage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONCLICKPACKAGE_OFFSET))(this);
		}

		::System::Void OnClickHpInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONCLICKHPINFO_OFFSET))(this);
		}

		::System::Int32 GetCurLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_GETCURLAYER_OFFSET))(this);
		}

		::System::Int32 GetMaxLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_GETMAXLAYER_OFFSET))(this);
		}

		::System::Void OnDataUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONDATAUPDATE_OFFSET))(this, args);
		}

		::System::Void OnItemChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONITEMCHANGE_OFFSET))(this, args);
		}

		::System::Void OnClickBtnBuy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONCLICKBTNBUY_OFFSET))(this);
		}

		::System::Void OnClickBtnSell()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONCLICKBTNSELL_OFFSET))(this);
		}

		::System::Void OnScrollViewSelectHandle(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONSCROLLVIEWSELECTHANDLE_OFFSET))(this, index);
		}

		::System::UInt32 get_CurSelectedGoodsID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_GET_CURSELECTEDGOODSID_OFFSET))(this);
		}

		::Class_2_B70D73F10A6E587B* get_NetHandler()
		{
			return ((::Class_2_B70D73F10A6E587B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_GET_NETHANDLER_OFFSET))(this);
		}

		::Class_2_9A2734A1BC17687A* get_Model()
		{
			return ((::Class_2_9A2734A1BC17687A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_GET_MODEL_OFFSET))(this);
		}

		::System::Boolean get_InConsole()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_GET_INCONSOLE_OFFSET))(this);
		}

		::System::Void SetCurSelectGoods(::System::Int32 goodsIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_SETCURSELECTGOODS_OFFSET))(this, goodsIndex);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateItem(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_CREATEITEM_OFFSET))(this, arg);
		}

		::System::UInt32 get_Uid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_GET_UID_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void RefreshOuterUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_REFRESHOUTERUI_OFFSET))(this);
		}

		::System::Void OnClickRefreshGoods()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONCLICKREFRESHGOODS_OFFSET))(this);
		}

		::System::Void RefreshTokens()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_REFRESHTOKENS_OFFSET))(this);
		}

		::MonoUITableScrollV2* GetEffectiveScrollView()
		{
			return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_GETEFFECTIVESCROLLVIEW_OFFSET))(this);
		}

		::System::Void RefreshShopData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_REFRESHSHOPDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_3_9F091E965E210217_13*>* GetSortedGoods(::System::Collections::Generic::List_1<::Class_3_9F091E965E210217_13*>* goodsIDList)
		{
			return ((::System::Collections::Generic::List_1<::Class_3_9F091E965E210217_13*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_9F091E965E210217_13*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_GETSORTEDGOODS_OFFSET))(this, goodsIDList);
		}

		::System::Void RefreshScrollViewItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_REFRESHSCROLLVIEWITEMS_OFFSET))(this);
		}

		::System::Void RefreshItemsView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_REFRESHITEMSVIEW_OFFSET))(this);
		}

		::System::Void RefreshHpBar(::System::UInt32 fighterID, ::MoleMole::Config::BaseProperty propertyType, ::System::String* customType, ::System::Double oldValue, ::System::Double newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_REFRESHHPBAR_OFFSET))(this, fighterID, propertyType, customType, oldValue, newValue);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnFighter_PropertyValueChanged(::System::UInt32 FighterId, ::MoleMole::Config::BaseProperty type, ::System::String* customType, ::System::Double oldValue, ::System::Double newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET))(this, FighterId, type, customType, oldValue, newValue);
		}

		::System::Void InitHpBar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER_INITHPBAR_OFFSET))(this);
		}

		::System::Boolean _RefreshScrollViewItems_b__59_0(::Class_3_E27FF972D6A12E8E_1* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_E27FF972D6A12E8E_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER__REFRESHSCROLLVIEWITEMS_B__59_0_OFFSET))(this, x);
		}

		::System::Void _RefreshScrollViewItems_b__59_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER__REFRESHSCROLLVIEWITEMS_B__59_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
