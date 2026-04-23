#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"

namespace UnityEngine { class RectTransform; }

#define SRF_UI_COPYLAYOUTELEMENT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x19EAA3B0)
#define SRF_UI_COPYLAYOUTELEMENT_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x19EAA3C0)
#define SRF_UI_COPYLAYOUTELEMENT_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x19EAA370)
#define SRF_UI_COPYLAYOUTELEMENT_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x19EAA380)
#define SRF_UI_COPYLAYOUTELEMENT_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x19EAA360)
#define SRF_UI_COPYLAYOUTELEMENT_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x19EAA390)
#define SRF_UI_COPYLAYOUTELEMENT_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x19EAA3A0)
#define SRF_UI_COPYLAYOUTELEMENT_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x19EAA2E0)
#define SRF_UI_COPYLAYOUTELEMENT_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x19EAA260)
#define SRF_UI_COPYLAYOUTELEMENT_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x19EAA1E0)
#define SRF_UI_COPYLAYOUTELEMENT_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x19EAA160)
#define SRF_UI_COPYLAYOUTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19EAA3D0)

namespace SRF::UI
{
	inline static constexpr unsigned int CopyLayoutElement_TypeDefinitionIndex = 33287;

	class CopyLayoutElement : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::System::Boolean CopyMinHeight; // 0x18
		::System::Boolean CopyMinWidth; // 0x19
		::System::Boolean CopyPreferredHeight; // 0x1A
		::System::Boolean CopyPreferredWidth; // 0x1B
		::UnityEngine::RectTransform* CopySource; // 0x20
		::System::Single PaddingMinHeight; // 0x28
		::System::Single PaddingMinWidth; // 0x2C
		::System::Single PaddingPreferredHeight; // 0x30
		::System::Single PaddingPreferredWidth; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYLAYOUTELEMENT__CTOR_OFFSET))(this);
		}

		::System::Single get_preferredWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYLAYOUTELEMENT_GET_PREFERREDWIDTH_OFFSET))(this);
		}

		::System::Single get_preferredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYLAYOUTELEMENT_GET_PREFERREDHEIGHT_OFFSET))(this);
		}

		::System::Single get_minWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYLAYOUTELEMENT_GET_MINWIDTH_OFFSET))(this);
		}

		::System::Single get_minHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYLAYOUTELEMENT_GET_MINHEIGHT_OFFSET))(this);
		}

		::System::Int32 get_layoutPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYLAYOUTELEMENT_GET_LAYOUTPRIORITY_OFFSET))(this);
		}

		::System::Single get_flexibleHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYLAYOUTELEMENT_GET_FLEXIBLEHEIGHT_OFFSET))(this);
		}

		::System::Single get_flexibleWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYLAYOUTELEMENT_GET_FLEXIBLEWIDTH_OFFSET))(this);
		}

		::System::Single get_maxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYLAYOUTELEMENT_GET_MAXHEIGHT_OFFSET))(this);
		}

		::System::Single get_maxWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYLAYOUTELEMENT_GET_MAXWIDTH_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYLAYOUTELEMENT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYLAYOUTELEMENT_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}
	};
}
