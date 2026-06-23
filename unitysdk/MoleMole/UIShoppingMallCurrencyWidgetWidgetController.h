#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/MoleMole/UIShoppingMallCurrencyWidgetWidgetController_BgData.h"
#include "unitysdk/MoleMole/UIShoppingMallRightBaseController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_0_16E4307DCC419505_201;
class Class_2_EC28E1D3A39EE7DE_27;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class ShoppingMallCurrencyContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_GET_BGS_OFFSET UNITYSDK_OFFSET(0x17B86B00)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_GET_RIGHTROOTMODULE_OFFSET UNITYSDK_OFFSET(0x17B873F0)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_GET_ROOTMODULE_OFFSET UNITYSDK_OFFSET(0x17B86AE0)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17B86B20)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x17B86CC0)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_ONCLICKGOODS_OFFSET UNITYSDK_OFFSET(0x17B88CE0)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17B86B90)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_ONGAMEPADMODULEDESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x17B87D50)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x17B87F20)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_ONSCROLLVIEWSELECTHANDLE_OFFSET UNITYSDK_OFFSET(0x17B879D0)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17B87400)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17B86C50)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17B87380)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_REFRESHJUMPTIP_OFFSET UNITYSDK_OFFSET(0x17B88220)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x17B87510)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_RESETSELECTITEM_OFFSET UNITYSDK_OFFSET(0x17B87690)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_SELECTJUMPITEM_OFFSET UNITYSDK_OFFSET(0x17B888E0)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_SET_BGS_OFFSET UNITYSDK_OFFSET(0x17B86B10)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_SET_ROOTMODULE_OFFSET UNITYSDK_OFFSET(0x17B86AF0)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17B88D70)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER__INITVIEW_B__23_0_OFFSET UNITYSDK_OFFSET(0x17B88E20)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER__INITVIEW_B__23_1_OFFSET UNITYSDK_OFFSET(0x17B88F00)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17B88F80)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER___BASE_ONGAMEPADMODULEDESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x17B89020)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x17B890D0)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17B89180)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17B89190)
#define MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17B89220)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallCurrencyWidgetWidgetController_TypeDefinitionIndex = 65965;

	class UIShoppingMallCurrencyWidgetWidgetController : public ::MoleMole::UIShoppingMallRightBaseController
	{
	public:
		::MonoUITableScrollV2* _Goods_ScrollView; // 0x2C8
		::MonoUITableScrollV2* _Goods_ScrollView_Bg; // 0x2D0
		::MoleMole::MonoGamepadModule* _RootModule_k__BackingField; // 0x2D8
		::Class_0_16E4307DCC419505_201* oldGoods; // 0x2E0
		::MoleMole::ShoppingMallCurrencyContext* _context; // 0x2E8
		::System::Boolean _isShowJumpTip; // 0x2F0
		::System::Int32 _jumpTipItemIndex; // 0x2F4
		::System::Collections::Generic::List_1<::MoleMole::UIShoppingMallCurrencyWidgetWidgetController_BgData>* _Bgs_k__BackingField; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::MonoGamepadModule* get_RootModule()
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_GET_ROOTMODULE_OFFSET))(this);
		}

		::System::Void set_RootModule(::MoleMole::MonoGamepadModule* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_SET_ROOTMODULE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIShoppingMallCurrencyWidgetWidgetController_BgData>* get_Bgs()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIShoppingMallCurrencyWidgetWidgetController_BgData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_GET_BGS_OFFSET))(this);
		}

		::System::Void set_Bgs(::System::Collections::Generic::List_1<::MoleMole::UIShoppingMallCurrencyWidgetWidgetController_BgData>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIShoppingMallCurrencyWidgetWidgetController_BgData>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_SET_BGS_OFFSET))(this, value);
		}

		::Class_2_EC28E1D3A39EE7DE_27* get__viewModel()
		{
			return ((::Class_2_EC28E1D3A39EE7DE_27*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::MoleMole::MonoGamepadModule* get_RightRootModule()
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_GET_RIGHTROOTMODULE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnScrollViewSelectHandle(::System::Int32 selectIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_ONSCROLLVIEWSELECTHANDLE_OFFSET))(this, selectIndex);
		}

		::System::Void OnGamepadModuleDeselectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_ONGAMEPADMODULEDESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void RefreshJumpTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_REFRESHJUMPTIP_OFFSET))(this);
		}

		::System::Void RefreshUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_REFRESHUI_OFFSET))(this);
		}

		::System::Void ResetSelectItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_RESETSELECTITEM_OFFSET))(this);
		}

		::System::Void SelectJumpItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_SELECTJUMPITEM_OFFSET))(this);
		}

		::System::Void OnClickGoods(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER_ONCLICKGOODS_OFFSET))(this, index);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitView_b__23_0(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER__INITVIEW_B__23_0_OFFSET))(this, reference);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitView_b__23_1(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER__INITVIEW_B__23_1_OFFSET))(this, reference);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnGamepadModuleDeselectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER___BASE_ONGAMEPADMODULEDESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCURRENCYWIDGETWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
