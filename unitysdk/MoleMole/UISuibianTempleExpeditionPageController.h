#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_7287219DC64CD06D.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_72108342D7142693_Class_1_D8C08C94211C11A1;
class Class_2_4D622B218CCBC1D6;
class Class_2_79AE422BA06F6D26_24;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class SuibianTempleExpeditionContext; }
namespace MoleMole { class UIAllroundGeneralTutorialPopWindowController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIExpeditionTeamRowWidgetController; }
namespace MoleMole { class UISuibianTempleExpeditionAreaWidgetController; }
namespace MoleMole { class UISuibianTempleInfoWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_BUILDMAP_OFFSET UNITYSDK_OFFSET(0x14C15030)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_CANCELAREAFOCUS_OFFSET UNITYSDK_OFFSET(0x14C17A20)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_CREATETEAM_OFFSET UNITYSDK_OFFSET(0x14C15460)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ENABLETEAMLIST_OFFSET UNITYSDK_OFFSET(0x14C17D90)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_FINDAREAGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x14C15FC0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x14C14470)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14C14460)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_INITGAMEPADNAV_OFFSET UNITYSDK_OFFSET(0x14C155B0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_MOVETOCENTER_OFFSET UNITYSDK_OFFSET(0x14C16200)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONCHANGEEXPEITIONDAREA_OFFSET UNITYSDK_OFFSET(0x14C179B0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C14480)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONDISPATCHINGAREA_OFFSET UNITYSDK_OFFSET(0x14C17200)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONFOCUSAREA_1_OFFSET UNITYSDK_OFFSET(0x14C17150)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONFOCUSAREA_OFFSET UNITYSDK_OFFSET(0x14C15800)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONGAMEPADMODULEDESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x14C15F40)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x14C17CA0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x14C15EC0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x14C17390)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14C14D00)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONSUCCESSDISPATCHING_OFFSET UNITYSDK_OFFSET(0x14C17820)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONTEMPLEJUMPDATASTORE_OFFSET UNITYSDK_OFFSET(0x14C14BB0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C15D00)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C14510)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_OPENINFOBTN_OFFSET UNITYSDK_OFFSET(0x14C18160)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_OPENINFO_OFFSET UNITYSDK_OFFSET(0x14C169D0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_OPENTEAMPREVIEW_OFFSET UNITYSDK_OFFSET(0x14C164F0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_RESET_OFFSET UNITYSDK_OFFSET(0x14C18300)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_RESTOREPARAS_OFFSET UNITYSDK_OFFSET(0x14C18350)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_SETTEAMINFO_OFFSET UNITYSDK_OFFSET(0x14C15350)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C18580)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C18430)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER__ENABLETEAMLIST_B__35_0_OFFSET UNITYSDK_OFFSET(0x14C18800)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER__ONUIINIT_B__18_0_OFFSET UNITYSDK_OFFSET(0x14C18590)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER__ONUIINIT_B__18_1_OFFSET UNITYSDK_OFFSET(0x14C18690)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER__ONUIINIT_B__18_2_OFFSET UNITYSDK_OFFSET(0x14C186A0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER__ONUIINIT_B__18_3_OFFSET UNITYSDK_OFFSET(0x14C187F0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C18900)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___BASE_ONGAMEPADMODULEDESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x14C18990)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x14C18A40)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x14C18B80)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x14C18AD0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14C18C30)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C18C40)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C18C50)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleExpeditionPageController_TypeDefinitionIndex = 56069;

	class UISuibianTempleExpeditionPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Boolean* StaticGet_IsOpenConfigNav()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleExpeditionPageController_TypeDefinitionIndex)->GetStaticField(0xC5B0);
		}
		// static const ::System::String* TeamListAniFadeIn; // 0x0
		// static const ::System::String* TeamListAniFadeOut; // 0x0
		::Class_2_79AE422BA06F6D26_24* _view; // 0x310
		::MoleMole::SuibianTempleExpeditionContext* _context; // 0x318
		::Class_2_4D622B218CCBC1D6* _model; // 0x320
		::MoleMole::UISuibianTempleInfoWidgetController* _pointInfoWidget; // 0x328
		::System::Collections::Generic::List_1<::MoleMole::UISuibianTempleExpeditionAreaWidgetController*>* _areaWidgetControllers; // 0x330
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* spaceItemList; // 0x338
		::System::Collections::Generic::List_1<::MoleMole::UIExpeditionTeamRowWidgetController*>* _teams; // 0x340
		::MoleMole::UIAllroundGeneralTutorialPopWindowController* _popInfo; // 0x348
		::MoleMole::MonoGamepadSpaceList* _gamepadSpaceList; // 0x350
		::System::Int32 consoleCurrentSelectAreaID; // 0x358
		::System::Int32 curAreaID; // 0x35C
		::System::Int32 curLayerID; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_7287219DC64CD06D get_Type()
		{
			return ((::Enum_3_7287219DC64CD06D(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_GET_TYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnTempleJumpDataStore(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONTEMPLEJUMPDATASTORE_OFFSET))(this, args);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnGamepadModuleSelectIndexFromInput(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnGamepadModuleDeselectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONGAMEPADMODULEDESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void InitGamePadNav()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_INITGAMEPADNAV_OFFSET))(this);
		}

		::UnityEngine::GameObject* FindAreaGameObject(::System::Int32 areaID)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_FINDAREAGAMEOBJECT_OFFSET))(this, areaID);
		}

		::System::Void MoveToCenter(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_MOVETOCENTER_OFFSET))(this, rectTransform);
		}

		::System::Void OnFocusArea(::System::Int32 areaID, ::System::Int32 layerID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONFOCUSAREA_OFFSET))(this, areaID, layerID);
		}

		::System::Void OnFocusArea_1(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONFOCUSAREA_1_OFFSET))(this, arg);
		}

		::System::Void OnDispatchingArea(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONDISPATCHINGAREA_OFFSET))(this, arg);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnSuccessDispatching(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONSUCCESSDISPATCHING_OFFSET))(this, arg);
		}

		::System::Void OnChangeExpeitiondArea(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONCHANGEEXPEITIONDAREA_OFFSET))(this, arg);
		}

		::System::Void CancelAreaFocus(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_CANCELAREAFOCUS_OFFSET))(this, arg);
		}

		::System::Void OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void EnableTeamList(::System::Boolean enable, ::System::Action* call)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ENABLETEAMLIST_OFFSET))(this, enable, call);
		}

		::System::Void OpenInfo(::System::Int32 areaID, ::System::Int32 layerID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_OPENINFO_OFFSET))(this, areaID, layerID);
		}

		::System::Void SetTeamInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_SETTEAMINFO_OFFSET))(this);
		}

		::System::Void CreateTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_CREATETEAM_OFFSET))(this);
		}

		::System::Void BuildMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_BUILDMAP_OFFSET))(this);
		}

		::System::Void OpenInfoBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_OPENINFOBTN_OFFSET))(this);
		}

		::System::Void OpenTeamPreview(::System::Action* call)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_OPENTEAMPREVIEW_OFFSET))(this, call);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_RESET_OFFSET))(this);
		}

		::Class_1_72108342D7142693_Class_1_D8C08C94211C11A1* RestoreParas()
		{
			return ((::Class_1_72108342D7142693_Class_1_D8C08C94211C11A1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_RESTOREPARAS_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER__ONUIINIT_B__18_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__18_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER__ONUIINIT_B__18_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__18_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER__ONUIINIT_B__18_2_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__18_3(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER__ONUIINIT_B__18_3_OFFSET))(this, _);
		}

		::System::Void _EnableTeamList_b__35_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER__ENABLETEAMLIST_B__35_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleDeselectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___BASE_ONGAMEPADMODULEDESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnGamepadModuleSelectIndexFromInput(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
