#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_8AF049D3FC4ACD3E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x11C2A450)
#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11C2A460)
#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11C2A4D0)
#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x11C2A670)
#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x11C2A730)
#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x11C2A5C0)
#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11C2A570)
#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11C2A990)
#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11C2A9A0)
#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x11C2AA40)
#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x11C2AAD0)
#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x11C2AB00)
#define MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11C2AB10)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovCollectMedalPageController_TypeDefinitionIndex = 51393;

	class UIZenkovCollectMedalPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_8AF049D3FC4ACD3E* get__viewModel()
		{
			return ((::Class_2_8AF049D3FC4ACD3E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTMEDALPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
