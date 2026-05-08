#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening { class Sequence; }
namespace DG::Tweening { class Tweener; }
namespace System { class String; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Rigidbody2D; }
namespace UnityEngine { class SpriteRenderer; }

#define DG_TWEENING_SHORTCUTEXTENSIONS43_DOBLENDABLECOLOR_OFFSET UNITYSDK_OFFSET(0x1C52CA10)
#define DG_TWEENING_SHORTCUTEXTENSIONS43_DOCOLOR_OFFSET UNITYSDK_OFFSET(0x1C52B860)
#define DG_TWEENING_SHORTCUTEXTENSIONS43_DOFADE_OFFSET UNITYSDK_OFFSET(0x1C52B9F0)
#define DG_TWEENING_SHORTCUTEXTENSIONS43_DOGRADIENTCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1C52B500)
#define DG_TWEENING_SHORTCUTEXTENSIONS43_DOGRADIENTCOLOR_2_OFFSET UNITYSDK_OFFSET(0x1C52BB90)
#define DG_TWEENING_SHORTCUTEXTENSIONS43_DOGRADIENTCOLOR_OFFSET UNITYSDK_OFFSET(0x1C52B1A0)
#define DG_TWEENING_SHORTCUTEXTENSIONS43_DOJUMP_OFFSET UNITYSDK_OFFSET(0x1C52C510)
#define DG_TWEENING_SHORTCUTEXTENSIONS43_DOMOVEX_OFFSET UNITYSDK_OFFSET(0x1C52C020)
#define DG_TWEENING_SHORTCUTEXTENSIONS43_DOMOVEY_OFFSET UNITYSDK_OFFSET(0x1C52C1D0)
#define DG_TWEENING_SHORTCUTEXTENSIONS43_DOMOVE_OFFSET UNITYSDK_OFFSET(0x1C52BE90)
#define DG_TWEENING_SHORTCUTEXTENSIONS43_DOROTATE_OFFSET UNITYSDK_OFFSET(0x1C52C380)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions43_TypeDefinitionIndex = 32872;

	class ShortcutExtensions43 : public ::System::Object
	{
	public:
		static ::DG::Tweening::Sequence* DOGradientColor(::UnityEngine::Material* target, ::UnityEngine::Gradient* gradient, ::System::Single duration)
		{
			return ((::DG::Tweening::Sequence*(*)(::UnityEngine::Material*, ::UnityEngine::Gradient*, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43_DOGRADIENTCOLOR_OFFSET))(target, gradient, duration);
		}

		static ::DG::Tweening::Sequence* DOGradientColor_1(::UnityEngine::Material* target, ::UnityEngine::Gradient* gradient, ::System::String* property, ::System::Single duration)
		{
			return ((::DG::Tweening::Sequence*(*)(::UnityEngine::Material*, ::UnityEngine::Gradient*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43_DOGRADIENTCOLOR_1_OFFSET))(target, gradient, property, duration);
		}

		static ::DG::Tweening::Tweener* DOColor(::UnityEngine::SpriteRenderer* target, ::UnityEngine::Color endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::SpriteRenderer*, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43_DOCOLOR_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Tweener* DOFade(::UnityEngine::SpriteRenderer* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::SpriteRenderer*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43_DOFADE_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Sequence* DOGradientColor_2(::UnityEngine::SpriteRenderer* target, ::UnityEngine::Gradient* gradient, ::System::Single duration)
		{
			return ((::DG::Tweening::Sequence*(*)(::UnityEngine::SpriteRenderer*, ::UnityEngine::Gradient*, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43_DOGRADIENTCOLOR_2_OFFSET))(target, gradient, duration);
		}

		static ::DG::Tweening::Tweener* DOMove(::UnityEngine::Rigidbody2D* target, ::UnityEngine::Vector2 endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::Vector2, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43_DOMOVE_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOMoveX(::UnityEngine::Rigidbody2D* target, ::System::Single endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Rigidbody2D*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43_DOMOVEX_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOMoveY(::UnityEngine::Rigidbody2D* target, ::System::Single endValue, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Rigidbody2D*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43_DOMOVEY_OFFSET))(target, endValue, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DORotate(::UnityEngine::Rigidbody2D* target, ::System::Single endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::Rigidbody2D*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43_DOROTATE_OFFSET))(target, endValue, duration);
		}

		static ::DG::Tweening::Sequence* DOJump(::UnityEngine::Rigidbody2D* target, ::UnityEngine::Vector2 endValue, ::System::Single jumpPower, ::System::Int32 numJumps, ::System::Single duration, ::System::Boolean snapping)
		{
			return ((::DG::Tweening::Sequence*(*)(::UnityEngine::Rigidbody2D*, ::UnityEngine::Vector2, ::System::Single, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43_DOJUMP_OFFSET))(target, endValue, jumpPower, numJumps, duration, snapping);
		}

		static ::DG::Tweening::Tweener* DOBlendableColor(::UnityEngine::SpriteRenderer* target, ::UnityEngine::Color endValue, ::System::Single duration)
		{
			return ((::DG::Tweening::Tweener*(*)(::UnityEngine::SpriteRenderer*, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43_DOBLENDABLECOLOR_OFFSET))(target, endValue, duration);
		}
	};
}
