#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class SpriteRenderer; }

#define DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC3ECD0)
#define DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS3_0__DOFADE_B__0_OFFSET UNITYSDK_OFFSET(0x1FC3FE70)
#define DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS3_0__DOFADE_B__1_OFFSET UNITYSDK_OFFSET(0x1FC3FEB0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions43___c__DisplayClass3_0_TypeDefinitionIndex = 35081;

	class ShortcutExtensions43___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::UnityEngine::SpriteRenderer* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color _DOFade_b__0()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS3_0__DOFADE_B__0_OFFSET))(this);
		}

		::System::Void _DOFade_b__1(::UnityEngine::Color x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS3_0__DOFADE_B__1_OFFSET))(this, x);
		}
	};
}
