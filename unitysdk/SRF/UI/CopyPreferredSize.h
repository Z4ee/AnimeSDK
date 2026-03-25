#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/LayoutElement.h"

namespace UnityEngine { class RectTransform; }

#define SRF_UI_COPYPREFERREDSIZE_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1846F5B0)
#define SRF_UI_COPYPREFERREDSIZE_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1846F540)
#define SRF_UI_COPYPREFERREDSIZE_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1846F4D0)
#define SRF_UI_COPYPREFERREDSIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1846F5C0)

namespace SRF::UI
{
	inline static constexpr unsigned int CopyPreferredSize_TypeDefinitionIndex = 27664;

	class CopyPreferredSize : public ::UnityEngine::UI::LayoutElement
	{
	public:
		::UnityEngine::RectTransform* CopySource; // 0x60
		::System::Single PaddingHeight; // 0x68
		::System::Single PaddingWidth; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYPREFERREDSIZE__CTOR_OFFSET))(this);
		}

		::System::Single get_preferredWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYPREFERREDSIZE_GET_PREFERREDWIDTH_OFFSET))(this);
		}

		::System::Single get_preferredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYPREFERREDSIZE_GET_PREFERREDHEIGHT_OFFSET))(this);
		}

		::System::Int32 get_layoutPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_COPYPREFERREDSIZE_GET_LAYOUTPRIORITY_OFFSET))(this);
		}
	};
}
