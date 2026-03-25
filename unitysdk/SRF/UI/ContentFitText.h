#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace SRF::UI { class SRText; }

#define SRF_UI_CONTENTFITTEXT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1846EC60)
#define SRF_UI_CONTENTFITTEXT_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1846EC80)
#define SRF_UI_CONTENTFITTEXT_COPYSOURCEONLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x1846EEC0)
#define SRF_UI_CONTENTFITTEXT_GET_FLEXIBLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1846EB70)
#define SRF_UI_CONTENTFITTEXT_GET_FLEXIBLEWIDTH_OFFSET UNITYSDK_OFFSET(0x1846E930)
#define SRF_UI_CONTENTFITTEXT_GET_LAYOUTPRIORITY_OFFSET UNITYSDK_OFFSET(0x1846EC50)
#define SRF_UI_CONTENTFITTEXT_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1846EC30)
#define SRF_UI_CONTENTFITTEXT_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x1846EC40)
#define SRF_UI_CONTENTFITTEXT_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1846E9F0)
#define SRF_UI_CONTENTFITTEXT_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x1846E7B0)
#define SRF_UI_CONTENTFITTEXT_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1846EAB0)
#define SRF_UI_CONTENTFITTEXT_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1846E870)
#define SRF_UI_CONTENTFITTEXT_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1846F1D0)
#define SRF_UI_CONTENTFITTEXT_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1846F160)
#define SRF_UI_CONTENTFITTEXT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1846EFA0)
#define SRF_UI_CONTENTFITTEXT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1846ECA0)
#define SRF_UI_CONTENTFITTEXT_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1846EF30)
#define SRF_UI_CONTENTFITTEXT_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1846EDD0)
#define SRF_UI_CONTENTFITTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1846F240)

namespace SRF::UI
{
	inline static constexpr unsigned int ContentFitText_TypeDefinitionIndex = 27662;

	class ContentFitText : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::SRF::UI::SRText* CopySource; // 0x18
		::UnityEngine::Vector2 Padding; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT__CTOR_OFFSET))(this);
		}

		::System::Single get_minWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_MINWIDTH_OFFSET))(this);
		}

		::System::Single get_preferredWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_PREFERREDWIDTH_OFFSET))(this);
		}

		::System::Single get_flexibleWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_FLEXIBLEWIDTH_OFFSET))(this);
		}

		::System::Single get_minHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_MINHEIGHT_OFFSET))(this);
		}

		::System::Single get_preferredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_PREFERREDHEIGHT_OFFSET))(this);
		}

		::System::Single get_flexibleHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_FLEXIBLEHEIGHT_OFFSET))(this);
		}

		::System::Single get_maxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_MAXHEIGHT_OFFSET))(this);
		}

		::System::Single get_maxWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_MAXWIDTH_OFFSET))(this);
		}

		::System::Int32 get_layoutPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_GET_LAYOUTPRIORITY_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_ONENABLE_OFFSET))(this);
		}

		::System::Void CopySourceOnLayoutDirty(::SRF::UI::SRText* srText)
		{
			return ((::System::Void(*)(::PVOID, ::SRF::UI::SRText*))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_COPYSOURCEONLAYOUTDIRTY_OFFSET))(this, srText);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnBeforeTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_ONBEFORETRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_CONTENTFITTEXT_SETDIRTY_OFFSET))(this);
		}
	};
}
