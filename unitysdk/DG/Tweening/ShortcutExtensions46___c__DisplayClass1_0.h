#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine::UI { class Graphic; }

#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA1CA30)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS1_0__DOCOLOR_B__0_OFFSET UNITYSDK_OFFSET(0x1FA20D70)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS1_0__DOCOLOR_B__1_OFFSET UNITYSDK_OFFSET(0x1FA20DB0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions46___c__DisplayClass1_0_TypeDefinitionIndex = 35092;

	class ShortcutExtensions46___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Graphic* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color _DOColor_b__0()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS1_0__DOCOLOR_B__0_OFFSET))(this);
		}

		::System::Void _DOColor_b__1(::UnityEngine::Color x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS1_0__DOCOLOR_B__1_OFFSET))(this, x);
		}
	};
}
