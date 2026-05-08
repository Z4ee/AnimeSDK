#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E49E0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS18_0__DOANCHORMIN_B__0_OFFSET UNITYSDK_OFFSET(0x1C2E6F80)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS18_0__DOANCHORMIN_B__1_OFFSET UNITYSDK_OFFSET(0x1C2E6FC0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions46___c__DisplayClass18_0_TypeDefinitionIndex = 32901;

	class ShortcutExtensions46___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 _DOAnchorMin_b__0()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS18_0__DOANCHORMIN_B__0_OFFSET))(this);
		}

		::System::Void _DOAnchorMin_b__1(::UnityEngine::Vector2 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS18_0__DOANCHORMIN_B__1_OFFSET))(this, x);
		}
	};
}
