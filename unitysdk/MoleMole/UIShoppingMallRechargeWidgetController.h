#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_0_16E4307DCC419505_201;
class Class_2_AE41256FA9D2870F;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_GET_GOODS_OFFSET UNITYSDK_OFFSET(0x16695210)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_GET_SHOPPINGMALLRECHARGEWIDGET_MODULE_OFFSET UNITYSDK_OFFSET(0x166951B0)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x166952A0)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_ONCLICKGOODS_OFFSET UNITYSDK_OFFSET(0x16695B30)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16695760)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_ONCUSTOMERBTN_OFFSET UNITYSDK_OFFSET(0x16695A40)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x166957F0)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x166959C0)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16695230)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x166956F0)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x166958E0)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_REGISTERONCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x16695B90)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_SET_GOODS_OFFSET UNITYSDK_OFFSET(0x16695220)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16695BE0)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER__INITVIEW_B__14_0_OFFSET UNITYSDK_OFFSET(0x16695CC0)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16695D70)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16695E00)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16695EA0)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16695F30)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16695FC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallRechargeWidgetController_TypeDefinitionIndex = 67949;

	class UIShoppingMallRechargeWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_AE41256FA9D2870F* _view; // 0x2C0
		::MonoUITableScrollV2* _Goods_ScrollView; // 0x2C8
		::System::Action_1<::System::Int32>* _onClick; // 0x2D0
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_201*>* _Goods_k__BackingField; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::MonoGamepadModule* get_ShoppingMallRechargeWidget_Module()
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_GET_SHOPPINGMALLRECHARGEWIDGET_MODULE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_201*>* get_Goods()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_201*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_GET_GOODS_OFFSET))(this);
		}

		::System::Void set_Goods(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_201*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_201*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_SET_GOODS_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnCustomerBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_ONCUSTOMERBTN_OFFSET))(this);
		}

		::System::Void OnClickGoods(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_ONCLICKGOODS_OFFSET))(this, index);
		}

		::System::Void RefreshUI(::System::Boolean isReset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_REFRESHUI_OFFSET))(this, isReset);
		}

		::System::Void RegisterOnClickCallback(::System::Action_1<::System::Int32>* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_REGISTERONCLICKCALLBACK_OFFSET))(this, onClick);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitView_b__14_0(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER__INITVIEW_B__14_0_OFFSET))(this, reference);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
