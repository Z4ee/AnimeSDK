#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_53090FFE4AD71456;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIRABDEPOSITORYLIBRARYDESCWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16902370)
#define MOLEMOLE_UIRABDEPOSITORYLIBRARYDESCWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x169023E0)
#define MOLEMOLE_UIRABDEPOSITORYLIBRARYDESCWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x16902D10)
#define MOLEMOLE_UIRABDEPOSITORYLIBRARYDESCWIDGETCONTROLLER_ONITEMCHANGEHANDLE_OFFSET UNITYSDK_OFFSET(0x16902C20)
#define MOLEMOLE_UIRABDEPOSITORYLIBRARYDESCWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16902480)
#define MOLEMOLE_UIRABDEPOSITORYLIBRARYDESCWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x169032D0)
#define MOLEMOLE_UIRABDEPOSITORYLIBRARYDESCWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16903330)
#define MOLEMOLE_UIRABDEPOSITORYLIBRARYDESCWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x169033D0)
#define MOLEMOLE_UIRABDEPOSITORYLIBRARYDESCWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16903460)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryLibraryDescWidgetController_TypeDefinitionIndex = 54787;

	class UIRABDepositoryLibraryDescWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYLIBRARYDESCWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_53090FFE4AD71456* get__viewModel()
		{
			return ((::Class_2_53090FFE4AD71456*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYLIBRARYDESCWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYLIBRARYDESCWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYLIBRARYDESCWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnItemChangeHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYLIBRARYDESCWIDGETCONTROLLER_ONITEMCHANGEHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYLIBRARYDESCWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYLIBRARYDESCWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYLIBRARYDESCWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYLIBRARYDESCWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
