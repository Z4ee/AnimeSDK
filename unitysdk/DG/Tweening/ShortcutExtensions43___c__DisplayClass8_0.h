#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Rigidbody2D; }

#define DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E85F040)
#define DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS8_0__DOROTATE_B__0_OFFSET UNITYSDK_OFFSET(0x1E85F980)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions43___c__DisplayClass8_0_TypeDefinitionIndex = 34431;

	class ShortcutExtensions43___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::UnityEngine::Rigidbody2D* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Single _DORotate_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS43___C__DISPLAYCLASS8_0__DOROTATE_B__0_OFFSET))(this);
		}
	};
}
