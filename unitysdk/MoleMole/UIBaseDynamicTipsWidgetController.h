#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_CLOSEPARENT_OFFSET UNITYSDK_OFFSET(0x152EC450)
#define MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_GETLOCATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x152EC620)
#define MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_GET_ENABLEPOSITIONTICK_OFFSET UNITYSDK_OFFSET(0x152EC360)
#define MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_GET_ISCLICKMASKTOCLOSE_OFFSET UNITYSDK_OFFSET(0x152EC340)
#define MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_GET_POSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x152EC350)
#define MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_ONREFRESHWIDGETROOTPOSITION_OFFSET UNITYSDK_OFFSET(0x152EC660)
#define MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x152EC400)
#define MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x152EC370)
#define MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_SETPARENTCTRL_OFFSET UNITYSDK_OFFSET(0x152EC5D0)
#define MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x152EC6A0)
#define MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x152EC700)
#define MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x152EC790)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseDynamicTipsWidgetController_TypeDefinitionIndex = 58387;

	class UIBaseDynamicTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::MoleMole::UIGeneralDynamicTipsPopWindowController* _parentDynamicTipCtrl; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsClickMaskToClose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_GET_ISCLICKMASKTOCLOSE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_PositionOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_GET_POSITIONOFFSET_OFFSET))(this);
		}

		::System::Boolean get_EnablePositionTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_GET_ENABLEPOSITIONTICK_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetParentCtrl(::MoleMole::UIGeneralDynamicTipsPopWindowController* parent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralDynamicTipsPopWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_SETPARENTCTRL_OFFSET))(this, parent);
		}

		::UnityEngine::Transform* GetLocateTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_GETLOCATETRANSFORM_OFFSET))(this);
		}

		::System::Void OnRefreshWidgetRootPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_ONREFRESHWIDGETROOTPOSITION_OFFSET))(this);
		}

		::System::Void CloseParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER_CLOSEPARENT_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASEDYNAMICTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
