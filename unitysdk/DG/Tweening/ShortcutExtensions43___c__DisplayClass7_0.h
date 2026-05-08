#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Rigidbody2D; }

#define DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C52C370)
#define DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS7_0__DOMOVEY_B__0_OFFSET UNITYSDK_OFFSET(0x1C52CDF0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions43___c__DisplayClass7_0_TypeDefinitionIndex = 32877;

	class ShortcutExtensions43___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::UnityEngine::Rigidbody2D* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 _DOMoveY_b__0()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS7_0__DOMOVEY_B__0_OFFSET))(this);
		}
	};
}
