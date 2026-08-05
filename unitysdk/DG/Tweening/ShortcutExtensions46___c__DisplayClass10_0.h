#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine::UI { class Outline; }

#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA1D9F0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS10_0__DOCOLOR_B__0_OFFSET UNITYSDK_OFFSET(0x1FA208D0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS10_0__DOCOLOR_B__1_OFFSET UNITYSDK_OFFSET(0x1FA20900)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions46___c__DisplayClass10_0_TypeDefinitionIndex = 35100;

	class ShortcutExtensions46___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Outline* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color _DOColor_b__0()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS10_0__DOCOLOR_B__0_OFFSET))(this);
		}

		::System::Void _DOColor_b__1(::UnityEngine::Color x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS10_0__DOCOLOR_B__1_OFFSET))(this, x);
		}
	};
}
