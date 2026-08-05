#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_069230FFBF2AB924;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIURBANMAPRIGHTLISTROWBOSSWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x161040F0)
#define MOLEMOLE_UIURBANMAPRIGHTLISTROWBOSSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16104160)
#define MOLEMOLE_UIURBANMAPRIGHTLISTROWBOSSWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16104200)
#define MOLEMOLE_UIURBANMAPRIGHTLISTROWBOSSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x161043C0)
#define MOLEMOLE_UIURBANMAPRIGHTLISTROWBOSSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16104420)
#define MOLEMOLE_UIURBANMAPRIGHTLISTROWBOSSWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x161044C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightListRowBossWidgetController_TypeDefinitionIndex = 41725;

	class UIUrbanMapRightListRowBossWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWBOSSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_069230FFBF2AB924* get__viewModel()
		{
			return ((::Class_2_069230FFBF2AB924*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWBOSSWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWBOSSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWBOSSWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWBOSSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWBOSSWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
