#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_3AC406B7A7149EA7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01ROLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15EBE770)
#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01ROLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15EBE7E0)
#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01ROLEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15EBE8A0)
#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01ROLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15EBEA00)
#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01ROLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15EBEA60)
#define MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01ROLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15EBEB00)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapLeftTastListRow01RoleWidgetController_TypeDefinitionIndex = 73359;

	class UIUrbanMapLeftTastListRow01RoleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01ROLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_3AC406B7A7149EA7* get__viewModel()
		{
			return ((::Class_2_3AC406B7A7149EA7*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01ROLEWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01ROLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01ROLEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01ROLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTTASTLISTROW01ROLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
