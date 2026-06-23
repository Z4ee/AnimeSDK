#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E4EC0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS39_0__DOMOVEY_B__0_OFFSET UNITYSDK_OFFSET(0x1E7E4ED0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS39_0__DOMOVEY_B__1_OFFSET UNITYSDK_OFFSET(0x1E7E4F20)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass39_0_TypeDefinitionIndex = 27890;

	class ShortcutExtensions___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _DOMoveY_b__0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS39_0__DOMOVEY_B__0_OFFSET))(this);
		}

		::System::Void _DOMoveY_b__1(::UnityEngine::Vector3 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS39_0__DOMOVEY_B__1_OFFSET))(this, x);
		}
	};
}
