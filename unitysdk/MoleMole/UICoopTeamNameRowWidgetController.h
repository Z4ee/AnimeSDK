#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_2F3C7D4EFC74D485;
class Class_2_345374E00A78035C;
class Class_3_B6F2480661C7032D_6;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UICoopTeamNameRowWidgetController_Context; }
namespace System { class EventArgs; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1565F030)
#define MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1565F0A0)
#define MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1565F2E0)
#define MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER_ONSWITCHPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0x1565F680)
#define MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1565F140)
#define MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER_SHOWINFO_OFFSET UNITYSDK_OFFSET(0x1565F610)
#define MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER_SHOWPLATFORMUI_OFFSET UNITYSDK_OFFSET(0x1565F710)
#define MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER_SHOWUIVIEW_OFFSET UNITYSDK_OFFSET(0x1565F8E0)
#define MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1565FEF0)
#define MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER__SHOWUIVIEW_G__SETUPPLATFORMUI_11_0_OFFSET UNITYSDK_OFFSET(0x1565FE00)
#define MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1565FF50)
#define MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1565FFF0)
#define MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15660090)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopTeamNameRowWidgetController_TypeDefinitionIndex = 58655;

	class UICoopTeamNameRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_3_B6F2480661C7032D_6* _view; // 0x2B8
		::Class_2_2F3C7D4EFC74D485* _model; // 0x2C0
		::MoleMole::UICoopTeamNameRowWidgetController_Context* _context; // 0x2C8
		::System::Boolean _allowShowPlatform; // 0x2D0
		::System::Boolean _canSwitchPlatformInfo; // 0x2D1
		::System::Boolean _isShowingPlatform; // 0x2D2
		::UnityEngine::UI::Extension::UILocalizationText* displayNameText; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_345374E00A78035C* get__viewModel()
		{
			return ((::Class_2_345374E00A78035C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnSwitchPlatformInfo(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER_ONSWITCHPLATFORMINFO_OFFSET))(this, args);
		}

		::System::Void ShowPlatformUI(::System::Boolean isShowingPlatformInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER_SHOWPLATFORMUI_OFFSET))(this, isShowingPlatformInfo);
		}

		::System::Void ShowInfo(::Class_1_BE6BF7909AD9D940* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BE6BF7909AD9D940*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER_SHOWINFO_OFFSET))(this, info);
		}

		::System::Void ShowUIView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER_SHOWUIVIEW_OFFSET))(this);
		}

		::System::Void _ShowUIView_g__SetupPlatformUI_11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER__SHOWUIVIEW_G__SETUPPLATFORMUI_11_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEAMNAMEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
