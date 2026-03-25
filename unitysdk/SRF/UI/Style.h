#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Sprite; }

#define SRF_UI_STYLE_COPYFROM_OFFSET UNITYSDK_OFFSET(0x18475950)
#define SRF_UI_STYLE_COPY_OFFSET UNITYSDK_OFFSET(0x18475890)
#define SRF_UI_STYLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18475930)

namespace SRF::UI
{
	inline static constexpr unsigned int Style_TypeDefinitionIndex = 27686;

	class Style : public ::System::Object
	{
	public:
		::UnityEngine::Color ActiveColor; // 0x10
		::UnityEngine::Color DisabledColor; // 0x20
		::UnityEngine::Color HoverColor; // 0x30
		::UnityEngine::Sprite* Image; // 0x40
		::UnityEngine::Color NormalColor; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_STYLE__CTOR_OFFSET))(this);
		}

		::SRF::UI::Style* Copy()
		{
			return ((::SRF::UI::Style*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_STYLE_COPY_OFFSET))(this);
		}

		::System::Void CopyFrom(::SRF::UI::Style* style)
		{
			return ((::System::Void(*)(::PVOID, ::SRF::UI::Style*))((::PBYTE)hIl2Cpp + SRF_UI_STYLE_COPYFROM_OFFSET))(this, style);
		}
	};
}
