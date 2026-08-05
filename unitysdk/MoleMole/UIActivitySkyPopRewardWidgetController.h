#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_D375C91CCE5D3999;
class Class_2_810EEFC04B107609;
class Class_3_AE02BC8285203464_18;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYSKYPOPREWARDWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A620AB0)
#define MOLEMOLE_UIACTIVITYSKYPOPREWARDWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A620B20)
#define MOLEMOLE_UIACTIVITYSKYPOPREWARDWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x1A620EA0)
#define MOLEMOLE_UIACTIVITYSKYPOPREWARDWIDGETCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x1A620E30)
#define MOLEMOLE_UIACTIVITYSKYPOPREWARDWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A620BC0)
#define MOLEMOLE_UIACTIVITYSKYPOPREWARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1A620D60)
#define MOLEMOLE_UIACTIVITYSKYPOPREWARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A620F10)
#define MOLEMOLE_UIACTIVITYSKYPOPREWARDWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A620F70)
#define MOLEMOLE_UIACTIVITYSKYPOPREWARDWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x1A621010)
#define MOLEMOLE_UIACTIVITYSKYPOPREWARDWIDGETCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x1A6210A0)
#define MOLEMOLE_UIACTIVITYSKYPOPREWARDWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A621130)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySkyPopRewardWidgetController_TypeDefinitionIndex = 70212;

	class UIActivitySkyPopRewardWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYPOPREWARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_810EEFC04B107609* get__viewModel()
		{
			return ((::Class_2_810EEFC04B107609*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYPOPREWARDWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYPOPREWARDWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYPOPREWARDWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RefreshView(::Class_3_AE02BC8285203464_18* task, ::Class_1_D375C91CCE5D3999* rootActivity, ::System::Action* onTakeRewardCallback)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_18*, ::Class_1_D375C91CCE5D3999*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYPOPREWARDWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, task, rootActivity, onTakeRewardCallback);
		}

		::System::Void OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYPOPREWARDWIDGETCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYPOPREWARDWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYPOPREWARDWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYPOPREWARDWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYPOPREWARDWIDGETCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYPOPREWARDWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
