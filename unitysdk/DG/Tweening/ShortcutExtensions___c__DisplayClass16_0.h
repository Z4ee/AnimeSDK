#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Light; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4DBE80)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS16_0__DOSHADOWSTRENGTH_B__0_OFFSET UNITYSDK_OFFSET(0x1C4DBE90)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS16_0__DOSHADOWSTRENGTH_B__1_OFFSET UNITYSDK_OFFSET(0x1C4DBEB0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass16_0_TypeDefinitionIndex = 25376;

	class ShortcutExtensions___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::UnityEngine::Light* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Single _DOShadowStrength_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS16_0__DOSHADOWSTRENGTH_B__0_OFFSET))(this);
		}

		::System::Void _DOShadowStrength_b__1(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS16_0__DOSHADOWSTRENGTH_B__1_OFFSET))(this, x);
		}
	};
}
