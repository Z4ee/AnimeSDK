#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Rigidbody; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C546340)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS29_0__DOMOVEX_B__0_OFFSET UNITYSDK_OFFSET(0x1C546350)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass29_0_TypeDefinitionIndex = 25389;

	class ShortcutExtensions___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::UnityEngine::Rigidbody* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _DOMoveX_b__0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS29_0__DOMOVEX_B__0_OFFSET))(this);
		}
	};
}
