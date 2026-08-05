#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_BE69379A14124A86_4;
namespace MoleMole { class UIControlReference; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10AF7720)
#define MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10AF77B0)
#define MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10AF76C0)
#define MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x10AF78C0)
#define MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER_SETEMPTYSTATE_OFFSET UNITYSDK_OFFSET(0x10AF7830)
#define MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10AF7F80)
#define MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10AF7FE0)
#define MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10AF8070)
#define MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x10AF8100)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovMissionRowWidgetController_TypeDefinitionIndex = 49194;

	class UIZenkovMissionRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_BE69379A14124A86_4* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetEmptyState(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER_SETEMPTYSTATE_OFFSET))(this, state);
		}

		::System::Void SetData(::System::Int32 itemId, ::System::Int32 needNum, ::UnityEngine::Transform* root)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER_SETDATA_OFFSET))(this, itemId, needNum, root);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
