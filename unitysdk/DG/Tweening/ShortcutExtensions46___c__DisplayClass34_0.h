#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine::UI { class Graphic; }

#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6380B0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS34_0__DOBLENDABLECOLOR_B__0_OFFSET UNITYSDK_OFFSET(0x1E639370)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS34_0__DOBLENDABLECOLOR_B__1_OFFSET UNITYSDK_OFFSET(0x1E639380)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions46___c__DisplayClass34_0_TypeDefinitionIndex = 34470;

	class ShortcutExtensions46___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Graphic* target; // 0x10
		::UnityEngine::Color to; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color _DOBlendableColor_b__0()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS34_0__DOBLENDABLECOLOR_B__0_OFFSET))(this);
		}

		::System::Void _DOBlendableColor_b__1(::UnityEngine::Color x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS34_0__DOBLENDABLECOLOR_B__1_OFFSET))(this, x);
		}
	};
}
