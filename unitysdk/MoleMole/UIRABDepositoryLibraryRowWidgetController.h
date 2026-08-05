#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_68B3C7C1CC4BCC16;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIRABDEPOSITORYLIBRARYROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16A7E4E0)
#define MOLEMOLE_UIRABDEPOSITORYLIBRARYROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16A7E550)
#define MOLEMOLE_UIRABDEPOSITORYLIBRARYROWWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x16A7E7B0)
#define MOLEMOLE_UIRABDEPOSITORYLIBRARYROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16A7E5F0)
#define MOLEMOLE_UIRABDEPOSITORYLIBRARYROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A7E870)
#define MOLEMOLE_UIRABDEPOSITORYLIBRARYROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16A7E8D0)
#define MOLEMOLE_UIRABDEPOSITORYLIBRARYROWWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x16A7E970)
#define MOLEMOLE_UIRABDEPOSITORYLIBRARYROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16A7EA00)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryLibraryRowWidgetController_TypeDefinitionIndex = 69721;

	class UIRABDepositoryLibraryRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYLIBRARYROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_68B3C7C1CC4BCC16* get__viewModel()
		{
			return ((::Class_2_68B3C7C1CC4BCC16*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYLIBRARYROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYLIBRARYROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYLIBRARYROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYLIBRARYROWWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYLIBRARYROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYLIBRARYROWWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYLIBRARYROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
