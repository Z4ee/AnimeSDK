#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_342392452B5681AE.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_27E062DB46F0D058;
namespace RPG::UINavigation { class UINavigationInControlAction; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_UINAVIGATION_UINAVIGATION_ADDINCONTROLACTION_OFFSET UNITYSDK_OFFSET(0xCFBC390)
#define RPG_UINAVIGATION_UINAVIGATION_GETFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0xCFBC730)
#define RPG_UINAVIGATION_UINAVIGATION_GET_ACTIVEINHIERARCHY_OFFSET UNITYSDK_OFFSET(0xCFBB370)
#define RPG_UINAVIGATION_UINAVIGATION_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xCFBB350)
#define RPG_UINAVIGATION_UINAVIGATION_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0xCFBB8F0)
#define RPG_UINAVIGATION_UINAVIGATION_GET_ISROOT_OFFSET UNITYSDK_OFFSET(0xCFBB4A0)
#define RPG_UINAVIGATION_UINAVIGATION_GET_NAVIGATIONZONE_OFFSET UNITYSDK_OFFSET(0xCFBBBD0)
#define RPG_UINAVIGATION_UINAVIGATION_GET_PARENT_OFFSET UNITYSDK_OFFSET(0xCFBB3E0)
#define RPG_UINAVIGATION_UINAVIGATION_GET_SPECIFIEDPARENT_OFFSET UNITYSDK_OFFSET(0xCFBB8E0)
#define RPG_UINAVIGATION_UINAVIGATION_ISCHILDOF_OFFSET UNITYSDK_OFFSET(0xCFBC190)
#define RPG_UINAVIGATION_UINAVIGATION_ISNAVIGABLE_OFFSET UNITYSDK_OFFSET(0xCFBC780)
#define RPG_UINAVIGATION_UINAVIGATION_MARKSHOULDREBUILDCHILDREN_OFFSET UNITYSDK_OFFSET(0xCFBC150)
#define RPG_UINAVIGATION_UINAVIGATION_MARKSHOULDUPDATENAVIGATIONZONE_OFFSET UNITYSDK_OFFSET(0xCFBC4B0)
#define RPG_UINAVIGATION_UINAVIGATION_ONCHILDDESELECTED_OFFSET UNITYSDK_OFFSET(0xCFBC340)
#define RPG_UINAVIGATION_UINAVIGATION_ONCHILDSELECTED_OFFSET UNITYSDK_OFFSET(0xCFBC2F0)
#define RPG_UINAVIGATION_UINAVIGATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCFBBFC0)
#define RPG_UINAVIGATION_UINAVIGATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCFBBE30)
#define RPG_UINAVIGATION_UINAVIGATION_ONNAVIGATION_OFFSET UNITYSDK_OFFSET(0xCFBC250)
#define RPG_UINAVIGATION_UINAVIGATION_ONPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xCFBB630)
#define RPG_UINAVIGATION_UINAVIGATION_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xCFBBD60)
#define RPG_UINAVIGATION_UINAVIGATION_REBUILDCHILDREN_OFFSET UNITYSDK_OFFSET(0xCFBB950)
#define RPG_UINAVIGATION_UINAVIGATION_REFRESHALLNAVIGATIONHIERARCHY_OFFSET UNITYSDK_OFFSET(0xCFBCA50)
#define RPG_UINAVIGATION_UINAVIGATION_REMOVEINCONTROLACTION_OFFSET UNITYSDK_OFFSET(0xCFBC440)
#define RPG_UINAVIGATION_UINAVIGATION_SETPARENT_OFFSET UNITYSDK_OFFSET(0xCFBC620)
#define RPG_UINAVIGATION_UINAVIGATION_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xCFBB360)
#define RPG_UINAVIGATION_UINAVIGATION_SET_ISROOT_OFFSET UNITYSDK_OFFSET(0xCFBB4B0)
#define RPG_UINAVIGATION_UINAVIGATION__CCTOR_OFFSET UNITYSDK_OFFSET(0xCFBD130)
#define RPG_UINAVIGATION_UINAVIGATION__CTOR_OFFSET UNITYSDK_OFFSET(0xCFBD0C0)
#define RPG_UINAVIGATION_UINAVIGATION__DETACHFROMPARENT_OFFSET UNITYSDK_OFFSET(0xCFBB590)
#define RPG_UINAVIGATION_UINAVIGATION__FINDNAVIGATIONZONE_OFFSET UNITYSDK_OFFSET(0xCFBBC30)
#define RPG_UINAVIGATION_UINAVIGATION__FINDPARENTNAVIGATION_OFFSET UNITYSDK_OFFSET(0xCFBB880)
#define RPG_UINAVIGATION_UINAVIGATION__INVALIDATEHIERARCHYCACHES_OFFSET UNITYSDK_OFFSET(0xCFBCA00)
#define RPG_UINAVIGATION_UINAVIGATION__MARKPARENTSHOULDREBUILDCHILDREN_OFFSET UNITYSDK_OFFSET(0xCFBBF40)
#define RPG_UINAVIGATION_UINAVIGATION__REATTACHTOPARENT_OFFSET UNITYSDK_OFFSET(0xCFBB5E0)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigation_TypeDefinitionIndex = 48404;

