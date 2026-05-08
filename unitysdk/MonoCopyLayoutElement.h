#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace UnityEngine { class RectTransform; }

#define MONOCOPYLAYOUTELEMENT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x10A23F60)
#define MONOCOPYLAYOUTELEMENT_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x10A23FA0)
#define MONOCOPYLAYOUTELEMENT_GETCOLROW_OFFSET UNITYSDK_OFFSET(0x10A24060)
#define MONOCOPYLAYOUTELEMENT_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x10A23BE0)
#define MONOCOPYLAYOUTELEMENT_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x10A23DA0)
#define MONOCOPYLAYOUTELEMENT_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x10A23BD0)
#define MONOCOPYLAYOUTELEMENT_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x10A23A00)
#define MONOCOPYLAYOUTELEMENT_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x10A23830)
#define MONOCOPYLAYOUTELEMENT_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x10A23660)
#define MONOCOPYLAYOUTELEMENT_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x10A23490)
#define MONOCOPYLAYOUTELEMENT_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x10A23FE0)
#define MONOCOPYLAYOUTELEMENT_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x10A24020)
#define MONOCOPYLAYOUTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x10A240B0)

inline static constexpr unsigned int MonoCopyLayoutElement_TypeDefinitionIndex = 43184;

class MonoCopyLayoutElement : public ::UnityEngine::EventSystems::UIBehaviour
{
public:
	::System::Boolean CopyMinHeight; // 0x18
	::System::Boolean CopyMinWidth; // 0x19
	::System::Boolean CopyPreferredHeight; // 0x1A
	::System::Boolean CopyPreferredWidth; // 0x1B
	::System::Boolean CopyFlexibleHeight; // 0x1C
	::System::Boolean CopyFlexibleWidth; // 0x1D
	::UnityEngine::RectTransform* CopySource; // 0x20
	::System::Single PaddingMinHeight; // 0x28
	::System::Single PaddingMinWidth; // 0x2C
	::System::Single PaddingPreferredHeight; // 0x30
	::System::Single PaddingPreferredWidth; // 0x34
	::System::Int32 LayoutPriority; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCOPYLAYOUTELEMENT__CTOR_OFFSET))(this);
	}

	::System::Single get_preferredWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCOPYLAYOUTELEMENT_GET_PREFERREDWIDTH_OFFSET))(this);
	}

	::System::Single get_preferredHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCOPYLAYOUTELEMENT_GET_PREFERREDHEIGHT_OFFSET))(this);
	}

	::System::Single get_minWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCOPYLAYOUTELEMENT_GET_MINWIDTH_OFFSET))(this);
	}

	::System::Single get_minHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCOPYLAYOUTELEMENT_GET_MINHEIGHT_OFFSET))(this);
	}

	::System::Int32 get_layoutPriority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCOPYLAYOUTELEMENT_GET_LAYOUTPRIORITY_OFFSET))(this);
	}

	::System::Single get_flexibleHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCOPYLAYOUTELEMENT_GET_FLEXIBLEHEIGHT_OFFSET))(this);
	}

	::System::Single get_flexibleWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCOPYLAYOUTELEMENT_GET_FLEXIBLEWIDTH_OFFSET))(this);
	}

	::System::Void CalculateLayoutInputHorizontal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCOPYLAYOUTELEMENT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
	}

	::System::Void CalculateLayoutInputVertical()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCOPYLAYOUTELEMENT_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
	}

	::System::Void SetLayoutHorizontal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCOPYLAYOUTELEMENT_SETLAYOUTHORIZONTAL_OFFSET))(this);
	}

	::System::Void SetLayoutVertical()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCOPYLAYOUTELEMENT_SETLAYOUTVERTICAL_OFFSET))(this);
	}

	::UnityEngine::Vector2Int GetColRow()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOCOPYLAYOUTELEMENT_GETCOLROW_OFFSET))(this);
	}
};
