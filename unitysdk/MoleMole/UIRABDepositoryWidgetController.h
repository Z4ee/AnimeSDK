#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_A11CB4C08EF906E4;
class Class_2_320C82F6FBE288EC;
namespace MoleMole { class ConfigNewbie_HighLightDynamicData; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x150F7D90)
#define MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x150F6DA0)
#define MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x150F6E10)
#define MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x150F7840)
#define MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x150F7520)
#define MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x150F7CB0)
#define MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_ONPREINPUTACTION_OFFSET UNITYSDK_OFFSET(0x150F7420)
#define MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_ONRABBUDDYSHOWREFRESHHANDLE_OFFSET UNITYSDK_OFFSET(0x150F7C60)
#define MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x150F6EB0)
#define MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_PLAYREFRESHANIM_OFFSET UNITYSDK_OFFSET(0x150F7A60)
#define MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0x150F7760)
#define MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x150F7000)
#define MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x150F87C0)
#define MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET UNITYSDK_OFFSET(0x150F8820)
#define MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x150F88B0)
#define MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x150F8950)
#define MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x150F8A40)
#define MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x150F8AD0)
#define MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER___BASE_ONPREINPUTACTION_OFFSET UNITYSDK_OFFSET(0x150F8B60)
#define MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x150F8C10)
#define MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0x150F8CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryWidgetController_TypeDefinitionIndex = 72200;

	class UIRABDepositoryWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Boolean _waitNewbie; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_320C82F6FBE288EC* get__viewModel()
		{
			return ((::Class_2_320C82F6FBE288EC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Boolean OnPreInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_ONPREINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Boolean TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32& selectIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, gamepadModule, selectIndex);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Void PlayRefreshAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_PLAYREFRESHANIM_OFFSET))(this);
		}

		::System::Void OnRABBuddyShowRefreshHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_ONRABBUDDYSHOWREFRESHHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::Class_1_A11CB4C08EF906E4* GetNewbieDynamicObject(::MoleMole::ConfigNewbie_HighLightDynamicData* config)
		{
			return ((::Class_1_A11CB4C08EF906E4*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER_GETNEWBIEDYNAMICOBJECT_OFFSET))(this, config);
		}

		::Class_1_A11CB4C08EF906E4* __base_GetNewbieDynamicObject(::MoleMole::ConfigNewbie_HighLightDynamicData* P0)
		{
			return ((::Class_1_A11CB4C08EF906E4*(*)(::PVOID, ::MoleMole::ConfigNewbie_HighLightDynamicData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER___BASE_GETNEWBIEDYNAMICOBJECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Boolean __base_OnPreInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER___BASE_ONPREINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Boolean __base_TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* P0, ::System::Int32& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYWIDGETCONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, P0, P1);
		}
	};
}
