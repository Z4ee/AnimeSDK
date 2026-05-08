#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MonoUITableScrollV2_MoveContext.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_118B0BB7260905B4;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWorkBenchMainPageTransitionDialogPopWindowController; }
namespace MoleMole { class UIWorkbenchMainPageBigBtnWidgetController; }
namespace MoleMole { class UIWorkbenchMainPageSmallBtnWidgetController_Context; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x10A185F0)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_CANOPENAPP_OFFSET UNITYSDK_OFFSET(0x10A19620)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_CREATEWIDGET_OFFSET UNITYSDK_OFFSET(0x10A184D0)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_GETAPPBGCOLOR_OFFSET UNITYSDK_OFFSET(0x10A19500)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x10A18390)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ICONSCROLLVIEWONMOVE_OFFSET UNITYSDK_OFFSET(0x10A1AA20)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_INITAPPICONSDATA_OFFSET UNITYSDK_OFFSET(0x10A18B40)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_INITAPPICONSVIEW_OFFSET UNITYSDK_OFFSET(0x10A18710)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONCLICKBIGBTN_OFFSET UNITYSDK_OFFSET(0x10A1A400)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10A183A0)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0x10A19400)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x10A19380)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10A19230)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10A18430)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10A191C0)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_SELECTEDAPPICON_1_OFFSET UNITYSDK_OFFSET(0x10A1A460)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_SELECTEDAPPICON_OFFSET UNITYSDK_OFFSET(0x10A1ACF0)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_TRYOPENAPP_OFFSET UNITYSDK_OFFSET(0x10A19920)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_WARMUPTRANSITIONCONTROLLER_OFFSET UNITYSDK_OFFSET(0x10A189D0)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10A1AF30)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10A1AE90)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER__INITAPPICONSDATA_B__25_1_OFFSET UNITYSDK_OFFSET(0x10A1AF40)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER__INITAPPICONSDATA_B__25_2_OFFSET UNITYSDK_OFFSET(0x10A1B020)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10A1B290)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___BASE_ONPOSTPAGESHOWED_OFFSET UNITYSDK_OFFSET(0x10A1B320)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x10A1B330)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10A1B340)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10A1B350)
#define MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10A1B360)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchMainPageController_TypeDefinitionIndex = 56325;

	class UIWorkBenchMainPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Int32* StaticGet_MONSTER_CARD_NEWBIE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIWorkBenchMainPageController_TypeDefinitionIndex)->GetStaticField(0x10680);
		}
		// static const ::System::Int32 TRUST_DEGREE_ID = 0x1; // 0x0
		// static const ::System::Int32 INFORMATION_ID = 0x2; // 0x0
		// static const ::System::Int32 ACTIVE_PROPS_ID = 0x3; // 0x0
		// static const ::System::Int32 INTER_KNOT_NOTE_ID = 0x4; // 0x0
		// static const ::System::Int32 MONSTER_CARD_ID = 0x5; // 0x0
		::Class_2_118B0BB7260905B4* _view; // 0x310
		::MoleMole::UIWorkbenchMainPageSmallBtnWidgetController_Context* _leftBigScrollViewData; // 0x318
		::System::Collections::Generic::List_1<::MoleMole::UIWorkbenchMainPageSmallBtnWidgetController_Context*>* _scrollViewDatas; // 0x320
		::MoleMole::UIWorkBenchMainPageTransitionDialogPopWindowController* _transitionDialog; // 0x328
		::System::Int32 _iconScrollViewNewbieIndex; // 0x330
		::MoleMole::UIWorkbenchMainPageBigBtnWidgetController* _bigBtnWidget; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnPostPageShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONPOSTPAGESHOWED_OFFSET))(this);
		}

		::UnityEngine::Color GetAppBgColor(::System::String* colorName)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_GETAPPBGCOLOR_OFFSET))(this, colorName);
		}

		static ::System::Boolean CanOpenApp(::System::Int32 appID, ::MoleMole::UIControllerContextBase* context)
		{
			return ((::System::Boolean(*)(::System::Int32, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_CANOPENAPP_OFFSET))(appID, context);
		}

		static ::System::Void TryOpenApp(::System::Int32 appID, ::MoleMole::UIControllerContextBase* context)
		{
			return ((::System::Void(*)(::System::Int32, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_TRYOPENAPP_OFFSET))(appID, context);
		}

		::System::Void CreateWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_CREATEWIDGET_OFFSET))(this);
		}

		::System::Void OnClickBigBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ONCLICKBIGBTN_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_BINDEVENT_OFFSET))(this);
		}

		::System::Void InitAppIconsView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_INITAPPICONSVIEW_OFFSET))(this);
		}

		::System::Void IconScrollViewOnMove(::MonoUITableScrollV2_MoveContext context, ::System::Single curPosition)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_ICONSCROLLVIEWONMOVE_OFFSET))(this, context, curPosition);
		}

		::System::Void WarmUpTransitionController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_WARMUPTRANSITIONCONTROLLER_OFFSET))(this);
		}

		::System::Void SelectedAppIcon(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_SELECTEDAPPICON_OFFSET))(this, index);
		}

		::System::Void SelectedAppIcon_1(::MoleMole::UIWorkbenchMainPageSmallBtnWidgetController_Context* context, ::MoleMole::UIBaseController* appIconWidget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWorkbenchMainPageSmallBtnWidgetController_Context*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_SELECTEDAPPICON_1_OFFSET))(this, context, appIconWidget);
		}

		::System::Void InitAppIconsData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER_INITAPPICONSDATA_OFFSET))(this);
		}

		::System::Void _InitAppIconsData_b__25_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER__INITAPPICONSDATA_B__25_1_OFFSET))(this);
		}

		::System::Void _InitAppIconsData_b__25_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER__INITAPPICONSDATA_B__25_2_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnPostPageShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___BASE_ONPOSTPAGESHOWED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
