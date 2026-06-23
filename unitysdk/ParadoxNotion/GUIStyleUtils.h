#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextAnchor.h"

namespace UnityEngine { class GUIStyle; }

#define PARADOXNOTION_GUISTYLEUTILS_BORDER_OFFSET UNITYSDK_OFFSET(0x1D53F4C0)
#define PARADOXNOTION_GUISTYLEUTILS_MARGIN_OFFSET UNITYSDK_OFFSET(0x1D53F340)
#define PARADOXNOTION_GUISTYLEUTILS_OVERFLOW_OFFSET UNITYSDK_OFFSET(0x1D53F570)
#define PARADOXNOTION_GUISTYLEUTILS_PADDING_OFFSET UNITYSDK_OFFSET(0x1D53F400)
#define PARADOXNOTION_GUISTYLEUTILS_RICHTEXT_OFFSET UNITYSDK_OFFSET(0x1D53F660)
#define PARADOXNOTION_GUISTYLEUTILS_TEXTALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1D53F630)

namespace ParadoxNotion
{
	inline static constexpr unsigned int GUIStyleUtils_TypeDefinitionIndex = 30859;

	class GUIStyleUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::GUIStyle* Margin(::UnityEngine::GUIStyle* style, ::System::Int32 left, ::System::Int32 right, ::System::Int32 top, ::System::Int32 bottom)
		{
			return ((::UnityEngine::GUIStyle*(*)(::UnityEngine::GUIStyle*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PARADOXNOTION_GUISTYLEUTILS_MARGIN_OFFSET))(style, left, right, top, bottom);
		}

		static ::UnityEngine::GUIStyle* Padding(::UnityEngine::GUIStyle* style, ::System::Int32 left, ::System::Int32 right, ::System::Int32 top, ::System::Int32 bottom)
		{
			return ((::UnityEngine::GUIStyle*(*)(::UnityEngine::GUIStyle*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PARADOXNOTION_GUISTYLEUTILS_PADDING_OFFSET))(style, left, right, top, bottom);
		}

		static ::UnityEngine::GUIStyle* Border(::UnityEngine::GUIStyle* style, ::System::Int32 left, ::System::Int32 right, ::System::Int32 top, ::System::Int32 bottom)
		{
			return ((::UnityEngine::GUIStyle*(*)(::UnityEngine::GUIStyle*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PARADOXNOTION_GUISTYLEUTILS_BORDER_OFFSET))(style, left, right, top, bottom);
		}

		static ::UnityEngine::GUIStyle* Overflow(::UnityEngine::GUIStyle* style, ::System::Int32 left, ::System::Int32 right, ::System::Int32 top, ::System::Int32 bottom)
		{
			return ((::UnityEngine::GUIStyle*(*)(::UnityEngine::GUIStyle*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PARADOXNOTION_GUISTYLEUTILS_OVERFLOW_OFFSET))(style, left, right, top, bottom);
		}

		static ::UnityEngine::GUIStyle* TextAlignment(::UnityEngine::GUIStyle* style, ::UnityEngine::TextAnchor anchor)
		{
			return ((::UnityEngine::GUIStyle*(*)(::UnityEngine::GUIStyle*, ::UnityEngine::TextAnchor))((::PBYTE)hIl2Cpp + PARADOXNOTION_GUISTYLEUTILS_TEXTALIGNMENT_OFFSET))(style, anchor);
		}

		static ::UnityEngine::GUIStyle* RichText(::UnityEngine::GUIStyle* style, ::System::Boolean rich)
		{
			return ((::UnityEngine::GUIStyle*(*)(::UnityEngine::GUIStyle*, ::System::Boolean))((::PBYTE)hIl2Cpp + PARADOXNOTION_GUISTYLEUTILS_RICHTEXT_OFFSET))(style, rich);
		}
	};
}