	class UINavigation : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigation*>** StaticGet_AllNavigations()
		{
			return (::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigation*>**)Il2CppClass::FromTypeDefinitionIndex(UINavigation_TypeDefinitionIndex)->GetStaticField(0x59B0);
		}
		::System::Boolean _ShouldUpdateChildren; // 0x18
		::System::Boolean _ShouldUpdateNavigationZone; // 0x19
		::System::Boolean _ShouldUpdateParent; // 0x1A
		::System::Int32 _CurrentIndex; // 0x1C
		::System::Boolean _EnableCalled; // 0x20
		::System::Boolean _Active; // 0x21
		::System::Boolean _IsRoot; // 0x22
		::RPG::UINavigation::UINavigation* _Parent; // 0x28
		::RPG::UINavigation::UINavigation* _SpecifiedParent; // 0x30
		::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigation*>* _Children; // 0x38
		::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationInControlAction*>* _InControlActions; // 0x40
		::RPG::UINavigation::UINavigationZone* _NavigationZone; // 0x48

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

		::System::Void set_Active(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_SET_ACTIVE_OFFSET))(this, a1);
		}

		::System::Boolean get_ActiveInHierarchy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_GET_ACTIVEINHIERARCHY_OFFSET))(this);
		}

		::System::Boolean get_IsRoot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_GET_ISROOT_OFFSET))(this);
		}

		::System::Void set_IsRoot(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_SET_ISROOT_OFFSET))(this, a1);
		}

		::RPG::UINavigation::UINavigation* get_Parent()
		{
			return ((::RPG::UINavigation::UINavigation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_GET_PARENT_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigation* get_SpecifiedParent()
		{
			return ((::RPG::UINavigation::UINavigation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_GET_SPECIFIEDPARENT_OFFSET))(this);
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

		::Struct_2_342392452B5681AE OnNavigation(::Class_1_27E062DB46F0D058* a1)
		{
			return ((::Struct_2_342392452B5681AE(*)(::PVOID, ::Class_1_27E062DB46F0D058*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ONNAVIGATION_OFFSET))(this, a1);
		}

		::System::Void OnChildSelected(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ONCHILDSELECTED_OFFSET))(this, a1);
		}

		::System::Void OnChildDeselected(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ONCHILDDESELECTED_OFFSET))(this, a1);
		}

		::System::Void AddInControlAction(::RPG::UINavigation::UINavigationInControlAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationInControlAction*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ADDINCONTROLACTION_OFFSET))(this, a1);
		}

		::System::Void RemoveInControlAction(::RPG::UINavigation::UINavigationInControlAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationInControlAction*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_REMOVEINCONTROLACTION_OFFSET))(this, a1);
		}

		::System::Void MarkShouldUpdateNavigationZone(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_MARKSHOULDUPDATENAVIGATIONZONE_OFFSET))(this, a1);
		}

		::System::Void SetParent(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_SETPARENT_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* GetFirstSelectable(::Class_1_27E062DB46F0D058* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_27E062DB46F0D058*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_GETFIRSTSELECTABLE_OFFSET))(this, a1);
		}

		::System::Boolean IsChildOf(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ISCHILDOF_OFFSET))(this, a1);
		}

		::System::Boolean IsNavigable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_ISNAVIGABLE_OFFSET))(this);
		}

		::System::Void _DetachFromParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION__DETACHFROMPARENT_OFFSET))(this);
		}

		::System::Void _ReattachToParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION__REATTACHTOPARENT_OFFSET))(this);
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

		::System::Void _InvalidateHierarchyCaches()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION__INVALIDATEHIERARCHYCACHES_OFFSET))(this);
		}

		static ::System::Void RefreshAllNavigationHierarchy()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATION_REFRESHALLNAVIGATIONHIERARCHY_OFFSET))();
		}
	};
}
