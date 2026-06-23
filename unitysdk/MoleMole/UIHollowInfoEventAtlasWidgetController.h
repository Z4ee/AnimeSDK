#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_965;
class Class_2_D9CBCCB8DC16621B;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowInfoEventAtlasWidgetController_EventData; }
namespace MoleMole { class UIHollowInfoEventiconItemWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_CREATESHOWEVENTDATA_OFFSET UNITYSDK_OFFSET(0x18495440)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_INITDESCTEXT_OFFSET UNITYSDK_OFFSET(0x18494CC0)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_INITEVENTSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x18494DC0)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONCLICKPLAYBTN_OFFSET UNITYSDK_OFFSET(0x184967F0)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18495B70)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONGAMEPADMODULEDESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18496060)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x18495C80)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x18495CF0)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18495ED0)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x184961E0)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18495C00)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184945C0)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x184947E0)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER_SENDDELNEWCOLLECTICONREQUEST_OFFSET UNITYSDK_OFFSET(0x18494F90)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18496AE0)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18496B40)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___BASE_ONGAMEPADMODULEDESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18496BD0)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x18496C80)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x18496D10)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18496DA0)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18496E50)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18496EE0)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18496F70)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowInfoEventAtlasWidgetController_TypeDefinitionIndex = 69050;

	class UIHollowInfoEventAtlasWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_D9CBCCB8DC16621B* _view; // 0x2C0
		::MoleMole::UIHollowInfoEventiconItemWidgetController* gamePadCruSelect; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UIHollowInfoEventAtlasWidgetController_EventData*>* _showEvent; // 0x2D0
		::System::Int32 _questID; // 0x2D8
		::Class_2_208CC9941471731A_965* _textureSheetTemplate; // 0x2E0

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
