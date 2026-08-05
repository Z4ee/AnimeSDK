#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace UnityEngine { class Rigidbody; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBC0320)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS33_0__DOLOOKAT_B__0_OFFSET UNITYSDK_OFFSET(0x1FBC0330)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass33_0_TypeDefinitionIndex = 28488;

	class ShortcutExtensions___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::UnityEngine::Rigidbody* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Quaternion _DOLookAt_b__0()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS33_0__DOLOOKAT_B__0_OFFSET))(this);
		}
	};
}
