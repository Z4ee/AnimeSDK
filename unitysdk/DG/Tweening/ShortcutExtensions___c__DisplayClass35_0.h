#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class TrailRenderer; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E4C60)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS35_0__DORESIZE_B__0_OFFSET UNITYSDK_OFFSET(0x1E7E4C70)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS35_0__DORESIZE_B__1_OFFSET UNITYSDK_OFFSET(0x1E7E4CD0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass35_0_TypeDefinitionIndex = 27886;

	class ShortcutExtensions___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::UnityEngine::TrailRenderer* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 _DOResize_b__0()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS35_0__DORESIZE_B__0_OFFSET))(this);
		}

		::System::Void _DOResize_b__1(::UnityEngine::Vector2 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS35_0__DORESIZE_B__1_OFFSET))(this, x);
		}
	};
}
