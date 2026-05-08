#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_30699CF8F6AD2FA0_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER_INITRANKUI_OFFSET UNITYSDK_OFFSET(0x12F3A870)
#define MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12F3A760)
#define MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12F3A7F0)
#define MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12F3A690)
#define MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12F3A6F0)
#define MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER_PLAYREACHRANKANIM_OFFSET UNITYSDK_OFFSET(0x12F3ABA0)
#define MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER_PLAYSSRANKANIM_OFFSET UNITYSDK_OFFSET(0x12F3AD30)
#define MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER_RESETUI_OFFSET UNITYSDK_OFFSET(0x12F3A8F0)
#define MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER_SETUPUIPOSITION_OFFSET UNITYSDK_OFFSET(0x12F3AE00)
#define MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12F3B460)
#define MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12F3B4C0)
#define MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12F3B510)
#define MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12F3B550)
#define MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12F3B590)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityRhythmRankWidgetController_TypeDefinitionIndex = 57242;

	class UIActivityRhythmRankWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_30699CF8F6AD2FA0_1* _view; // 0x2B8
		::System::String* _overrideRankAnim; // 0x2C0
		::System::String* _overrideFullComboRankAnim; // 0x2C8
		::System::Boolean _isFullComboUI; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitRankUI(::System::Boolean isFullCombo, ::System::String* overrideRankAnim, ::System::String* overrideFullComboRankAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER_INITRANKUI_OFFSET))(this, isFullCombo, overrideRankAnim, overrideFullComboRankAnim);
		}

		::System::Void ResetUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER_RESETUI_OFFSET))(this);
		}

		::System::Void PlayReachRankAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER_PLAYREACHRANKANIM_OFFSET))(this);
		}

		::System::Void PlaySSRankAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER_PLAYSSRANKANIM_OFFSET))(this);
		}

		::System::Void SetupUIPosition(::System::Single progressValue, ::System::Single maxProgressValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER_SETUPUIPOSITION_OFFSET))(this, progressValue, maxProgressValue);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMRANKWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
