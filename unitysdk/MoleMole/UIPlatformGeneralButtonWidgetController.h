#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_C88835FB721E7393;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralButtonController; }

#define MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER_GET_GENERALBUTTONCONTROLLER_OFFSET UNITYSDK_OFFSET(0x13FEE110)
#define MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13FEE180)
#define MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13FEE1F0)
#define MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13FEE290)
#define MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13FEE4C0)
#define MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x13FEE520)
#define MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x13FEE5C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlatformGeneralButtonWidgetController_TypeDefinitionIndex = 57077;

	class UIPlatformGeneralButtonWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIGeneralButtonController* get_GeneralButtonController()
		{
			return ((::MoleMole::UIGeneralButtonController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER_GET_GENERALBUTTONCONTROLLER_OFFSET))(this);
		}

		::Class_2_C88835FB721E7393* get__viewModel()
		{
			return ((::Class_2_C88835FB721E7393*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLATFORMGENERALBUTTONWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
