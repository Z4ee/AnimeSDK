#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Rigidbody; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E4850)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS30_0__DOMOVEY_B__0_OFFSET UNITYSDK_OFFSET(0x1E7E4860)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass30_0_TypeDefinitionIndex = 27881;

	class ShortcutExtensions___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::UnityEngine::Rigidbody* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _DOMoveY_b__0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS30_0__DOMOVEY_B__0_OFFSET))(this);
		}
	};
}
