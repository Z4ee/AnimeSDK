#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine::UI { class Text; }

#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E6B60)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS36_0__DOBLENDABLECOLOR_B__0_OFFSET UNITYSDK_OFFSET(0x1C2E7B50)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS36_0__DOBLENDABLECOLOR_B__1_OFFSET UNITYSDK_OFFSET(0x1C2E7B60)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions46___c__DisplayClass36_0_TypeDefinitionIndex = 32919;

	class ShortcutExtensions46___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Text* target; // 0x10
		::UnityEngine::Color to; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color _DOBlendableColor_b__0()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS36_0__DOBLENDABLECOLOR_B__0_OFFSET))(this);
		}

		::System::Void _DOBlendableColor_b__1(::UnityEngine::Color x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS36_0__DOBLENDABLECOLOR_B__1_OFFSET))(this, x);
		}
	};
}
