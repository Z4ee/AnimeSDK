#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Material; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS71_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E82D2C0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS71_0__DOBLENDABLECOLOR_B__0_OFFSET UNITYSDK_OFFSET(0x1E82D2D0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS71_0__DOBLENDABLECOLOR_B__1_OFFSET UNITYSDK_OFFSET(0x1E82D2E0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass71_0_TypeDefinitionIndex = 27922;

	class ShortcutExtensions___c__DisplayClass71_0 : public ::System::Object
	{
	public:
		::UnityEngine::Material* target; // 0x10
		::UnityEngine::Color to; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS71_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color _DOBlendableColor_b__0()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS71_0__DOBLENDABLECOLOR_B__0_OFFSET))(this);
		}

		::System::Void _DOBlendableColor_b__1(::UnityEngine::Color x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS71_0__DOBLENDABLECOLOR_B__1_OFFSET))(this, x);
		}
	};
}
