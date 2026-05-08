#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Rigidbody; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5462E0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS28_0__DOMOVE_B__0_OFFSET UNITYSDK_OFFSET(0x1C5462F0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass28_0_TypeDefinitionIndex = 25388;

	class ShortcutExtensions___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::UnityEngine::Rigidbody* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _DOMove_b__0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS28_0__DOMOVE_B__0_OFFSET))(this);
		}
	};
}
