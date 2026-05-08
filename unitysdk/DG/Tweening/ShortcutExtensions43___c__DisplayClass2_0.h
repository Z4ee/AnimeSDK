#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class SpriteRenderer; }

#define DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C52B9E0)
#define DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS2_0__DOCOLOR_B__0_OFFSET UNITYSDK_OFFSET(0x1C52CC90)
#define DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS2_0__DOCOLOR_B__1_OFFSET UNITYSDK_OFFSET(0x1C52CCD0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions43___c__DisplayClass2_0_TypeDefinitionIndex = 32873;

	class ShortcutExtensions43___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::UnityEngine::SpriteRenderer* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color _DOColor_b__0()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS2_0__DOCOLOR_B__0_OFFSET))(this);
		}

		::System::Void _DOColor_b__1(::UnityEngine::Color x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS2_0__DOCOLOR_B__1_OFFSET))(this, x);
		}
	};
}
