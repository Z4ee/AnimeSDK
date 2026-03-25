#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_342392452B5681AE.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_A8F358278D5B9235;
namespace RPG::UINavigation { class UINavigationInControlAction; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_UINAVIGATION_UINAVIGATION_ADDINCONTROLACTION_OFFSET UNITYSDK_OFFSET(0xAB05DE0)
#define RPG_UINAVIGATION_UINAVIGATION_GETFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0xAB06010)
#define RPG_UINAVIGATION_UINAVIGATION_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xAB05100)
#define RPG_UINAVIGATION_UINAVIGATION_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0xAB05260)
#define RPG_UINAVIGATION_UINAVIGATION_GET_HIDDEN_OFFSET UNITYSDK_OFFSET(0xAB05240)
#define RPG_UINAVIGATION_UINAVIGATION_GET_NAVIGATIONZONE_OFFSET UNITYSDK_OFFSET(0xAB054A0)
#define RPG_UINAVIGATION_UINAVIGATION_GET_PARENT_OFFSET UNITYSDK_OFFSET(0xAB05120)
#define RPG_UINAVIGATION_UINAVIGATION_GET_SPECIFIEDPARENT_OFFSET UNITYSDK_OFFSET(0xAB05230)
#define RPG_UINAVIGATION_UINAVIGATION_ISCHILDOF_OFFSET UNITYSDK_OFFSET(0xAB05990)
#define RPG_UINAVIGATION_UINAVIGATION_ISNAVIGABLE_OFFSET UNITYSDK_OFFSET(0xAB061B0)
#define RPG_UINAVIGATION_UINAVIGATION_MARKSHOULDREBUILDCHILDREN_OFFSET UNITYSDK_OFFSET(0xAB05950)
#define RPG_UINAVIGATION_UINAVIGATION_ONCHILDSELECTED_OFFSET UNITYSDK_OFFSET(0xAB05D90)
#define RPG_UINAVIGATION_UINAVIGATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xAB057C0)
#define RPG_UINAVIGATION_UINAVIGATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xAB05710)
#define RPG_UINAVIGATION_UINAVIGATION_ONNAVIGATION_OFFSET UNITYSDK_OFFSET(0xAB05CF0)
#define RPG_UINAVIGATION_UINAVIGATION_ONPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xAB05A00)
#define RPG_UINAVIGATION_UINAVIGATION_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xAB05630)
#define RPG_UINAVIGATION_UINAVIGATION_REBUILDCHILDREN_OFFSET UNITYSDK_OFFSET(0xAB052C0)
#define RPG_UINAVIGATION_UINAVIGATION_REMOVEINCONTROLACTION_OFFSET UNITYSDK_OFFSET(0xAB05E50)
#define RPG_UINAVIGATION_UINAVIGATION_SETPARENT_OFFSET UNITYSDK_OFFSET(0xAB05EC0)
#define RPG_UINAVIGATION_UINAVIGATION_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xAB05110)
#define RPG_UINAVIGATION_UINAVIGATION_SET_HIDDEN_OFFSET UNITYSDK_OFFSET(0xAB05250)
#define RPG_UINAVIGATION_UINAVIGATION__CCTOR_OFFSET UNITYSDK_OFFSET(0xAB06440)
#define RPG_UINAVIGATION_UINAVIGATION__CTOR_OFFSET UNITYSDK_OFFSET(0xAB063D0)
#define RPG_UINAVIGATION_UINAVIGATION__FINDNAVIGATIONZONE_OFFSET UNITYSDK_OFFSET(0xAB05500)
#define RPG_UINAVIGATION_UINAVIGATION__FINDPARENTNAVIGATION_OFFSET UNITYSDK_OFFSET(0xAB051D0)
#define RPG_UINAVIGATION_UINAVIGATION__MARKPARENTSHOULDREBUILDCHILDREN_OFFSET UNITYSDK_OFFSET(0xAB05690)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigation_TypeDefinitionIndex = 41820;

