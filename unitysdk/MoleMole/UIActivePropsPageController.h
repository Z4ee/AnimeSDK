#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_2BEA9D62D0D61789;
class Class_2_208CC9941471731A_881;
class Class_2_79F6D62CE30E3F8E_16;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIActivePropsItemIconWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ATLEASTONETABUNLOCK_OFFSET UNITYSDK_OFFSET(0x1631D1E0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_BACKTOMAIN_OFFSET UNITYSDK_OFFSET(0x1631E1B0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0x1631C570)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_GETTABID_OFFSET UNITYSDK_OFFSET(0x1631D950)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_GETTABNAME_OFFSET UNITYSDK_OFFSET(0x1631D7B0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_GETTABUNLOCKID_OFFSET UNITYSDK_OFFSET(0x1631DAC0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1631C1C0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_HASTABCONTENT_OFFSET UNITYSDK_OFFSET(0x1631D380)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ISTABUNLOCK_OFFSET UNITYSDK_OFFSET(0x1631D670)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONCLICKTABBTN_OFFSET UNITYSDK_OFFSET(0x1631E2D0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1631C1D0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONGAMEPADMODULEDESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1631E0E0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x1631DCE0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x1631DD80)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1631DE20)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1631CF90)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1631D150)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1631C260)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_SORTTAB_OFFSET UNITYSDK_OFFSET(0x1631C730)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1631E850)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1631E900)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONGAMEPADMODULEDESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1631E990)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x1631EA40)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x1631EAD0)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1631EB60)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1631EC10)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1631EC40)
#define MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1631EC50)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivePropsPageController_TypeDefinitionIndex = 51144;

	class UIActivePropsPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_16* _view; // 0x310
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_881*>* iniItemTemplates; // 0x318
		::System::Int32 _curSelect; // 0x320
		::MoleMole::UIActivePropsItemIconWidgetController* _lastSelectItemCtrl; // 0x328
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_2BEA9D62D0D61789*>* widgets; // 0x330
		::Class_1_2BEA9D62D0D61789* currentOpenWiget; // 0x338
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UITabButton*>* _tabButtons; // 0x340
		::System::Collections::Generic::List_1<::MoleMole::NotificationBadge*>* _tabNotificationBadges; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		static ::System::Boolean AtLeastOneTabUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ATLEASTONETABUNLOCK_OFFSET))();
		}

		::System::String* GetTabName(::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_GETTABNAME_OFFSET))(this, index);
		}

		::System::Int32 GetTabID(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_GETTABID_OFFSET))(this, index);
		}

		static ::System::Int32 GetTabUnlockID(::System::Int32 index)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_GETTABUNLOCKID_OFFSET))(index);
		}

		::System::Void SortTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_SORTTAB_OFFSET))(this);
		}

		static ::System::Boolean HasTabContent(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_HASTABCONTENT_OFFSET))(index);
		}

		static ::System::Boolean IsTabUnlock(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ISTABUNLOCK_OFFSET))(index);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_BIND_OFFSET))(this);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnGamepadModuleDeselectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONGAMEPADMODULEDESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void BackToMain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_BACKTOMAIN_OFFSET))(this);
		}

		::System::Void OnClickTabBtn(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER_ONCLICKTABBTN_OFFSET))(this, index);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleDeselectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONGAMEPADMODULEDESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
