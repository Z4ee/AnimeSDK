#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/RectTransform_Edge.h"

#define SRDEBUGGER_UI_OTHER_SAFEAREASIZER_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1845C7A0)
#define SRDEBUGGER_UI_OTHER_SAFEAREASIZER_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1845C7D0)
#define SRDEBUGGER_UI_OTHER_SAFEAREASIZER_GET_EDGE_OFFSET UNITYSDK_OFFSET(0x1845C380)
#define SRDEBUGGER_UI_OTHER_SAFEAREASIZER_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1845C450)
#define SRDEBUGGER_UI_OTHER_SAFEAREASIZER_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1845C460)
#define SRDEBUGGER_UI_OTHER_SAFEAREASIZER_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1845C440)
#define SRDEBUGGER_UI_OTHER_SAFEAREASIZER_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1845C470)
#define SRDEBUGGER_UI_OTHER_SAFEAREASIZER_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1845C480)
#define SRDEBUGGER_UI_OTHER_SAFEAREASIZER_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1845C430)
#define SRDEBUGGER_UI_OTHER_SAFEAREASIZER_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1845C420)
#define SRDEBUGGER_UI_OTHER_SAFEAREASIZER_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1845C410)
#define SRDEBUGGER_UI_OTHER_SAFEAREASIZER_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1845C400)
#define SRDEBUGGER_UI_OTHER_SAFEAREASIZER_REFRESH_OFFSET UNITYSDK_OFFSET(0x1845C490)
#define SRDEBUGGER_UI_OTHER_SAFEAREASIZER_SET_EDGE_OFFSET UNITYSDK_OFFSET(0x1845C390)
#define SRDEBUGGER_UI_OTHER_SAFEAREASIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1845C800)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int SafeAreaSizer_TypeDefinitionIndex = 29661;

	class SafeAreaSizer : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::UnityEngine::RectTransform_Edge _edge; // 0x18
		::System::Single Scale; // 0x1C
		::System::Single _height; // 0x20
		::System::Single _width; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SAFEAREASIZER__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform_Edge get_Edge()
		{
			return ((::UnityEngine::RectTransform_Edge(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SAFEAREASIZER_GET_EDGE_OFFSET))(this);
		}

		::System::Void set_Edge(::UnityEngine::RectTransform_Edge value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform_Edge))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SAFEAREASIZER_SET_EDGE_OFFSET))(this, value);
		}

		::System::Single get_preferredWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SAFEAREASIZER_GET_PREFERREDWIDTH_OFFSET))(this);
		}

		::System::Single get_preferredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SAFEAREASIZER_GET_PREFERREDHEIGHT_OFFSET))(this);
		}

		::System::Single get_minWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SAFEAREASIZER_GET_MINWIDTH_OFFSET))(this);
		}

		::System::Single get_minHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SAFEAREASIZER_GET_MINHEIGHT_OFFSET))(this);
		}

		::System::Int32 get_layoutPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SAFEAREASIZER_GET_LAYOUTPRIORITY_OFFSET))(this);
		}

		::System::Single get_flexibleHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SAFEAREASIZER_GET_FLEXIBLEHEIGHT_OFFSET))(this);
		}

		::System::Single get_flexibleWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SAFEAREASIZER_GET_FLEXIBLEWIDTH_OFFSET))(this);
		}

		::System::Single get_maxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SAFEAREASIZER_GET_MAXHEIGHT_OFFSET))(this);
		}

		::System::Single get_maxWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SAFEAREASIZER_GET_MAXWIDTH_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SAFEAREASIZER_REFRESH_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SAFEAREASIZER_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_SAFEAREASIZER_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}
	};
}
