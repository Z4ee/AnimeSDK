#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Material; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4DBF70)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS18_0__DOCOLOR_B__0_OFFSET UNITYSDK_OFFSET(0x1C4DBF80)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS18_0__DOCOLOR_B__1_OFFSET UNITYSDK_OFFSET(0x1C4DC010)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass18_0_TypeDefinitionIndex = 25378;

	class ShortcutExtensions___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::UnityEngine::Material* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color _DOColor_b__0()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS18_0__DOCOLOR_B__0_OFFSET))(this);
		}

		::System::Void _DOColor_b__1(::UnityEngine::Color x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS18_0__DOCOLOR_B__1_OFFSET))(this, x);
		}
	};
}
