#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_F922D0FFB5C0528C;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIURBANMAPHUDLOCALPLAYERWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15A71B40)
#define MOLEMOLE_UIURBANMAPHUDLOCALPLAYERWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15A71BB0)
#define MOLEMOLE_UIURBANMAPHUDLOCALPLAYERWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15A71C70)
#define MOLEMOLE_UIURBANMAPHUDLOCALPLAYERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15A71CE0)
#define MOLEMOLE_UIURBANMAPHUDLOCALPLAYERWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15A71D40)
#define MOLEMOLE_UIURBANMAPHUDLOCALPLAYERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15A71DE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapHUDLocalPlayerWidgetController_TypeDefinitionIndex = 91047;

	class UIUrbanMapHUDLocalPlayerWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDLOCALPLAYERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_F922D0FFB5C0528C* get__viewModel()
		{
			return ((::Class_2_F922D0FFB5C0528C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDLOCALPLAYERWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDLOCALPLAYERWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDLOCALPLAYERWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDLOCALPLAYERWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDLOCALPLAYERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
