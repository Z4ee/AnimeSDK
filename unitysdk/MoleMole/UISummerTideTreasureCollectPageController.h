#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_7306CBC7CD10084D;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISUMMERTIDETREASURECOLLECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15130920)
#define MOLEMOLE_UISUMMERTIDETREASURECOLLECTPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15130930)
#define MOLEMOLE_UISUMMERTIDETREASURECOLLECTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x151309A0)
#define MOLEMOLE_UISUMMERTIDETREASURECOLLECTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15130A40)
#define MOLEMOLE_UISUMMERTIDETREASURECOLLECTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15130C70)
#define MOLEMOLE_UISUMMERTIDETREASURECOLLECTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15130C80)
#define MOLEMOLE_UISUMMERTIDETREASURECOLLECTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15130D20)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureCollectPageController_TypeDefinitionIndex = 86123;

	class UISummerTideTreasureCollectPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECOLLECTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECOLLECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_7306CBC7CD10084D* get__viewModel()
		{
			return ((::Class_2_7306CBC7CD10084D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECOLLECTPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECOLLECTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECOLLECTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECOLLECTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURECOLLECTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
