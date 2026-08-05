#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::UI { class ILayoutElement; }

#define MONOLAYOUTELEMENTPROCESSOR_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x162F9430)
#define MONOLAYOUTELEMENTPROCESSOR_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x162F9470)
#define MONOLAYOUTELEMENTPROCESSOR_CANUSE_OFFSET UNITYSDK_OFFSET(0x162F8500)
#define MONOLAYOUTELEMENTPROCESSOR_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x162F8F90)
#define MONOLAYOUTELEMENTPROCESSOR_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x162F91E0)
#define MONOLAYOUTELEMENTPROCESSOR_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x162F8F80)
#define MONOLAYOUTELEMENTPROCESSOR_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x162F8D30)
#define MONOLAYOUTELEMENTPROCESSOR_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x162F8AE0)
#define MONOLAYOUTELEMENTPROCESSOR_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x162F8890)
#define MONOLAYOUTELEMENTPROCESSOR_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x162F8640)
#define MONOLAYOUTELEMENTPROCESSOR_GET_SOURCELAYOUTELEMENT_OFFSET UNITYSDK_OFFSET(0x162F8600)
#define MONOLAYOUTELEMENTPROCESSOR_VALIDATESOURCEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x162F8350)
#define MONOLAYOUTELEMENTPROCESSOR_VALIDATESOURCETYPE_OFFSET UNITYSDK_OFFSET(0x162F82D0)
#define MONOLAYOUTELEMENTPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x162F94B0)

inline static constexpr unsigned int MonoLayoutElementProcessor_TypeDefinitionIndex = 82590;

class MonoLayoutElementProcessor : public ::UnityEngine::EventSystems::UIBehaviour
{
public:
	::System::Func_2<::System::Single, ::System::Single>* OnProcessMinHeight; // 0x18
	::System::Func_2<::System::Single, ::System::Single>* OnProcessMinWidth; // 0x20
	::System::Func_2<::System::Single, ::System::Single>* OnProcessPreferredHeight; // 0x28
	::System::Func_2<::System::Single, ::System::Single>* OnProcessPreferredWidth; // 0x30
	::System::Func_2<::System::Single, ::System::Single>* OnProcessFlexibleHeight; // 0x38
	::System::Func_2<::System::Single, ::System::Single>* OnProcessFlexibleWidth; // 0x40
	::UnityEngine::EventSystems::UIBehaviour* Source; // 0x48
	::System::Int32 LayoutPriority; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLAYOUTELEMENTPROCESSOR__CTOR_OFFSET))(this);
	}

	::System::Boolean ValidateSourceType()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLAYOUTELEMENTPROCESSOR_VALIDATESOURCETYPE_OFFSET))(this);
	}

	::System::Boolean ValidateSourceGameObject()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLAYOUTELEMENTPROCESSOR_VALIDATESOURCEGAMEOBJECT_OFFSET))(this);
	}

	::System::Boolean CanUse()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLAYOUTELEMENTPROCESSOR_CANUSE_OFFSET))(this);
	}

	::UnityEngine::UI::ILayoutElement* get_SourceLayoutElement()
	{
		return ((::UnityEngine::UI::ILayoutElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLAYOUTELEMENTPROCESSOR_GET_SOURCELAYOUTELEMENT_OFFSET))(this);
	}

	::System::Single get_preferredWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLAYOUTELEMENTPROCESSOR_GET_PREFERREDWIDTH_OFFSET))(this);
	}

	::System::Single get_preferredHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLAYOUTELEMENTPROCESSOR_GET_PREFERREDHEIGHT_OFFSET))(this);
	}

	::System::Single get_minWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLAYOUTELEMENTPROCESSOR_GET_MINWIDTH_OFFSET))(this);
	}

	::System::Single get_minHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLAYOUTELEMENTPROCESSOR_GET_MINHEIGHT_OFFSET))(this);
	}

	::System::Int32 get_layoutPriority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLAYOUTELEMENTPROCESSOR_GET_LAYOUTPRIORITY_OFFSET))(this);
	}

	::System::Single get_flexibleHeight()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLAYOUTELEMENTPROCESSOR_GET_FLEXIBLEHEIGHT_OFFSET))(this);
	}

	::System::Single get_flexibleWidth()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLAYOUTELEMENTPROCESSOR_GET_FLEXIBLEWIDTH_OFFSET))(this);
	}

	::System::Void CalculateLayoutInputHorizontal()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLAYOUTELEMENTPROCESSOR_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
	}

	::System::Void CalculateLayoutInputVertical()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOLAYOUTELEMENTPROCESSOR_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
	}
};
