#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E94A4778A096FF5C;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRABCityTopTabWidgetController_Context; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER_GETTABBUTTON_OFFSET UNITYSDK_OFFSET(0x1845A8E0)
#define MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1845A610)
#define MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1845A680)
#define MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1845A720)
#define MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1845A950)
#define MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1845AAD0)
#define MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1845AB30)
#define MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1845ABD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABCityTopTabWidgetController_TypeDefinitionIndex = 42199;

	class UIRABCityTopTabWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_E94A4778A096FF5C* get__viewModel()
		{
			return ((::Class_2_E94A4778A096FF5C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::UnityEngine::UI::Extension::UITabButton* GetTabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER_GETTABBUTTON_OFFSET))(this);
		}

		::System::Void RefreshView(::MoleMole::UIRABCityTopTabWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRABCityTopTabWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, context);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYTOPTABWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
