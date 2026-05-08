#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_75FB4A09078427E5;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15640100)
#define MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15640190)
#define MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1563FE10)
#define MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER_OPENEDITORPANEL_OFFSET UNITYSDK_OFFSET(0x15640210)
#define MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15640360)
#define MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x156403C0)
#define MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15640450)
#define MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x156404E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooTransformWidgetController_TypeDefinitionIndex = 66296;

	class UIBangbooTransformWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_75FB4A09078427E5* _view; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OpenEditorPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER_OPENEDITORPANEL_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
