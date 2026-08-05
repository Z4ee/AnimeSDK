#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_ED4ACA5DF24CB4D6;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISUMMERFISHINGCOLLECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x10EF0510)
#define MOLEMOLE_UISUMMERFISHINGCOLLECTPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10EF0520)
#define MOLEMOLE_UISUMMERFISHINGCOLLECTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10EF0590)
#define MOLEMOLE_UISUMMERFISHINGCOLLECTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10EF0650)
#define MOLEMOLE_UISUMMERFISHINGCOLLECTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10EF0700)
#define MOLEMOLE_UISUMMERFISHINGCOLLECTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10EF0710)
#define MOLEMOLE_UISUMMERFISHINGCOLLECTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10EF07B0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishingCollectPageController_TypeDefinitionIndex = 45791;

	class UISummerFishingCollectPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGCOLLECTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGCOLLECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_ED4ACA5DF24CB4D6* get__viewModel()
		{
			return ((::Class_2_ED4ACA5DF24CB4D6*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGCOLLECTPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGCOLLECTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGCOLLECTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGCOLLECTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHINGCOLLECTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
