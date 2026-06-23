#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_CC3BC82D2D2360D0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_0D6F9C507D2BC133_Class_1_D8C08C94211C11A1;
class Class_2_4D622B218CCBC1D6;
class Class_2_79AE422BA06F6D26_228;
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

#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_BUILDMAP_OFFSET UNITYSDK_OFFSET(0x16531650)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_CANCELAREAFOCUS_OFFSET UNITYSDK_OFFSET(0x16534020)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_CREATETEAM_OFFSET UNITYSDK_OFFSET(0x16531A60)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ENABLETEAMLIST_OFFSET UNITYSDK_OFFSET(0x16534390)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_FINDAREAGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x165325C0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x16530A80)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16530A70)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_INITGAMEPADNAV_OFFSET UNITYSDK_OFFSET(0x16531BB0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_MOVETOCENTER_OFFSET UNITYSDK_OFFSET(0x16532800)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONCHANGEEXPEITIONDAREA_OFFSET UNITYSDK_OFFSET(0x16533FB0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16530A90)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONDISPATCHINGAREA_OFFSET UNITYSDK_OFFSET(0x16533800)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONFOCUSAREA_1_OFFSET UNITYSDK_OFFSET(0x16533750)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONFOCUSAREA_OFFSET UNITYSDK_OFFSET(0x16531E00)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONGAMEPADMODULEDESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x16532540)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x165342A0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x165324C0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x16533990)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16531320)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONSUCCESSDISPATCHING_OFFSET UNITYSDK_OFFSET(0x16533E20)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONTEMPLEJUMPDATASTORE_OFFSET UNITYSDK_OFFSET(0x165311D0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16532300)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16530B20)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_OPENINFOBTN_OFFSET UNITYSDK_OFFSET(0x16534770)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_OPENINFO_OFFSET UNITYSDK_OFFSET(0x16532FE0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_OPENTEAMPREVIEW_OFFSET UNITYSDK_OFFSET(0x16532B00)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_RESET_OFFSET UNITYSDK_OFFSET(0x16534960)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_RESTOREPARAS_OFFSET UNITYSDK_OFFSET(0x165349B0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_SETTEAMINFO_OFFSET UNITYSDK_OFFSET(0x16531960)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16534BE0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16534A90)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER__ENABLETEAMLIST_B__35_0_OFFSET UNITYSDK_OFFSET(0x16534E60)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER__ONUIINIT_B__18_0_OFFSET UNITYSDK_OFFSET(0x16534BF0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER__ONUIINIT_B__18_1_OFFSET UNITYSDK_OFFSET(0x16534CF0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER__ONUIINIT_B__18_2_OFFSET UNITYSDK_OFFSET(0x16534D00)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER__ONUIINIT_B__18_3_OFFSET UNITYSDK_OFFSET(0x16534E50)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16534F60)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___BASE_ONGAMEPADMODULEDESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x16534FF0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x165350A0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEXFROMINPUT_OFFSET UNITYSDK_OFFSET(0x165351E0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x16535130)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16535290)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x165352A0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x165352B0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleExpeditionPageController_TypeDefinitionIndex = 69867;

	class UISuibianTempleExpeditionPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Boolean* StaticGet_IsOpenConfigNav()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleExpeditionPageController_TypeDefinitionIndex)->GetStaticField(0xCE60);
		}
		// static const ::System::String* TeamListAniFadeIn; // 0x0
		// static const ::System::String* TeamListAniFadeOut; // 0x0
		::Class_2_79AE422BA06F6D26_228* _view; // 0x318
		::MoleMole::SuibianTempleExpeditionContext* _context; // 0x320
		::Class_2_4D622B218CCBC1D6* _model; // 0x328
		::MoleMole::UISuibianTempleInfoWidgetController* _pointInfoWidget; // 0x330
		::System::Collections::Generic::List_1<::MoleMole::UISuibianTempleExpeditionAreaWidgetController*>* _areaWidgetControllers; // 0x338
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* spaceItemList; // 0x340
		::System::Collections::Generic::List_1<::MoleMole::UIExpeditionTeamRowWidgetController*>* _teams; // 0x348
		::MoleMole::UIAllroundGeneralTutorialPopWindowController* _popInfo; // 0x350
		::MoleMole::MonoGamepadSpaceList* _gamepadSpaceList; // 0x358
		::System::Int32 consoleCurrentSelectAreaID; // 0x360
		::System::Int32 curAreaID; // 0x364
		::System::Int32 curLayerID; // 0x368

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

		::Enum_3_CC3BC82D2D2360D0 get_Type()
		{
			return ((::Enum_3_CC3BC82D2D2360D0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_GET_TYPE_OFFSET))(this);
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

		::Class_1_0D6F9C507D2BC133_Class_1_D8C08C94211C11A1* RestoreParas()
		{
			return ((::Class_1_0D6F9C507D2BC133_Class_1_D8C08C94211C11A1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER_RESTOREPARAS_OFFSET))(this);
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
