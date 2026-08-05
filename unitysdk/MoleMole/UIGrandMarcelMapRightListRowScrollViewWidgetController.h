#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_3_B66133AB23374B20;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIGRANDMARCELMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18EC1680)
#define MOLEMOLE_UIGRANDMARCELMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18EC16F0)
#define MOLEMOLE_UIGRANDMARCELMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18EC17B0)
#define MOLEMOLE_UIGRANDMARCELMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EC1910)
#define MOLEMOLE_UIGRANDMARCELMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18EC1970)
#define MOLEMOLE_UIGRANDMARCELMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18EC1A10)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelMapRightListRowScrollViewWidgetController_TypeDefinitionIndex = 44448;

	class UIGrandMarcelMapRightListRowScrollViewWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_3_B66133AB23374B20* get__viewModel()
		{
			return ((::Class_3_B66133AB23374B20*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELMAPRIGHTLISTROWSCROLLVIEWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
