#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_A8A74F08EAF7BDC8;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIURBANMAPRIGHTLISTWISHLISTROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16787870)
#define MOLEMOLE_UIURBANMAPRIGHTLISTWISHLISTROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x167878E0)
#define MOLEMOLE_UIURBANMAPRIGHTLISTWISHLISTROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16787980)
#define MOLEMOLE_UIURBANMAPRIGHTLISTWISHLISTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16787B40)
#define MOLEMOLE_UIURBANMAPRIGHTLISTWISHLISTROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16787BA0)
#define MOLEMOLE_UIURBANMAPRIGHTLISTWISHLISTROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16787C40)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightListWishListRowWidgetController_TypeDefinitionIndex = 62587;

	class UIUrbanMapRightListWishListRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTWISHLISTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_A8A74F08EAF7BDC8* get__viewModel()
		{
			return ((::Class_2_A8A74F08EAF7BDC8*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTWISHLISTROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTWISHLISTROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTWISHLISTROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTWISHLISTROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTLISTWISHLISTROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
