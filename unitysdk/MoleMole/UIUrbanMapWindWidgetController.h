#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UITwoDMapElement_UIController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_077CAE93E17BF63C;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIURBANMAPWINDWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x156D7CB0)
#define MOLEMOLE_UIURBANMAPWINDWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x156D7D20)
#define MOLEMOLE_UIURBANMAPWINDWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x156D7DC0)
#define MOLEMOLE_UIURBANMAPWINDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x156D7F70)
#define MOLEMOLE_UIURBANMAPWINDWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x156D7FD0)
#define MOLEMOLE_UIURBANMAPWINDWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x156D8070)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapWindWidgetController_TypeDefinitionIndex = 58973;

	class UIUrbanMapWindWidgetController : public ::MoleMole::UITwoDMapElement_UIController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPWINDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_077CAE93E17BF63C* get__viewModel()
		{
			return ((::Class_2_077CAE93E17BF63C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPWINDWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPWINDWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPWINDWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPWINDWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPWINDWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
