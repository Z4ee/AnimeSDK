#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_190E3717882702BE_4.h"
#include "unitysdk/Enum_3_9BD6D4E5A68CB9EF.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_90858D70BEDD91CA;
class Class_2_C42082441C30442A;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralFilterItemRowWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ACTIVEITEMROOT_OFFSET UNITYSDK_OFFSET(0x1679EFE0)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_DEALSHOWTYPE_OFFSET UNITYSDK_OFFSET(0x1679DB90)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_GETACTIVEGAMEPADSELECTABLE_OFFSET UNITYSDK_OFFSET(0x1679F150)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_GETCHILDITEMSIZE_OFFSET UNITYSDK_OFFSET(0x1679EA30)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_GET_ONITEMCLICK_OFFSET UNITYSDK_OFFSET(0x1679C5F0)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1679C6E0)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x1679E770)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x1679E880)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1679E690)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1679E990)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1679C7F0)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1679C770)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1679C680)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_REFRESHITEMS_OFFSET UNITYSDK_OFFSET(0x1679CB20)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_SET_ONITEMCLICK_OFFSET UNITYSDK_OFFSET(0x1679C600)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x1679C610)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_TOGGLEITEMROOTDISPLAY_OFFSET UNITYSDK_OFFSET(0x1679EF80)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_UPDATEBTNTEXT_OFFSET UNITYSDK_OFFSET(0x1679ED30)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_UPDATEFILTERITEMSTATE_OFFSET UNITYSDK_OFFSET(0x1679D9B0)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_UPDATEFOLDDISPLAY_1_OFFSET UNITYSDK_OFFSET(0x1679F1E0)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_UPDATEFOLDDISPLAY_OFFSET UNITYSDK_OFFSET(0x1679DF20)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1679F620)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER__GETCHILDITEMSIZE_G__GETSPACE_23_0_OFFSET UNITYSDK_OFFSET(0x1679EBE0)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1679F710)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x1679F7A0)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x1679F830)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1679F8C0)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1679F970)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1679F9A0)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1679FA40)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1679FAD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralFilterGroupRowWidgetController_TypeDefinitionIndex = 73635;

	class UIGeneralFilterGroupRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Action_3<::Enum_3_9BD6D4E5A68CB9EF, ::System::Int32, ::System::Int32>* _OnItemClick_k__BackingField; // 0x2F0
		::Class_2_C42082441C30442A* _view; // 0x2F8
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralFilterItemRowWidgetController*>* _items; // 0x300
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _showItems; // 0x308
		::System::Boolean isUnFold; // 0x310
		::System::Boolean hasInited; // 0x311
		::MoleMole::UIGeneralFilterItemRowWidgetController* ExtraBtnCtrl; // 0x318
		::Enum_3_190E3717882702BE_4 typedDataShowType; // 0x320
		::Class_1_90858D70BEDD91CA* savedTypedData; // 0x328
		::System::Boolean isInFocus; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Action_3<::Enum_3_9BD6D4E5A68CB9EF, ::System::Int32, ::System::Int32>* get_OnItemClick()
		{
			return ((::System::Action_3<::Enum_3_9BD6D4E5A68CB9EF, ::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_GET_ONITEMCLICK_OFFSET))(this);
		}

		::System::Void set_OnItemClick(::System::Action_3<::Enum_3_9BD6D4E5A68CB9EF, ::System::Int32, ::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::Enum_3_9BD6D4E5A68CB9EF, ::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_SET_ONITEMCLICK_OFFSET))(this, value);
		}

		::System::Void set_Title(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_SET_TITLE_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::UnityEngine::Vector2 GetChildItemSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_GETCHILDITEMSIZE_OFFSET))(this);
		}

		::System::Void DealShowType(::Class_1_90858D70BEDD91CA* typedData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_90858D70BEDD91CA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_DEALSHOWTYPE_OFFSET))(this, typedData);
		}

		::System::Void ToggleItemRootDisplay(::Class_1_90858D70BEDD91CA* typedData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_90858D70BEDD91CA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_TOGGLEITEMROOTDISPLAY_OFFSET))(this, typedData);
		}

		::System::Void RefreshItems(::System::Int32 filterGroupIndex, ::Class_1_90858D70BEDD91CA* typedData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_90858D70BEDD91CA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_REFRESHITEMS_OFFSET))(this, filterGroupIndex, typedData);
		}

		::System::Void UpdateFilterItemState(::System::Int32 idx, ::System::Boolean selected, ::System::Boolean enabled, ::System::Boolean hideWhenUnEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_UPDATEFILTERITEMSTATE_OFFSET))(this, idx, selected, enabled, hideWhenUnEnable);
		}

		::System::Void UpdateFoldDisplay(::Class_1_90858D70BEDD91CA* typedData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_90858D70BEDD91CA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_UPDATEFOLDDISPLAY_OFFSET))(this, typedData);
		}

		::System::Boolean UpdateFoldDisplay_1(::System::Int32 idx, ::System::Boolean selected)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_UPDATEFOLDDISPLAY_1_OFFSET))(this, idx, selected);
		}

		::System::Void UpdateBtnText(::Class_1_90858D70BEDD91CA* typedData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_90858D70BEDD91CA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_UPDATEBTNTEXT_OFFSET))(this, typedData);
		}

		::UnityEngine::Transform* ActiveItemRoot(::Class_1_90858D70BEDD91CA* typeData)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::Class_1_90858D70BEDD91CA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_ACTIVEITEMROOT_OFFSET))(this, typeData);
		}

		::MoleMole::MonoGamepadSelectable* GetActiveGamepadSelectable(::Class_1_90858D70BEDD91CA* typeData)
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID, ::Class_1_90858D70BEDD91CA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER_GETACTIVEGAMEPADSELECTABLE_OFFSET))(this, typeData);
		}

		::System::Single _GetChildItemSize_g__GetSpace_23_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER__GETCHILDITEMSIZE_G__GETSPACE_23_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
