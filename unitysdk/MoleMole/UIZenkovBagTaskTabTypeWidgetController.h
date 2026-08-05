#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_C96DD177C1F2A967.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_84A668B8DE4853ED;
class Class_1_DF44937F6A83714C;
class Class_2_7EFBB899B4E4B40A;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIZenkovTaskRowWidgetController; }
namespace MoleMole { class UIZenkovTaskRowWidgetController_Context; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_CREATENEWTASKROWWIDGET_OFFSET UNITYSDK_OFFSET(0x11E45A90)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_DESTROYALLPOOLEDWIDGETS_OFFSET UNITYSDK_OFFSET(0x11E43820)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_GETTASKROWBYINDEX_OFFSET UNITYSDK_OFFSET(0x11E44F70)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_GET_FOCUSOVERRIDESECTIONIDX_OFFSET UNITYSDK_OFFSET(0x11E43160)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_GET_FOCUSOVERRIDETASKIDX_OFFSET UNITYSDK_OFFSET(0x11E43220)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_GET_LASTNAVSECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x11E42F20)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_GET_LASTNAVTASKINDEX_OFFSET UNITYSDK_OFFSET(0x11E42FE0)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_GET_SUPPRESSDETAILREFRESH_OFFSET UNITYSDK_OFFSET(0x11E430A0)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11E43700)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x11E44C40)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x11E455E0)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11E43920)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11E43790)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11E432E0)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_REBUILDTASKROWS_OFFSET UNITYSDK_OFFSET(0x11E441A0)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_SCROLLPARENTTOTASKROW_OFFSET UNITYSDK_OFFSET(0x11E45010)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_SETSECTIONTITLE_OFFSET UNITYSDK_OFFSET(0x11E43A20)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_SETWIDGETVISIBLE_OFFSET UNITYSDK_OFFSET(0x11E45B40)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_SET_FOCUSOVERRIDESECTIONIDX_OFFSET UNITYSDK_OFFSET(0x11E431C0)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_SET_FOCUSOVERRIDETASKIDX_OFFSET UNITYSDK_OFFSET(0x11E43280)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_SET_LASTNAVSECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x11E42F80)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_SET_LASTNAVTASKINDEX_OFFSET UNITYSDK_OFFSET(0x11E43040)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_SET_SUPPRESSDETAILREFRESH_OFFSET UNITYSDK_OFFSET(0x11E43100)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_TRYNAVIGATETODETAILGAMEPADMODULE_OFFSET UNITYSDK_OFFSET(0x11E45680)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0x11E44740)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_TRYSETDETAILMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x11E45E80)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_WARMUP_OFFSET UNITYSDK_OFFSET(0x11E43380)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E46140)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11E460A0)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11E46150)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x11E461E0)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x11E46290)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x11E462C0)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11E46360)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11E463F0)
#define MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0x11E46480)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBagTaskTabTypeWidgetController_TypeDefinitionIndex = 44706;

	class UIZenkovBagTaskTabTypeWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		static ::System::Boolean* StaticGet__SuppressDetailRefresh_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovBagTaskTabTypeWidgetController_TypeDefinitionIndex)->GetStaticField(0xC310);
		}
		static ::System::Int32* StaticGet__LastNavSectionIndex_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovBagTaskTabTypeWidgetController_TypeDefinitionIndex)->GetStaticField(0xC314);
		}
		static ::System::Int32* StaticGet__FocusOverrideSectionIdx_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovBagTaskTabTypeWidgetController_TypeDefinitionIndex)->GetStaticField(0xC318);
		}
		static ::System::Int32* StaticGet__LastNavTaskIndex_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovBagTaskTabTypeWidgetController_TypeDefinitionIndex)->GetStaticField(0xC31C);
		}
		static ::System::Int32* StaticGet__FocusOverrideTaskIdx_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIZenkovBagTaskTabTypeWidgetController_TypeDefinitionIndex)->GetStaticField(0xC320);
		}
		// static const ::System::Int32 WarmUpCount = 0x5; // 0x0
		::Class_2_7EFBB899B4E4B40A* _view; // 0x2F0
		::UnityEngine::Transform* _taskRowRoot; // 0x2F8
		::System::Collections::Generic::List_1<::MoleMole::UIZenkovTaskRowWidgetController*>* _pooledWidgets; // 0x300
		::System::Int32 _activeCount; // 0x308
		::System::Collections::Generic::List_1<::Class_1_84A668B8DE4853ED*>* _currentQuests; // 0x310
		::System::Int32 _currentSelectedIndex; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		static ::System::Int32 get_LastNavSectionIndex()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_GET_LASTNAVSECTIONINDEX_OFFSET))();
		}

		static ::System::Void set_LastNavSectionIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_SET_LASTNAVSECTIONINDEX_OFFSET))(value);
		}

		static ::System::Int32 get_LastNavTaskIndex()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_GET_LASTNAVTASKINDEX_OFFSET))();
		}

		static ::System::Void set_LastNavTaskIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_SET_LASTNAVTASKINDEX_OFFSET))(value);
		}

		static ::System::Boolean get_SuppressDetailRefresh()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_GET_SUPPRESSDETAILREFRESH_OFFSET))();
		}

		static ::System::Void set_SuppressDetailRefresh(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_SET_SUPPRESSDETAILREFRESH_OFFSET))(value);
		}

		static ::System::Int32 get_FocusOverrideSectionIdx()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_GET_FOCUSOVERRIDESECTIONIDX_OFFSET))();
		}

		static ::System::Void set_FocusOverrideSectionIdx(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_SET_FOCUSOVERRIDESECTIONIDX_OFFSET))(value);
		}

		static ::System::Int32 get_FocusOverrideTaskIdx()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_GET_FOCUSOVERRIDETASKIDX_OFFSET))();
		}

		static ::System::Void set_FocusOverrideTaskIdx(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_SET_FOCUSOVERRIDETASKIDX_OFFSET))(value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Boolean TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32& selectIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, gamepadModule, selectIndex);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void ScrollParentToTaskRow(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_SCROLLPARENTTOTASKROW_OFFSET))(this, index);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void WarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_WARMUP_OFFSET))(this);
		}

		::MoleMole::UIZenkovTaskRowWidgetController* CreateNewTaskRowWidget(::MoleMole::UIZenkovTaskRowWidgetController_Context* ctx)
		{
			return ((::MoleMole::UIZenkovTaskRowWidgetController*(*)(::PVOID, ::MoleMole::UIZenkovTaskRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_CREATENEWTASKROWWIDGET_OFFSET))(this, ctx);
		}

		::System::Void RebuildTaskRows(::Class_1_DF44937F6A83714C* section)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DF44937F6A83714C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_REBUILDTASKROWS_OFFSET))(this, section);
		}

		static ::System::Void SetWidgetVisible(::MoleMole::UIZenkovTaskRowWidgetController* widget, ::System::Boolean visible)
		{
			return ((::System::Void(*)(::MoleMole::UIZenkovTaskRowWidgetController*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_SETWIDGETVISIBLE_OFFSET))(widget, visible);
		}

		::MoleMole::UIZenkovTaskRowWidgetController* GetTaskRowByIndex(::System::Int32 index)
		{
			return ((::MoleMole::UIZenkovTaskRowWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_GETTASKROWBYINDEX_OFFSET))(this, index);
		}

		::System::Void DestroyAllPooledWidgets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_DESTROYALLPOOLEDWIDGETS_OFFSET))(this);
		}

		::System::Boolean TryNavigateToDetailGamepadModule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_TRYNAVIGATETODETAILGAMEPADMODULE_OFFSET))(this);
		}

		::System::Boolean TrySetDetailModuleFocus(::System::String* targetModuleName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_TRYSETDETAILMODULEFOCUS_OFFSET))(this, targetModuleName);
		}

		::System::Void SetSectionTitle(::Enum_3_C96DD177C1F2A967 subType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_C96DD177C1F2A967))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER_SETSECTIONTITLE_OFFSET))(this, subType);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Boolean __base_TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* P0, ::System::Int32& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGTASKTABTYPEWIDGETCONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, P0, P1);
		}
	};
}
