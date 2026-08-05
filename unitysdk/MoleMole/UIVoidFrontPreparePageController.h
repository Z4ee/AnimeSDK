#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_65431B70BEB038E5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15ED10F0)
#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15ED1100)
#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15ED1170)
#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15ED14C0)
#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15ED13D0)
#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15ED1230)
#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15ED12E0)
#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED15A0)
#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15ED15B0)
#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15ED1650)
#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15ED1660)
#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15ED1720)
#define MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15ED1730)

namespace MoleMole
{
	inline static constexpr unsigned int UIVoidFrontPreparePageController_TypeDefinitionIndex = 51611;

	class UIVoidFrontPreparePageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_65431B70BEB038E5* get__viewModel()
		{
			return ((::Class_2_65431B70BEB038E5*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVOIDFRONTPREPAREPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
