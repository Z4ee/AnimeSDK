#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Rigidbody2D; }

#define DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC3F310)
#define DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS6_0__DOMOVEX_B__0_OFFSET UNITYSDK_OFFSET(0x1FC3FF20)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions43___c__DisplayClass6_0_TypeDefinitionIndex = 35083;

	class ShortcutExtensions43___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::UnityEngine::Rigidbody2D* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 _DOMoveX_b__0()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS6_0__DOMOVEX_B__0_OFFSET))(this);
		}
	};
}
