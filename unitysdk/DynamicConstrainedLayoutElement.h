#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LayoutConstraintAxis.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class LayoutElement; }

#define DYNAMICCONSTRAINEDLAYOUTELEMENT_APPLYLAYOUTELEMENTSIZE_OFFSET UNITYSDK_OFFSET(0x1190AD60)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1190A390)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT_CACHEREFERENCES_OFFSET UNITYSDK_OFFSET(0x1190A400)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT_CALCULATEAVAILABLESIZE_OFFSET UNITYSDK_OFFSET(0x1190A9A0)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT_CONFIGURE_OFFSET UNITYSDK_OFFSET(0x1190A2C0)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT_GETAXISSIZE_OFFSET UNITYSDK_OFFSET(0x1190B370)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT_GETPREFERREDSIZE_OFFSET UNITYSDK_OFFSET(0x1190A940)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT_GETREMAININGSPACEINCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1190AE80)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT_GET_AXIS_OFFSET UNITYSDK_OFFSET(0x11909C10)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT_GET_CONSTRAINTSOURCE_OFFSET UNITYSDK_OFFSET(0x1190A1E0)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1190A170)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT_GET_RESERVEDELEMENTS_OFFSET UNITYSDK_OFFSET(0x1190A250)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1190A8A0)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1190A850)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1190A730)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1190A800)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1190A7B0)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT_REFRESHLAYOUT_OFFSET UNITYSDK_OFFSET(0x11909C70)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT_RESET_OFFSET UNITYSDK_OFFSET(0x1190A8F0)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT_SET_AXIS_OFFSET UNITYSDK_OFFSET(0x11909C20)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT_SET_CONSTRAINTSOURCE_OFFSET UNITYSDK_OFFSET(0x1190A1F0)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1190A180)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT_SET_RESERVEDELEMENTS_OFFSET UNITYSDK_OFFSET(0x1190A260)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1190B410)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1190B4C0)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT___BASE_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1190B550)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1190B5E0)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1190B670)
#define DYNAMICCONSTRAINEDLAYOUTELEMENT___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1190B700)

inline static constexpr unsigned int DynamicConstrainedLayoutElement_TypeDefinitionIndex = 71064;

class DynamicConstrainedLayoutElement : public ::UnityEngine::EventSystems::UIBehaviour
{
public:
	::LayoutConstraintAxis _axis; // 0x18
	::UnityEngine::RectTransform* _content; // 0x20
	::UnityEngine::RectTransform* _constraintSource; // 0x28
	::Il2CppArray<::UnityEngine::RectTransform*>* _reservedElements; // 0x30
	::System::Single _constraintOffset; // 0x38
	::System::Single _minSize; // 0x3C
	::UnityEngine::RectTransform* _rectTransform; // 0x40
	::UnityEngine::RectTransform* _parentRectTransform; // 0x48
	::UnityEngine::UI::LayoutElement* _layoutElement; // 0x50
	::System::Single _lastPreferredSize; // 0x58
	::Il2CppArray<::UnityEngine::Vector3>* _selfWorldCorners; // 0x60
	::Il2CppArray<::UnityEngine::Vector3>* _selfCornersInConstraint; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT__CTOR_OFFSET))(this);
	}

	::LayoutConstraintAxis get_Axis()
	{
		return ((::LayoutConstraintAxis(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT_GET_AXIS_OFFSET))(this);
	}

	::System::Void set_Axis(::LayoutConstraintAxis value)
	{
		return ((::System::Void(*)(::PVOID, ::LayoutConstraintAxis))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT_SET_AXIS_OFFSET))(this, value);
	}

	::UnityEngine::RectTransform* get_Content()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT_GET_CONTENT_OFFSET))(this);
	}

	::System::Void set_Content(::UnityEngine::RectTransform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT_SET_CONTENT_OFFSET))(this, value);
	}

	::UnityEngine::RectTransform* get_ConstraintSource()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT_GET_CONSTRAINTSOURCE_OFFSET))(this);
	}

	::System::Void set_ConstraintSource(::UnityEngine::RectTransform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT_SET_CONSTRAINTSOURCE_OFFSET))(this, value);
	}

	::Il2CppArray<::UnityEngine::RectTransform*>* get_ReservedElements()
	{
		return ((::Il2CppArray<::UnityEngine::RectTransform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT_GET_RESERVEDELEMENTS_OFFSET))(this);
	}

	::System::Void set_ReservedElements(::Il2CppArray<::UnityEngine::RectTransform*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::RectTransform*>*))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT_SET_RESERVEDELEMENTS_OFFSET))(this, value);
	}

	::System::Void Configure(::LayoutConstraintAxis axis, ::UnityEngine::RectTransform* content, ::UnityEngine::RectTransform* constraintSource, ::Il2CppArray<::UnityEngine::RectTransform*>* reservedElements, ::System::Single constraintOffset, ::System::Single minSize)
	{
		return ((::System::Void(*)(::PVOID, ::LayoutConstraintAxis, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::Il2CppArray<::UnityEngine::RectTransform*>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT_CONFIGURE_OFFSET))(this, axis, content, constraintSource, reservedElements, constraintOffset, minSize);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT_AWAKE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT_ONENABLE_OFFSET))(this);
	}

	::System::Void OnTransformParentChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
	}

	::System::Void OnRectTransformDimensionsChange()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
	}

	::System::Void OnCanvasHierarchyChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT_LATEUPDATE_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT_RESET_OFFSET))(this);
	}

	::System::Void CacheReferences()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT_CACHEREFERENCES_OFFSET))(this);
	}

	::System::Void RefreshLayout(::System::Boolean force)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT_REFRESHLAYOUT_OFFSET))(this, force);
	}

	::System::Void ApplyLayoutElementSize(::System::Single targetSize)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT_APPLYLAYOUTELEMENTSIZE_OFFSET))(this, targetSize);
	}

	::System::Single CalculateAvailableSize()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT_CALCULATEAVAILABLESIZE_OFFSET))(this);
	}

	::System::Single GetRemainingSpaceInConstraint()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT_GETREMAININGSPACEINCONSTRAINT_OFFSET))(this);
	}

	::System::Single GetPreferredSize(::UnityEngine::RectTransform* rectTransform)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT_GETPREFERREDSIZE_OFFSET))(this, rectTransform);
	}

	::System::Single GetAxisSize(::UnityEngine::RectTransform* rectTransform)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT_GETAXISSIZE_OFFSET))(this, rectTransform);
	}

	::System::Void __base_Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT___BASE_AWAKE_OFFSET))(this);
	}

	::System::Void __base_OnCanvasHierarchyChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT___BASE_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
	}

	::System::Void __base_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT___BASE_ONENABLE_OFFSET))(this);
	}

	::System::Void __base_OnRectTransformDimensionsChange()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
	}

	::System::Void __base_OnTransformParentChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICCONSTRAINEDLAYOUTELEMENT___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
	}
};
