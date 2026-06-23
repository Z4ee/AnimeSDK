#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E61B080)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS43_0__DOLOCALMOVEY_B__0_OFFSET UNITYSDK_OFFSET(0x1E61B090)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS43_0__DOLOCALMOVEY_B__1_OFFSET UNITYSDK_OFFSET(0x1E61B0E0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass43_0_TypeDefinitionIndex = 27894;

	class ShortcutExtensions___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _DOLocalMoveY_b__0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS43_0__DOLOCALMOVEY_B__0_OFFSET))(this);
		}

		::System::Void _DOLocalMoveY_b__1(::UnityEngine::Vector3 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS43_0__DOLOCALMOVEY_B__1_OFFSET))(this, x);
		}
	};
}
