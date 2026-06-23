#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIShoppingMallRightBaseController.h"

class Class_2_69DFC5637027D536;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class ShoppingMallSkinContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_GET_RIGHTROOTMODULE_OFFSET UNITYSDK_OFFSET(0x14C8D280)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x14C8D350)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_ONCLICKGOODS_OFFSET UNITYSDK_OFFSET(0x14C8DB00)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C8D9F0)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14C8D510)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C8DA80)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C8D2E0)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14C8D4A0)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x14C8D600)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_RESETSELECTITEM_OFFSET UNITYSDK_OFFSET(0x14C8D6B0)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C8DB90)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER__INITVIEW_B__10_0_OFFSET UNITYSDK_OFFSET(0x14C8DBF0)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C8DCD0)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14C8DD60)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C8DD70)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C8DE00)
#define MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14C8DE90)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallSkinWidgetController_TypeDefinitionIndex = 61355;

	class UIShoppingMallSkinWidgetController : public ::MoleMole::UIShoppingMallRightBaseController
	{
	public:
		::MoleMole::ShoppingMallSkinContext* _context; // 0x2C8
		::Class_2_69DFC5637027D536* _view; // 0x2D0
		::MonoUITableScrollV2* _Goods_ScrollView; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::MonoGamepadModule* get_RightRootModule()
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_GET_RIGHTROOTMODULE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnClickGoods(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_ONCLICKGOODS_OFFSET))(this, index);
		}

		::System::Void RefreshUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_REFRESHUI_OFFSET))(this);
		}

		::System::Void ResetSelectItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER_RESETSELECTITEM_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitView_b__10_0(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER__INITVIEW_B__10_0_OFFSET))(this, reference);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLSKINWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