	class UINavigation : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigation*>** StaticGet_AllNavigations()
		{
			return (::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigation*>**)Il2CppClass::FromTypeDefinitionIndex(UINavigation_TypeDefinitionIndex)->GetStaticField(0x47000);
		}
		::System::Boolean _ShouldUpdateChildren; // 0x18
		::System::Boolean _ShouldUpdateNavigationZone; // 0x19
		::System::Boolean _ShouldUpdateParent; // 0x1A
		::System::Int32 _CurrentIndex; // 0x1C
		::System::Boolean _EnableCalled; // 0x20
		::System::Boolean _Active; // 0x21
		::RPG::UINavigation::UINavigation* _Parent; // 0x28
		::RPG::UINavigation::UINavigation* _SpecifiedParent; // 0x30
		::System::Boolean _Hidden_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigation*>* _Children; // 0x40
		::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationInControlAction*>* _InControlActions; // 0x48
		::RPG::UINavigation::UINavigationZone* _NavigationZone; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION__CCTOR_OFFSET))();
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_GET_ACTIVE_OFFSET))(this);
		}

		::System::Void set_Active(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_SET_ACTIVE_OFFSET))(this, value);
		}

		::RPG::UINavigation::UINavigation* get_Parent()
		{
			return ((::RPG::UINavigation::UINavigation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_GET_PARENT_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigation* get_SpecifiedParent()
		{
			return ((::RPG::UINavigation::UINavigation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_GET_SPECIFIEDPARENT_OFFSET))(this);
		}

		::System::Boolean get_Hidden()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_GET_HIDDEN_OFFSET))(this);
		}

		::System::Void set_Hidden(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_SET_HIDDEN_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigation*>* get_Children()
		{
			return ((::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigation*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_GET_CHILDREN_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZone* get_NavigationZone()
		{
			return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_GET_NAVIGATIONZONE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ONDISABLE_OFFSET))(this);
		}

		::System::Void MarkShouldRebuildChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_MARKSHOULDREBUILDCHILDREN_OFFSET))(this);
		}

		::System::Void RebuildChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_REBUILDCHILDREN_OFFSET))(this);
		}

		::System::Void OnParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ONPARENTCHANGED_OFFSET))(this);
		}

		::Struct_2_342392452B5681AE OnNavigation(::Class_1_A8F358278D5B9235* naviEvent)
		{
			return ((::Struct_2_342392452B5681AE(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ONNAVIGATION_OFFSET))(this, naviEvent);
		}

		::System::Void OnChildSelected(::RPG::UINavigation::UINavigation* child)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ONCHILDSELECTED_OFFSET))(this, child);
		}

		::System::Void AddInControlAction(::RPG::UINavigation::UINavigationInControlAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationInControlAction*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ADDINCONTROLACTION_OFFSET))(this, action);
		}

		::System::Void RemoveInControlAction(::RPG::UINavigation::UINavigationInControlAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationInControlAction*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_REMOVEINCONTROLACTION_OFFSET))(this, action);
		}

		::System::Void SetParent(::RPG::UINavigation::UINavigation* parent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_SETPARENT_OFFSET))(this, parent);
		}

		::UnityEngine::GameObject* GetFirstSelectable()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_GETFIRSTSELECTABLE_OFFSET))(this);
		}

		::System::Boolean IsChildOf(::RPG::UINavigation::UINavigation* parent)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ISCHILDOF_OFFSET))(this, parent);
		}

		::System::Boolean IsNavigable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ISNAVIGABLE_OFFSET))(this);
		}

		::System::Void _MarkParentShouldRebuildChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION__MARKPARENTSHOULDREBUILDCHILDREN_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigation* _FindParentNavigation()
		{
			return ((::RPG::UINavigation::UINavigation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION__FINDPARENTNAVIGATION_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZone* _FindNavigationZone()
		{
			return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION__FINDNAVIGATIONZONE_OFFSET))(this);
		}
	};
}
