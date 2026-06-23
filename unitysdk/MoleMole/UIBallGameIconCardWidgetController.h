#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_48D56DACBE4271BC;
class Class_2_029DB61F30C2C694;
class Class_3_6F28FFD006F2B451;
class ShaderAniHelp;
namespace MoleMole { class UIBallGameIconCardRow02WidgetController; }
namespace MoleMole { class UIBallGameIconCardWidgetController_UIState; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x1D9B9810)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_INITBULLET_OFFSET UNITYSDK_OFFSET(0x1D9B9250)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_ONBALLPITCHOICEUPGRADEBULLET_OFFSET UNITYSDK_OFFSET(0x1D9B9F20)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_ONBALLPITLEVELRESTART_OFFSET UNITYSDK_OFFSET(0x1D9B9EB0)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_ONBALLPITPLAYEREXPCHANGE_OFFSET UNITYSDK_OFFSET(0x1D9B9A00)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_ONBALLPITREFRESHBULLET_OFFSET UNITYSDK_OFFSET(0x1D9B9A50)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1D9B96F0)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1D9B9780)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1D9B87C0)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1D9B8BB0)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_ONUPGRADE_OFFSET UNITYSDK_OFFSET(0x1D9B98D0)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_REFRESHBULLET_OFFSET UNITYSDK_OFFSET(0x1D9B9AA0)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_REFRESHEXP_OFFSET UNITYSDK_OFFSET(0x1D9B8D70)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_SETSELECT_OFFSET UNITYSDK_OFFSET(0x1D9B9F90)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9BA1B0)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER__ONUIINIT_B__8_0_OFFSET UNITYSDK_OFFSET(0x1D9BA290)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER__ONUIINIT_B__8_1_OFFSET UNITYSDK_OFFSET(0x1D9BA420)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER__ONUIOPEN_B__9_0_OFFSET UNITYSDK_OFFSET(0x1D9BA530)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x1D9BA6F0)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1D9BA780)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1D9BA810)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1D9BA8A0)
#define MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1D9BA930)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameIconCardWidgetController_TypeDefinitionIndex = 89480;

	class UIBallGameIconCardWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_029DB61F30C2C694* _view; // 0x2C0
		::MoleMole::UIBallGameIconCardWidgetController_UIState* uiState; // 0x2C8
		::Class_1_48D56DACBE4271BC* syncHelper; // 0x2D0
		::Class_3_6F28FFD006F2B451* world; // 0x2D8
		::ShaderAniHelp* LinearProgressBar; // 0x2E0
		::System::Boolean fromOptions; // 0x2E8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIBallGameIconCardRow02WidgetController*>* bulletSlots; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnUpgrade(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_ONUPGRADE_OFFSET))(this, args);
		}

		::System::Void OnBallPitPlayerExpChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_ONBALLPITPLAYEREXPCHANGE_OFFSET))(this, args);
		}

		::System::Void OnBallPitRefreshBullet(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_ONBALLPITREFRESHBULLET_OFFSET))(this, args);
		}

		::System::Void OnBallPitLevelRestart(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_ONBALLPITLEVELRESTART_OFFSET))(this, args);
		}

		::System::Void RefreshExp(::System::Boolean useAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_REFRESHEXP_OFFSET))(this, useAnim);
		}

		::System::Void InitBullet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_INITBULLET_OFFSET))(this);
		}

		::System::Void RefreshBullet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_REFRESHBULLET_OFFSET))(this);
		}

		::System::Void OnBallPitChoiceUpgradeBullet(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_ONBALLPITCHOICEUPGRADEBULLET_OFFSET))(this, args);
		}

		::System::Void SetSelect(::System::Int32 bulletID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER_SETSELECT_OFFSET))(this, bulletID);
		}

		::System::Void _OnUIInit_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER__ONUIINIT_B__8_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER__ONUIINIT_B__8_1_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER__ONUIOPEN_B__9_0_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEICONCARDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
