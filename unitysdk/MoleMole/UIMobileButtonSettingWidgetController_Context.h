#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PanelPositionType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PanelType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_SceneType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UserLocalDataItem_OverrideMobileButtonPanel_Enum_3_1165E7D2ED66927D.h"

namespace MoleMole { class ConfigUICommon_Input_ConfigMobilePanelLayout; }
namespace MoleMole { class UserLocalDataItem_OverrideMobileButtonPanel; }

#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_CONTEXT_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x16945980)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_CONTEXT_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x16945900)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_CONTEXT_GET_OVERRIDEMOBILEBUTTONPANEL_OFFSET UNITYSDK_OFFSET(0x16945480)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_CONTEXT_GET_RUNTIMEVALUE_OFFSET UNITYSDK_OFFSET(0x16945780)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_CONTEXT_SET_RUNTIMEVALUE_OFFSET UNITYSDK_OFFSET(0x16945830)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16945580)

namespace MoleMole
{
	inline static constexpr unsigned int UIMobileButtonSettingWidgetController_Context_TypeDefinitionIndex = 57580;

	class UIMobileButtonSettingWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::ConfigUICommon_Input_ConfigMobilePanelLayout* ConfigMobileSettingLayout; // 0x28
		::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel_Enum_3_1165E7D2ED66927D type; // 0x30
		::MoleMole::ConfigUICommon_Input_PanelType panelType; // 0x34

		::System::Void _ctor(::MoleMole::ConfigUICommon_Input_SceneType sceneType, ::MoleMole::ConfigUICommon_Input_PanelPositionType positionType, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel_Enum_3_1165E7D2ED66927D settingType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_SceneType, ::MoleMole::ConfigUICommon_Input_PanelPositionType, ::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel_Enum_3_1165E7D2ED66927D))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this, sceneType, positionType, settingType);
		}

		::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* get_OverrideMobileButtonPanel()
		{
			return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_CONTEXT_GET_OVERRIDEMOBILEBUTTONPANEL_OFFSET))(this);
		}

		::System::Int32 get_runtimeValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_CONTEXT_GET_RUNTIMEVALUE_OFFSET))(this);
		}

		::System::Void set_runtimeValue(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_CONTEXT_SET_RUNTIMEVALUE_OFFSET))(this, value);
		}

		::System::Int32 get_minValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_CONTEXT_GET_MINVALUE_OFFSET))(this);
		}

		::System::Int32 get_maxValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_CONTEXT_GET_MAXVALUE_OFFSET))(this);
		}
	};
}
