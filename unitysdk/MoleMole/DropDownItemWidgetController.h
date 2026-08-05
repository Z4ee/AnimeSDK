#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDropdownOptionContext; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_DROPDOWNITEMWIDGETCONTROLLER_GETINDEX_OFFSET UNITYSDK_OFFSET(0x162773E0)
#define MOLEMOLE_DROPDOWNITEMWIDGETCONTROLLER_GETUITABBUTTON_OFFSET UNITYSDK_OFFSET(0x162772C0)
#define MOLEMOLE_DROPDOWNITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16277300)
#define MOLEMOLE_DROPDOWNITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16277430)
#define MOLEMOLE_DROPDOWNITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16277490)

namespace MoleMole
{
	inline static constexpr unsigned int DropDownItemWidgetController_TypeDefinitionIndex = 60636;

	class DropDownItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Int32 _index; // 0x2C0
		::MoleMole::UIGeneralDropdownOptionContext* _dropdownContext; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DROPDOWNITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITabButton* GetUITabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DROPDOWNITEMWIDGETCONTROLLER_GETUITABBUTTON_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_DROPDOWNITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Int32 GetIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DROPDOWNITEMWIDGETCONTROLLER_GETINDEX_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_DROPDOWNITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
