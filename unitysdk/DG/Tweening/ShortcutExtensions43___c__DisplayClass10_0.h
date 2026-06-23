#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class SpriteRenderer; }

#define DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E85F750)
#define DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS10_0__DOBLENDABLECOLOR_B__0_OFFSET UNITYSDK_OFFSET(0x1E85F760)
#define DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS10_0__DOBLENDABLECOLOR_B__1_OFFSET UNITYSDK_OFFSET(0x1E85F770)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions43___c__DisplayClass10_0_TypeDefinitionIndex = 34433;

	class ShortcutExtensions43___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::UnityEngine::SpriteRenderer* target; // 0x10
		::UnityEngine::Color to; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color _DOBlendableColor_b__0()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS10_0__DOBLENDABLECOLOR_B__0_OFFSET))(this);
		}

		::System::Void _DOBlendableColor_b__1(::UnityEngine::Color x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS10_0__DOBLENDABLECOLOR_B__1_OFFSET))(this, x);
		}
	};
}
