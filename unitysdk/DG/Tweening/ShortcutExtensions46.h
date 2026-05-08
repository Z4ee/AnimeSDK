#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/ScrambleMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening { class Sequence; }
namespace DG::Tweening { class Tweener; }
namespace System { class String; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI { class Outline; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine::UI { class Slider; }
namespace UnityEngine::UI { class Text; }

#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOANCHORMAX_OFFSET UNITYSDK_OFFSET(0x1C2E46D0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOANCHORMIN_OFFSET UNITYSDK_OFFSET(0x1C2E4860)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOANCHORPOS3D_OFFSET UNITYSDK_OFFSET(0x1C2E4520)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOANCHORPOSX_OFFSET UNITYSDK_OFFSET(0x1C2E41C0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOANCHORPOSY_OFFSET UNITYSDK_OFFSET(0x1C2E4370)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOANCHORPOS_OFFSET UNITYSDK_OFFSET(0x1C2E4030)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOBLENDABLECOLOR_1_OFFSET UNITYSDK_OFFSET(0x1C2E67D0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOBLENDABLECOLOR_2_OFFSET UNITYSDK_OFFSET(0x1C2E69A0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOBLENDABLECOLOR_OFFSET UNITYSDK_OFFSET(0x1C2E65E0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1C2E2EF0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOCOLOR_2_OFFSET UNITYSDK_OFFSET(0x1C2E3B80)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOCOLOR_3_OFFSET UNITYSDK_OFFSET(0x1C2E6100)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOCOLOR_OFFSET UNITYSDK_OFFSET(0x1C2E2BC0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOFADE_1_OFFSET UNITYSDK_OFFSET(0x1C2E2D50)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOFADE_2_OFFSET UNITYSDK_OFFSET(0x1C2E3080)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOFADE_3_OFFSET UNITYSDK_OFFSET(0x1C2E3D10)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOFADE_4_OFFSET UNITYSDK_OFFSET(0x1C2E6290)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOFADE_OFFSET UNITYSDK_OFFSET(0x1C2E2A40)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOFILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C2E3220)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOFLEXIBLESIZE_OFFSET UNITYSDK_OFFSET(0x1C2E36D0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOGRADIENTCOLOR_OFFSET UNITYSDK_OFFSET(0x1C2E33D0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOHORIZONTALNORMALIZEDPOS_OFFSET UNITYSDK_OFFSET(0x1C2E5C50)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOJUMPANCHORPOS_OFFSET UNITYSDK_OFFSET(0x1C2E55C0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOMINSIZE_OFFSET UNITYSDK_OFFSET(0x1C2E3860)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DONORMALIZEDPOS_OFFSET UNITYSDK_OFFSET(0x1C2E5AC0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOPIVOTX_OFFSET UNITYSDK_OFFSET(0x1C2E4B70)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOPIVOTY_OFFSET UNITYSDK_OFFSET(0x1C2E4D10)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOPIVOT_OFFSET UNITYSDK_OFFSET(0x1C2E49F0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOPREFERREDSIZE_OFFSET UNITYSDK_OFFSET(0x1C2E39F0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOPUNCHANCHORPOS_OFFSET UNITYSDK_OFFSET(0x1C2E5050)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOSCALE_OFFSET UNITYSDK_OFFSET(0x1C2E3EB0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOSHAKEANCHORPOS_1_OFFSET UNITYSDK_OFFSET(0x1C2E53C0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOSHAKEANCHORPOS_OFFSET UNITYSDK_OFFSET(0x1C2E51C0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOSIZEDELTA_OFFSET UNITYSDK_OFFSET(0x1C2E4EC0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOTEXT_OFFSET UNITYSDK_OFFSET(0x1C2E6430)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOVALUE_OFFSET UNITYSDK_OFFSET(0x1C2E5F70)
#define DG_TWEENING_SHORTCUTEXTENSIONS46_DOVERTICALNORMALIZEDPOS_OFFSET UNITYSDK_OFFSET(0x1C2E5DE0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions46_TypeDefinitionIndex = 32883;

