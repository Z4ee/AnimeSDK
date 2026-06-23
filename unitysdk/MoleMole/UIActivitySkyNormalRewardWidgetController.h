#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_4ABAF46D011D7612;
class Class_3_BD954AEAE8F1A57B;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIActivitySkyRewardItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER_ENSUREREWARDWIDGETS_OFFSET UNITYSDK_OFFSET(0x1758F260)
#define MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1758ED70)
#define MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x1758F7F0)
#define MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x1758F780)
#define MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1758EE00)
#define MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1758EB80)
#define MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1758ED00)
#define MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1758F860)
#define MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0x1758F080)
#define MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x175901E0)
#define MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER__REFRESHVIEW_B__14_0_OFFSET UNITYSDK_OFFSET(0x175902E0)
#define MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER__TAKEREWARD_B__10_0_OFFSET UNITYSDK_OFFSET(0x175902C0)
#define MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x175903A0)
#define MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x17590430)
#define MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x175904C0)
#define MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17590550)
#define MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x175905E0)
#define MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17590670)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySkyNormalRewardWidgetController_TypeDefinitionIndex = 72598;

	class UIActivitySkyNormalRewardWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 RewardSlotCount = 0x3; // 0x0
		::Class_2_4ABAF46D011D7612* _view; // 0x2C0
		::Class_1_D375C91CCE5D3999* _rootActivity; // 0x2C8
		::Class_3_BD954AEAE8F1A57B* _task; // 0x2D0
		::System::Action* _callBack; // 0x2D8
		::System::Collections::Generic::List_1<::MoleMole::UIActivitySkyRewardItemWidgetController*>* _rewardItemWidgets; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void TakeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER_TAKEREWARD_OFFSET))(this);
		}

		::System::Void EnsureRewardWidgets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER_ENSUREREWARDWIDGETS_OFFSET))(this);
		}

		::System::Void OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void RefreshView(::Class_3_BD954AEAE8F1A57B* task, ::System::Action* takeRewardCallback, ::System::String* tagText)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_BD954AEAE8F1A57B*, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, task, takeRewardCallback, tagText);
		}

		::System::Void _TakeReward_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER__TAKEREWARD_B__10_0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER__REFRESHVIEW_B__14_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYNORMALREWARDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
