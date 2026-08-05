#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19C9D8E0)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19C9DA00)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19C9DA50)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19C9DAE0)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19C9D8F0)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19C9D940)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19C9DB30)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19C9DB70)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER__ONUIOPEN_B__5_0_OFFSET UNITYSDK_OFFSET(0x19C9DB80)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19C9DD00)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19C9DD10)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19C9DDD0)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19C9DDE0)
#define MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19C9DDF0)

namespace MoleMole
{
	inline static constexpr unsigned int UILoginVagueBgDialogController_TypeDefinitionIndex = 70582;

	class UILoginVagueBgDialogController : public ::MoleMole::UIWindowController
	{
	public:
		::UnityEngine::GameObject* vebView; // 0x318
		::System::Boolean isOpenWebView; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__5_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER__ONUIOPEN_B__5_0_OFFSET))(this, args);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINVAGUEBGDIALOGCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