	class ShortcutExtensions46 : public ::System::Object
	{
	public:
		static ::DG::Tweening::Tweener* DOFade(::UnityEngine::CanvasGroup* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::CanvasGroup*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOFADE_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOColor(::UnityEngine::UI::Graphic* target, ::UnityEngine::Color endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::UI::Graphic*, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOCOLOR_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOFade_1(::UnityEngine::UI::Graphic* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::UI::Graphic*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOFADE_1_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOColor_1(::UnityEngine::UI::Image* target, ::UnityEngine::Color endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::UI::Image*, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOCOLOR_1_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOFade_2(::UnityEngine::UI::Image* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::UI::Image*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOFADE_2_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOFillAmount(::UnityEngine::UI::Image* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::UI::Image*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOFILLAMOUNT_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Sequence* DOGradientColor(::UnityEngine::UI::Image* target, ::UnityEngine::Gradient* gradient, ::System::Single duration)
		{
			return ((::DG::Tweening::Sequence*(*)(::UnityEngine::UI::Image*, ::UnityEngine::Gradient*, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOGRADIENTCOLOR_OFFSET))(target, gradient, duration);
		}

		static ::DG::Tweening::Tweener* DOFlexibleSize(::UnityEngine::UI::LayoutElement* target, ::UnityEngine::Vector2 endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::UI::LayoutElement*, ::UnityEngine::Vector2, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOFLEXIBLESIZE_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOMinSize(::UnityEngine::UI::LayoutElement* target, ::UnityEngine::Vector2 endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::UI::LayoutElement*, ::UnityEngine::Vector2, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOMINSIZE_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOPreferredSize(::UnityEngine::UI::LayoutElement* target, ::UnityEngine::Vector2 endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::UI::LayoutElement*, ::UnityEngine::Vector2, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOPREFERREDSIZE_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOColor_2(::UnityEngine::UI::Outline* target, ::UnityEngine::Color endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::UI::Outline*, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOCOLOR_2_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOFade_3(::UnityEngine::UI::Outline* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::UI::Outline*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOFADE_3_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOScale(::UnityEngine::UI::Outline* target, ::UnityEngine::Vector2 endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::UI::Outline*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOSCALE_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOAnchorPos(::UnityEngine::RectTransform* target, ::UnityEngine::Vector2 endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOANCHORPOS_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOAnchorPosX(::UnityEngine::RectTransform* target, ::System::Single endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOANCHORPOSX_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOAnchorPosY(::UnityEngine::RectTransform* target, ::System::Single endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOANCHORPOSY_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOAnchorPos3D(::UnityEngine::RectTransform* target, ::UnityEngine::Vector3 endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOANCHORPOS3D_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOAnchorMax(::UnityEngine::RectTransform* target, ::UnityEngine::Vector2 endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOANCHORMAX_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOAnchorMin(::UnityEngine::RectTransform* target, ::UnityEngine::Vector2 endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOANCHORMIN_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOPivot(::UnityEngine::RectTransform* target, ::UnityEngine::Vector2 endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOPIVOT_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOPivotX(::UnityEngine::RectTransform* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOPIVOTX_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOPivotY(::UnityEngine::RectTransform* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOPIVOTY_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOSizeDelta(::UnityEngine::RectTransform* target, ::UnityEngine::Vector2 endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOSIZEDELTA_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOPunchAnchorPos(::UnityEngine::RectTransform* target, ::UnityEngine::Vector2 punch, ::System::Single duration, ::System::Int32 vibrato, ::System::Single elasticity, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::System::Single, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOPUNCHANCHORPOS_OFFSET))(target, punch, duration, vibrato, elasticity, snapping);
		}

		static ::DG::Tweening::Tweener* DOShakeAnchorPos(::UnityEngine::RectTransform* target, ::System::Single duration, ::System::Single strength, ::System::Int32 vibrato, ::System::Single randomness, ::System::Boolean snapping, ::System::Boolean fadeOut)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOSHAKEANCHORPOS_OFFSET))(target, duration, strength, vibrato, randomness, snapping, fadeOut);
		}

		static ::DG::Tweening::Tweener* DOShakeAnchorPos_1(::UnityEngine::RectTransform* target, ::System::Single duration, ::UnityEngine::Vector2 strength, ::System::Int32 vibrato, ::System::Single randomness, ::System::Boolean snapping, ::System::Boolean fadeOut)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::RectTransform*, ::System::Single, ::UnityEngine::Vector2, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOSHAKEANCHORPOS_1_OFFSET))(target, duration, strength, vibrato, randomness, snapping, fadeOut);
		}

		static ::DG::Tweening::Sequence* DOJumpAnchorPos(::UnityEngine::RectTransform* target, ::UnityEngine::Vector2 endValue, ::System::Single jumpPower, ::System::Int32 numJumps, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Sequence*(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::System::Single, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOJUMPANCHORPOS_OFFSET))(target, endValue, jumpPower, numJumps, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DONormalizedPos(::UnityEngine::UI::ScrollRect* target, ::UnityEngine::Vector2 endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::UI::ScrollRect*, ::UnityEngine::Vector2, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DONORMALIZEDPOS_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOHorizontalNormalizedPos(::UnityEngine::UI::ScrollRect* target, ::System::Single endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::UI::ScrollRect*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOHORIZONTALNORMALIZEDPOS_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOVerticalNormalizedPos(::UnityEngine::UI::ScrollRect* target, ::System::Single endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::UI::ScrollRect*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOVERTICALNORMALIZEDPOS_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOValue(::UnityEngine::UI::Slider* target, ::System::Single endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::UI::Slider*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOVALUE_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOColor_3(::UnityEngine::UI::Text* target, ::UnityEngine::Color endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::UI::Text*, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOCOLOR_3_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOFade_4(::UnityEngine::UI::Text* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::UI::Text*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOFADE_4_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOText(::UnityEngine::UI::Text* target, ::System::String* endValue, ::System::Single duration, ::System::Boolean richTextEnabled, ::DG::Tweening::ScrambleMode scrambleMode, ::System::String* scrambleChars)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::UI::Text*, ::System::String*, ::System::Single, ::System::Boolean, ::DG::Tweening::ScrambleMode, ::System::String*))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOTEXT_OFFSET))(target, endValue, duration, richTextEnabled, scrambleMode, scrambleChars);
		}

		static ::DG::Tweening::Tweener* DOBlendableColor(::UnityEngine::UI::Graphic* target, ::UnityEngine::Color endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::UI::Graphic*, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOBLENDABLECOLOR_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOBlendableColor_1(::UnityEngine::UI::Image* target, ::UnityEngine::Color endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::UI::Image*, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOBLENDABLECOLOR_1_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOBlendableColor_2(::UnityEngine::UI::Text* target, ::UnityEngine::Color endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::UI::Text*, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46_DOBLENDABLECOLOR_2_OFFSET))(target, endValue, duration);
		}
	};
}
