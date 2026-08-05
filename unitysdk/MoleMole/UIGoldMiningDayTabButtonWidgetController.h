#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_C31421CDE660CB44;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIGOLDMININGDAYTABBUTTONWIDGETCONTROLLER_GET_TABBTN_OFFSET UNITYSDK_OFFSET(0x18AE73E0)
#define MOLEMOLE_UIGOLDMININGDAYTABBUTTONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18AE74D0)
#define MOLEMOLE_UIGOLDMININGDAYTABBUTTONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18AE7560)
#define MOLEMOLE_UIGOLDMININGDAYTABBUTTONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18AE78A0)
#define MOLEMOLE_UIGOLDMININGDAYTABBUTTONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18AE7400)
#define MOLEMOLE_UIGOLDMININGDAYTABBUTTONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18AE7460)
#define MOLEMOLE_UIGOLDMININGDAYTABBUTTONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE7920)
#define MOLEMOLE_UIGOLDMININGDAYTABBUTTONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18AE7930)
#define MOLEMOLE_UIGOLDMININGDAYTABBUTTONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18AE79C0)
#define MOLEMOLE_UIGOLDMININGDAYTABBUTTONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18AE7A60)
#define MOLEMOLE_UIGOLDMININGDAYTABBUTTONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18AE7AF0)
#define MOLEMOLE_UIGOLDMININGDAYTABBUTTONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18AE7B80)

namespace MoleMole
{
	inline static constexpr unsigned int UIGoldMiningDayTabButtonWidgetController_TypeDefinitionIndex = 78986;

	class UIGoldMiningDayTabButtonWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_C31421CDE660CB44* _view; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTABBUTTONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITabButton* get_TabBtn()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTABBUTTONWIDGETCONTROLLER_GET_TABBTN_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTABBUTTONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTABBUTTONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTABBUTTONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTABBUTTONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTABBUTTONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTABBUTTONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTABBUTTONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTABBUTTONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTABBUTTONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTABBUTTONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
