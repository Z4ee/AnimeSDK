#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_0_16E4307DCC419505_196;
class Class_2_AE41256FA9D2870F;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_GET_GOODS_OFFSET UNITYSDK_OFFSET(0x14584C90)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_GET_SHOPPINGMALLRECHARGEWIDGET_MODULE_OFFSET UNITYSDK_OFFSET(0x14584C30)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x14584D20)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_ONCLICKGOODS_OFFSET UNITYSDK_OFFSET(0x145855B0)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x145851E0)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_ONCUSTOMERBTN_OFFSET UNITYSDK_OFFSET(0x145854C0)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14585270)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14585440)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14584CB0)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14585170)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x14585360)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_REGISTERONCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x14585610)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_SET_GOODS_OFFSET UNITYSDK_OFFSET(0x14584CA0)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14585660)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER__INITVIEW_B__14_0_OFFSET UNITYSDK_OFFSET(0x14585740)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x145857B0)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14585840)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x145858E0)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14585970)
#define MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14585A00)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallRechargeWidgetController_TypeDefinitionIndex = 67959;

	class UIShoppingMallRechargeWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_AE41256FA9D2870F* _view; // 0x2B8
		::MonoUITableScrollV2* _Goods_ScrollView; // 0x2C0
		::System::Action_1<::System::Int32>* _onClick; // 0x2C8
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_196*>* _Goods_k__BackingField; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::MonoGamepadModule* get_ShoppingMallRechargeWidget_Module()
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_GET_SHOPPINGMALLRECHARGEWIDGET_MODULE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_196*>* get_Goods()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_196*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_GET_GOODS_OFFSET))(this);
		}

		::System::Void set_Goods(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_196*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_196*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLRECHARGEWIDGETCONTROLLER_SET_GOODS_OFFSET))(this, value);
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
