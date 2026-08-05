#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace UnityEngine { class Rigidbody; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBC02D0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS32_0__DOROTATE_B__0_OFFSET UNITYSDK_OFFSET(0x1FBC02E0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass32_0_TypeDefinitionIndex = 28487;

	class ShortcutExtensions___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::UnityEngine::Rigidbody* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Quaternion _DORotate_b__0()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS32_0__DOROTATE_B__0_OFFSET))(this);
		}
	};
}
