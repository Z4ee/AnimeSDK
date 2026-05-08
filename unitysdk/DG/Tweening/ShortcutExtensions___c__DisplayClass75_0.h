#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace UnityEngine { class Transform; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS75_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4F94E0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS75_0__DOBLENDABLEROTATEBY_B__0_OFFSET UNITYSDK_OFFSET(0x1C4F94F0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS75_0__DOBLENDABLEROTATEBY_B__1_OFFSET UNITYSDK_OFFSET(0x1C4F9500)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass75_0_TypeDefinitionIndex = 25435;

	class ShortcutExtensions___c__DisplayClass75_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* target; // 0x10
		::UnityEngine::Quaternion to; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS75_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Quaternion _DOBlendableRotateBy_b__0()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS75_0__DOBLENDABLEROTATEBY_B__0_OFFSET))(this);
		}

		::System::Void _DOBlendableRotateBy_b__1(::UnityEngine::Quaternion x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS75_0__DOBLENDABLEROTATEBY_B__1_OFFSET))(this, x);
		}
	};
}
