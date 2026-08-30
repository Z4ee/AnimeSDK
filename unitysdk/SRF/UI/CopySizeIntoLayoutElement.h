#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/LayoutElement.h"

namespace UnityEngine { class RectTransform; }

#define SRF_UI_COPYSIZEINTOLAYOUTELEMENT_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1E6B37A0)
#define SRF_UI_COPYSIZEINTOLAYOUTELEMENT_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E6B3720)
#define SRF_UI_COPYSIZEINTOLAYOUTELEMENT_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1E6B36A0)
#define SRF_UI_COPYSIZEINTOLAYOUTELEMENT_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E6B3620)
#define SRF_UI_COPYSIZEINTOLAYOUTELEMENT_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1E6B35A0)
#define SRF_UI_COPYSIZEINTOLAYOUTELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B37B0)

namespace SRF::UI
{
	inline static constexpr unsigned int CopySizeIntoLayoutElement_TypeDefinitionIndex = 34709;

	class CopySizeIntoLayoutElement : public ::UnityEngine::UI::LayoutElement
	{
	public:
		::UnityEngine::RectTransform* CopySource; // 0x60
		::System::Single PaddingHeight; // 0x68
		::System::Single PaddingWidth; // 0x6C
		::System::Boolean SetPreferredSize; // 0x70
		::System::Boolean SetMinimumSize; // 0x71

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYSIZEINTOLAYOUTELEMENT__CTOR_OFFSET))(this);
		}

		::System::Single get_preferredWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYSIZEINTOLAYOUTELEMENT_GET_PREFERREDWIDTH_OFFSET))(this);
		}

		::System::Single get_preferredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYSIZEINTOLAYOUTELEMENT_GET_PREFERREDHEIGHT_OFFSET))(this);
		}

		::System::Single get_minWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYSIZEINTOLAYOUTELEMENT_GET_MINWIDTH_OFFSET))(this);
		}

		::System::Single get_minHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYSIZEINTOLAYOUTELEMENT_GET_MINHEIGHT_OFFSET))(this);
		}

		::System::Int32 get_layoutPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYSIZEINTOLAYOUTELEMENT_GET_LAYOUTPRIORITY_OFFSET))(this);
		}
	};
}
