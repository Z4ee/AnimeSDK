#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIWORLDCONTAINERCONTROLLER_GET_ISIGNOREINPUT_OFFSET UNITYSDK_OFFSET(0x115973B0)
#define MOLEMOLE_UIWORLDCONTAINERCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x115973A0)
#define MOLEMOLE_UIWORLDCONTAINERCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x115974F0)
#define MOLEMOLE_UIWORLDCONTAINERCONTROLLER_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11597540)
#define MOLEMOLE_UIWORLDCONTAINERCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11597A20)
#define MOLEMOLE_UIWORLDCONTAINERCONTROLLER_SETCANVASDIRTY_OFFSET UNITYSDK_OFFSET(0x11597B20)
#define MOLEMOLE_UIWORLDCONTAINERCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x115973C0)
#define MOLEMOLE_UIWORLDCONTAINERCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11597B70)
#define MOLEMOLE_UIWORLDCONTAINERCONTROLLER__ONUIOPEN_B__6_0_OFFSET UNITYSDK_OFFSET(0x11597B80)
#define MOLEMOLE_UIWORLDCONTAINERCONTROLLER__ONUIOPEN_B__6_1_OFFSET UNITYSDK_OFFSET(0x11597BD0)
#define MOLEMOLE_UIWORLDCONTAINERCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11597C20)
#define MOLEMOLE_UIWORLDCONTAINERCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x11597CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorldContainerController_TypeDefinitionIndex = 74693;

	class UIWorldContainerController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Boolean _isDirty; // 0x318
		::UnityEngine::Vector3 _lastCameraPos; // 0x31C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDCONTAINERCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDCONTAINERCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsIgnoreInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDCONTAINERCONTROLLER_GET_ISIGNOREINPUT_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDCONTAINERCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDCONTAINERCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDCONTAINERCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDCONTAINERCONTROLLER_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void SetCanvasDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDCONTAINERCONTROLLER_SETCANVASDIRTY_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__6_0(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDCONTAINERCONTROLLER__ONUIOPEN_B__6_0_OFFSET))(this, _);
		}

		::System::Void _OnUIOpen_b__6_1(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDCONTAINERCONTROLLER__ONUIOPEN_B__6_1_OFFSET))(this, _);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDCONTAINERCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDCONTAINERCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
