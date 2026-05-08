#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_321;
class Class_2_D9CBCCB8DC16621B;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowInfoEventAtlasWidgetController_EventData; }
namespace MoleMole { class UIHollowInfoEventiconItemWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_CREATESHOWEVENTDATA_OFFSET UNITYSDK_OFFSET(0x168AC960)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_INITDESCTEXT_OFFSET UNITYSDK_OFFSET(0x168AC250)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_INITEVENTSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x168AC2E0)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONCLICKPLAYBTN_OFFSET UNITYSDK_OFFSET(0x168ADC90)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x168AD0A0)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONGAMEPADMODULEDESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x168AD590)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x168AD1B0)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x168AD220)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x168AD400)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x168AD710)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x168AD130)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x168ABB60)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x168ABD70)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_SENDDELNEWCOLLECTICONREQUEST_OFFSET UNITYSDK_OFFSET(0x168AC4B0)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x168ADF30)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x168ADF90)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___BASE_ONGAMEPADMODULEDESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x168AE020)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x168AE0D0)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x168AE160)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x168AE1F0)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x168AE2A0)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x168AE330)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x168AE3C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowInfoEventAtlasWidgetController_TypeDefinitionIndex = 69347;

	class UIHollowInfoEventAtlasWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_D9CBCCB8DC16621B* _view; // 0x2B8
		::MoleMole::UIHollowInfoEventiconItemWidgetController* gamePadCruSelect; // 0x2C0
		::System::Collections::Generic::List_1<::MoleMole::UIHollowInfoEventAtlasWidgetController_EventData*>* _showEvent; // 0x2C8
		::System::Int32 _questID; // 0x2D0
		::Class_2_208CC9941471731A_321* _textureSheetTemplate; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void SendDelNewCollectIconRequest(::System::Collections::Generic::List_1<::MoleMole::UIHollowInfoEventAtlasWidgetController_EventData*>* showEvent, ::System::UInt32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIHollowInfoEventAtlasWidgetController_EventData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_SENDDELNEWCOLLECTICONREQUEST_OFFSET))(this, showEvent, questID);
		}

		::System::Void InitDescText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_INITDESCTEXT_OFFSET))(this);
		}

		::System::Void InitEventScrollView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_INITEVENTSCROLLVIEW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIHollowInfoEventAtlasWidgetController_EventData*>* CreateShowEventData()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIHollowInfoEventAtlasWidgetController_EventData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_CREATESHOWEVENTDATA_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnGamepadModuleDeselectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONGAMEPADMODULEDESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnItemSelect(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, index);
		}

		::System::Void OnClickPlayBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONCLICKPLAYBTN_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleDeselectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___BASE_ONGAMEPADMODULEDESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
