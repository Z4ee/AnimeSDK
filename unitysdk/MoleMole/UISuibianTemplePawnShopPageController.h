#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_FABA87CF8DDBE583;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISUIBIANTEMPLEPAWNSHOPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17D5D6D0)
#define MOLEMOLE_UISUIBIANTEMPLEPAWNSHOPPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D5D6E0)
#define MOLEMOLE_UISUIBIANTEMPLEPAWNSHOPPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D5D750)
#define MOLEMOLE_UISUIBIANTEMPLEPAWNSHOPPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17D5D810)
#define MOLEMOLE_UISUIBIANTEMPLEPAWNSHOPPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D5D8A0)
#define MOLEMOLE_UISUIBIANTEMPLEPAWNSHOPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D5D960)
#define MOLEMOLE_UISUIBIANTEMPLEPAWNSHOPPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17D5D970)
#define MOLEMOLE_UISUIBIANTEMPLEPAWNSHOPPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17D5DA10)
#define MOLEMOLE_UISUIBIANTEMPLEPAWNSHOPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D5DA20)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTemplePawnShopPageController_TypeDefinitionIndex = 44749;

	class UISuibianTemplePawnShopPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPAWNSHOPPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPAWNSHOPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_FABA87CF8DDBE583* get__viewModel()
		{
			return ((::Class_2_FABA87CF8DDBE583*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPAWNSHOPPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPAWNSHOPPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPAWNSHOPPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPAWNSHOPPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPAWNSHOPPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPAWNSHOPPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPAWNSHOPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
