#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Light; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS70_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E82D230)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS70_0__DOBLENDABLECOLOR_B__0_OFFSET UNITYSDK_OFFSET(0x1E82D240)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS70_0__DOBLENDABLECOLOR_B__1_OFFSET UNITYSDK_OFFSET(0x1E82D250)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass70_0_TypeDefinitionIndex = 27921;

	class ShortcutExtensions___c__DisplayClass70_0 : public ::System::Object
	{
	public:
		::UnityEngine::Light* target; // 0x10
		::UnityEngine::Color to; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS70_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color _DOBlendableColor_b__0()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS70_0__DOBLENDABLECOLOR_B__0_OFFSET))(this);
		}

		::System::Void _DOBlendableColor_b__1(::UnityEngine::Color x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS70_0__DOBLENDABLECOLOR_B__1_OFFSET))(this, x);
		}
	};
}
