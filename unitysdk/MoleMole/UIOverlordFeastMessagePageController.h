#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_7A4252233BCEB3A9.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_208CC9941471731A_139;
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

#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_CREATEFUNC_OFFSET UNITYSDK_OFFSET(0x174F18C0)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_CREATEITEMFUNC_OFFSET UNITYSDK_OFFSET(0x174F2620)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_GETDEFAULTINDEX_OFFSET UNITYSDK_OFFSET(0x174F2430)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_GETITEMWIDGET_OFFSET UNITYSDK_OFFSET(0x174F1A20)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x174F0760)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_ONCLICKSUBLIMEBTN_OFFSET UNITYSDK_OFFSET(0x174F26E0)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x174F0770)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x174F1490)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_ONSELECTCHILD_OFFSET UNITYSDK_OFFSET(0x174F1980)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x174F16F0)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x174F0800)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x174F0C90)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_REFRESHMESSAGELIST_OFFSET UNITYSDK_OFFSET(0x174F1300)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_REFRESHRIGHTINFO_OFFSET UNITYSDK_OFFSET(0x174F1C20)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_REFRESHTOKENITEM_OFFSET UNITYSDK_OFFSET(0x174F0D80)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x174F2990)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER__ONCLICKSUBLIMEBTN_B__21_0_OFFSET UNITYSDK_OFFSET(0x174F2BD0)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER__REFRESHMESSAGELIST_B__18_0_OFFSET UNITYSDK_OFFSET(0x174F2A20)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x174F2E80)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x174F2F10)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x174F2FA0)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x174F2FB0)
#define MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x174F2FC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastMessagePageController_TypeDefinitionIndex = 84763;

	class UIOverlordFeastMessagePageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Int32 MaxCountPerPage = 0x6; // 0x0
		// static const ::System::Single FadeInterval; // 0x0
		::Class_2_736D160283864BFA* _view; // 0x318
		::Class_2_B1555FA59A3F87CE* _model; // 0x320
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_139*>* _curList; // 0x328
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

		::MoleMole::ScrollViewItemWidgetController* CreateFunc(::Enum_3_7A4252233BCEB3A9 arg1, ::System::Func_1<::MoleMole::UIControlReference*>* arg2)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Enum_3_7A4252233BCEB3A9, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_CREATEFUNC_OFFSET))(this, arg1, arg2);
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

		::System::Void RefreshRightInfo(::Class_2_208CC9941471731A_139* devConfig)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_139*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER_REFRESHRIGHTINFO_OFFSET))(this, devConfig);
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

		::System::Int32 _RefreshMessageList_b__18_0(::Class_2_208CC9941471731A_139* a, ::Class_2_208CC9941471731A_139* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_139*, ::Class_2_208CC9941471731A_139*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTMESSAGEPAGECONTROLLER__REFRESHMESSAGELIST_B__18_0_OFFSET))(this, a, b);
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
