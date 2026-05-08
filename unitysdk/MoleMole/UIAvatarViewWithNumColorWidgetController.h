#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_2F3C7D4EFC74D485;
class Class_2_F8234ADEFB8BEF39;
class Class_3_19EF277AF5D11235_1;
namespace MoleMole { class UIAvatarViewWithNumColorWidgetController_Context; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14EADF50)
#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_ONCOOPMATCHMESSAGE_OFFSET UNITYSDK_OFFSET(0x14EAEDF0)
#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14EADFC0)
#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14EAE230)
#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_ONSWITCHPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x14EAEB90)
#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14EAE060)
#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_SHOWINFO_OFFSET UNITYSDK_OFFSET(0x14EAEB20)
#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_SHOWPLATFORMUI_OFFSET UNITYSDK_OFFSET(0x14EAEC20)
#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_SHOWUIVIEW_OFFSET UNITYSDK_OFFSET(0x14EAFCB0)
#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x14EAF560)
#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14EB0270)
#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER__SHOWUIVIEW_G__SETUPPLATFORMUI_13_0_OFFSET UNITYSDK_OFFSET(0x14EB01C0)
#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14EB02D0)
#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14EB0370)
#define MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14EB0410)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarViewWithNumColorWidgetController_TypeDefinitionIndex = 38960;

	class UIAvatarViewWithNumColorWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_3_19EF277AF5D11235_1* _view; // 0x2B8
		::Class_2_2F3C7D4EFC74D485* _model; // 0x2C0
		::MoleMole::UIAvatarViewWithNumColorWidgetController_Context* _context; // 0x2C8
		::System::Boolean _allowShowPlatform; // 0x2D0
		::System::Boolean _canSwitchPlatformInfo; // 0x2D1
		::System::Boolean _isShowingPlatform; // 0x2D2
		::UnityEngine::UI::Extension::UILocalizationText* displayNameText; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_F8234ADEFB8BEF39* get__viewModel()
		{
			return ((::Class_2_F8234ADEFB8BEF39*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnSwitchPlatformInfo(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_ONSWITCHPLATFORMINFO_OFFSET))(this, args);
		}

		::System::Void OnCoopMatchMessage(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_ONCOOPMATCHMESSAGE_OFFSET))(this, args);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void ShowPlatformUI(::System::Boolean isShowingPlatformInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_SHOWPLATFORMUI_OFFSET))(this, isShowingPlatformInfo);
		}

		::System::Void ShowInfo(::Class_1_BE6BF7909AD9D940* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BE6BF7909AD9D940*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_SHOWINFO_OFFSET))(this, info);
		}

		::System::Void ShowUIView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER_SHOWUIVIEW_OFFSET))(this);
		}

		::System::Void _ShowUIView_g__SetupPlatformUI_13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER__SHOWUIVIEW_G__SETUPPLATFORMUI_13_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARVIEWWITHNUMCOLORWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
