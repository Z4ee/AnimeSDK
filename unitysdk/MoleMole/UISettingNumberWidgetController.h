#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_62971080CDAAC791.h"
#include "unitysdk/Enum_3_7FA27888FA17A22A.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_76BDA31962EF0DA3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x184682A0)
#define MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18467F80)
#define MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER_ONSETTINGONUIDISABLESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x18469680)
#define MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER_ONSLIDERVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x184692B0)
#define MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184686B0)
#define MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18468010)
#define MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER_OVERRIDESOUNDCONFIG_OFFSET UNITYSDK_OFFSET(0x18468E70)
#define MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER_REFRESHNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x18468730)
#define MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER_REFRESHSETTINGONUIDISABLESTATE_OFFSET UNITYSDK_OFFSET(0x18468C80)
#define MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18468890)
#define MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18469730)
#define MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER__ONUIOPEN_B__2_0_OFFSET UNITYSDK_OFFSET(0x18469790)
#define MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18469800)
#define MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18469890)
#define MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18469920)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingNumberWidgetController_TypeDefinitionIndex = 76603;

	class UISettingNumberWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_76BDA31962EF0DA3* _view; // 0x2C0
		::System::Boolean _isSettingOnUIDisable; // 0x2C8
		::Enum_3_62971080CDAAC791 _UISettingNumberType; // 0x2CC
		::Enum_3_7FA27888FA17A22A _settingContentType; // 0x2D0
		::MoleMole::ESystemSettingType _settingType; // 0x2D4
		::System::Single _minValue; // 0x2D8
		::System::Single _maxValue; // 0x2DC
		::System::Int32 _hintVersion; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshNotificationNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER_REFRESHNOTIFICATIONNODE_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Boolean isReset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, isReset);
		}

		::System::Void OverrideSoundConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER_OVERRIDESOUNDCONFIG_OFFSET))(this);
		}

		::System::Void OnSliderValueChanged(::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER_ONSLIDERVALUECHANGED_OFFSET))(this, ratio);
		}

		::System::Void OnSettingOnUIDisableStateChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER_ONSETTINGONUIDISABLESTATECHANGED_OFFSET))(this, args);
		}

		::System::Void RefreshSettingOnUIDisableState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER_REFRESHSETTINGONUIDISABLESTATE_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__2_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER__ONUIOPEN_B__2_0_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGNUMBERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
