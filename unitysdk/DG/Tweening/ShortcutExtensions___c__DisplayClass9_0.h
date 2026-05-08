#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace UnityEngine { class Camera; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C560B70)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS9_0__DORECT_B__0_OFFSET UNITYSDK_OFFSET(0x1C560B80)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS9_0__DORECT_B__1_OFFSET UNITYSDK_OFFSET(0x1C560BC0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass9_0_TypeDefinitionIndex = 25369;

	class ShortcutExtensions___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::UnityEngine::Camera* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rect _DORect_b__0()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS9_0__DORECT_B__0_OFFSET))(this);
		}

		::System::Void _DORect_b__1(::UnityEngine::Rect x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS9_0__DORECT_B__1_OFFSET))(this, x);
		}
	};
}
