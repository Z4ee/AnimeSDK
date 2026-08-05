#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_208CC9941471731A_947;
class Class_2_736D160283864BFA;
class Class_2_B1555FA59A3F87CE;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralTokenWidgetController; }
namespace MoleMole { class UIOverlordFeastMessagePageContext; }
namespace MoleMole { class UIOverlordFeastMessageRowWidgetController; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_CREATEFUNC_OFFSET UNITYSDK_OFFSET(0x174697F0)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_CREATEITEMFUNC_OFFSET UNITYSDK_OFFSET(0x1746A570)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_GETDEFAULTINDEX_OFFSET UNITYSDK_OFFSET(0x1746A380)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_GETITEMWIDGET_OFFSET UNITYSDK_OFFSET(0x17469950)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17468680)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_ONCLICKSUBLIMEBTN_OFFSET UNITYSDK_OFFSET(0x1746A630)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17468690)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x174693C0)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_ONSELECTCHILD_OFFSET UNITYSDK_OFFSET(0x174698B0)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17469620)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17468720)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17468BB0)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_REFRESHMESSAGELIST_OFFSET UNITYSDK_OFFSET(0x17469220)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_REFRESHRIGHTINFO_OFFSET UNITYSDK_OFFSET(0x17469B50)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_REFRESHTOKENITEM_OFFSET UNITYSDK_OFFSET(0x17468CA0)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1746A8E0)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER__ONCLICKSUBLIMEBTN_B__21_0_OFFSET UNITYSDK_OFFSET(0x1746AB10)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER__REFRESHMESSAGELIST_B__18_0_OFFSET UNITYSDK_OFFSET(0x1746A970)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1746ADC0)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x1746AE50)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1746AEE0)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1746AEF0)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1746AF00)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastMessagePageController_TypeDefinitionIndex = 63262;

	class UIOverlordFeastMessagePageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Int32 MaxCountPerPage = 0x6; // 0x0
		// static const ::System::Single FadeInterval; // 0x0
		::Class_2_736D160283864BFA* _view; // 0x318
		::Class_2_B1555FA59A3F87CE* _model; // 0x320
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_947*>* _curList; // 0x328
		::MoleMole::UIOverlordFeastMessageRowWidgetController* _curSelectRow; // 0x330
		::MoleMole::UIOverlordFeastMessagePageContext* _context; // 0x338
		::MoleMole::UIGeneralTokenWidgetController* _tokenWidget; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateFunc(::Enum_3_DBF2701137F18AA6 arg1, ::System::Func_1<::MoleMole::UIControlReference*>* arg2)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Enum_3_DBF2701137F18AA6, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_CREATEFUNC_OFFSET))(this, arg1, arg2);
		}

		::System::Void OnSelectChild(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_ONSELECTCHILD_OFFSET))(this, index);
		}

		::MoleMole::UIOverlordFeastMessageRowWidgetController* GetItemWidget(::System::Int32 idx)
		{
			return ((::MoleMole::UIOverlordFeastMessageRowWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_GETITEMWIDGET_OFFSET))(this, idx);
		}

		::System::Void RefreshMessageList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_REFRESHMESSAGELIST_OFFSET))(this);
		}

		::System::Void RefreshRightInfo(::Class_2_208CC9941471731A_947* devConfig)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_947*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_REFRESHRIGHTINFO_OFFSET))(this, devConfig);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateItemFunc(::Struct_2_575273D27F02957E binderInfo)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_CREATEITEMFUNC_OFFSET))(this, binderInfo);
		}

		::System::Void OnClickSublimeBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_ONCLICKSUBLIMEBTN_OFFSET))(this);
		}

		::System::Int32 GetDefaultIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_GETDEFAULTINDEX_OFFSET))(this);
		}

		::System::Void RefreshTokenItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_REFRESHTOKENITEM_OFFSET))(this);
		}

		::System::Int32 _RefreshMessageList_b__18_0(::Class_2_208CC9941471731A_947* a, ::Class_2_208CC9941471731A_947* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_947*, ::Class_2_208CC9941471731A_947*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER__REFRESHMESSAGELIST_B__18_0_OFFSET))(this, a, b);
		}

		::System::Void _OnClickSublimeBtn_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER__ONCLICKSUBLIMEBTN_B__21_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
