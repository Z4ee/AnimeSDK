#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_ED3BCE58A5804B4B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10EF8760)
#define MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10EF87D0)
#define MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x10EF8890)
#define MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER_RESETPOS_OFFSET UNITYSDK_OFFSET(0x10EF89F0)
#define MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10EF8A90)
#define MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x10EF8AF0)
#define MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x10EF8B90)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightListRowScrollViewWidgetController_TypeDefinitionIndex = 78235;

	class UIUrbanMapRightListRowScrollViewWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_ED3BCE58A5804B4B* get__viewModel()
		{
			return ((::Class_2_ED3BCE58A5804B4B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void ResetPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER_RESETPOS_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
