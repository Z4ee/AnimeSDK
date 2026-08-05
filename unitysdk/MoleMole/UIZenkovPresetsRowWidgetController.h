#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_9F36F0CF0780ECE5.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_EC28E1D3A39EE7DE;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIZenkovPresetsRowWidgetController_Data; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER_GETMONOGAMEPADMODULE_OFFSET UNITYSDK_OFFSET(0x1165E630)
#define MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1165CF20)
#define MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER_HASDATA_OFFSET UNITYSDK_OFFSET(0x1165D270)
#define MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1165CF90)
#define MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1165D400)
#define MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET UNITYSDK_OFFSET(0x1165D590)
#define MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1165E2E0)
#define MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1165D030)
#define MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1165D0F0)
#define MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER_SETCHECKBTNACTIVE_OFFSET UNITYSDK_OFFSET(0x1165E580)
#define MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1165E6D0)
#define MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1165E6E0)
#define MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1165E780)
#define MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET UNITYSDK_OFFSET(0x1165E830)
#define MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1165E910)
#define MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1165E940)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPresetsRowWidgetController_TypeDefinitionIndex = 40270;

	class UIZenkovPresetsRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_EC28E1D3A39EE7DE* get__viewModel()
		{
			return ((::Class_2_EC28E1D3A39EE7DE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::MoleMole::UIZenkovPresetsRowWidgetController_Data* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovPresetsRowWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Boolean HasData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER_HASDATA_OFFSET))(this);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::MoleMole::MonoGamepadModule* OnGamepadModuleTryOverrideNavigateTarget(::MoleMole::MonoGamepadModule* gamepadModule, ::MoleMole::MonoGamepadModule* navTarget, ::Enum_3_9F36F0CF0780ECE5 navDir, ::MoleMole::InputActionEvent inputEvent)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MoleMole::MonoGamepadModule*, ::Enum_3_9F36F0CF0780ECE5, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET))(this, gamepadModule, navTarget, navDir, inputEvent);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void SetCheckBtnActive(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER_SETCHECKBTNACTIVE_OFFSET))(this, show);
		}

		::MoleMole::MonoGamepadModule* GetMonoGamepadModule()
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER_GETMONOGAMEPADMODULE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::MoleMole::MonoGamepadModule* __base_OnGamepadModuleTryOverrideNavigateTarget(::MoleMole::MonoGamepadModule* P0, ::MoleMole::MonoGamepadModule* P1, ::Enum_3_9F36F0CF0780ECE5 P2, ::MoleMole::InputActionEvent P3)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::MoleMole::MonoGamepadModule*, ::Enum_3_9F36F0CF0780ECE5, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
