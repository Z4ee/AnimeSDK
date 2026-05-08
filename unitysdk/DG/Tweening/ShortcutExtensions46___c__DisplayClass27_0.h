#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UI { class ScrollRect; }

#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E5C40)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS27_0__DONORMALIZEDPOS_B__0_OFFSET UNITYSDK_OFFSET(0x1C2E75F0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS27_0__DONORMALIZEDPOS_B__1_OFFSET UNITYSDK_OFFSET(0x1C2E7650)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions46___c__DisplayClass27_0_TypeDefinitionIndex = 32910;

	class ShortcutExtensions46___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::ScrollRect* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 _DONormalizedPos_b__0()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS27_0__DONORMALIZEDPOS_B__0_OFFSET))(this);
		}

		::System::Void _DONormalizedPos_b__1(::UnityEngine::Vector2 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS27_0__DONORMALIZEDPOS_B__1_OFFSET))(this, x);
		}
	};
}
