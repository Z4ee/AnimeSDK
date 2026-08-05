#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_448CECD21B5ECB2E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIRABCITYMISSIONPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17A19980)
#define MOLEMOLE_UIRABCITYMISSIONPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17A19990)
#define MOLEMOLE_UIRABCITYMISSIONPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17A19A00)
#define MOLEMOLE_UIRABCITYMISSIONPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17A19D40)
#define MOLEMOLE_UIRABCITYMISSIONPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17A19AA0)
#define MOLEMOLE_UIRABCITYMISSIONPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A19E30)
#define MOLEMOLE_UIRABCITYMISSIONPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17A19E40)
#define MOLEMOLE_UIRABCITYMISSIONPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x17A19EE0)
#define MOLEMOLE_UIRABCITYMISSIONPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17A19FA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABCityMissionPageController_TypeDefinitionIndex = 49197;

	class UIRABCityMissionPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYMISSIONPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYMISSIONPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_448CECD21B5ECB2E* get__viewModel()
		{
			return ((::Class_2_448CECD21B5ECB2E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYMISSIONPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYMISSIONPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYMISSIONPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYMISSIONPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYMISSIONPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYMISSIONPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABCITYMISSIONPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
