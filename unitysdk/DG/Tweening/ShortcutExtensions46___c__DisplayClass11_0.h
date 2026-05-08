#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine::UI { class Outline; }

#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E3EA0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS11_0__DOFADE_B__0_OFFSET UNITYSDK_OFFSET(0x1C2E6C20)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS11_0__DOFADE_B__1_OFFSET UNITYSDK_OFFSET(0x1C2E6C50)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions46___c__DisplayClass11_0_TypeDefinitionIndex = 32894;

	class ShortcutExtensions46___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Outline* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color _DOFade_b__0()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS11_0__DOFADE_B__0_OFFSET))(this);
		}

		::System::Void _DOFade_b__1(::UnityEngine::Color x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS11_0__DOFADE_B__1_OFFSET))(this, x);
		}
	};
}
