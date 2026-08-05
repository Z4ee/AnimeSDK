#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_D6BCF098B26738D7_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMechBooReformTaskRowWidgetControllerContext; }

#define MOLEMOLE_UIMECHBOOREFORMTASKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17AF2CE0)
#define MOLEMOLE_UIMECHBOOREFORMTASKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17AF2D70)
#define MOLEMOLE_UIMECHBOOREFORMTASKROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17AF2850)
#define MOLEMOLE_UIMECHBOOREFORMTASKROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17AF28B0)
#define MOLEMOLE_UIMECHBOOREFORMTASKROWWIDGETCONTROLLER_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x17AF2920)
#define MOLEMOLE_UIMECHBOOREFORMTASKROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF2DF0)
#define MOLEMOLE_UIMECHBOOREFORMTASKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17AF2E50)
#define MOLEMOLE_UIMECHBOOREFORMTASKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17AF2EE0)
#define MOLEMOLE_UIMECHBOOREFORMTASKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17AF2F70)
#define MOLEMOLE_UIMECHBOOREFORMTASKROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17AF3000)

namespace MoleMole
{
	inline static constexpr unsigned int UIMechBooReformTaskRowWidgetController_TypeDefinitionIndex = 72468;

	class UIMechBooReformTaskRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_D6BCF098B26738D7_1* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMTASKROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMTASKROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMTASKROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void RefreshUI(::MoleMole::UIMechBooReformTaskRowWidgetControllerContext* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMechBooReformTaskRowWidgetControllerContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMTASKROWWIDGETCONTROLLER_REFRESHUI_OFFSET))(this, ctx);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMTASKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMTASKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMTASKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMTASKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMTASKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMECHBOOREFORMTASKROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
