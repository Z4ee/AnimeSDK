#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_75FB4A09078427E5_4;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19786A70)
#define MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19786B00)
#define MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19786780)
#define MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER_OPENEDITORPANEL_OFFSET UNITYSDK_OFFSET(0x19786B80)
#define MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19786CD0)
#define MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19786D30)
#define MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19786DC0)
#define MOLEMOLE_UIBANGBOOTRANSFORMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19786E50)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooTransformWidgetController_TypeDefinitionIndex = 86214;

	class UIBangbooTransformWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_75FB4A09078427E5_4* _view; // 0x2C0

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
