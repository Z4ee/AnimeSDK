#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS56_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3ABC70)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS56_0__DOPUNCHSCALE_B__0_OFFSET UNITYSDK_OFFSET(0x1C3ABC80)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS56_0__DOPUNCHSCALE_B__1_OFFSET UNITYSDK_OFFSET(0x1C3ABCD0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass56_0_TypeDefinitionIndex = 25416;

	class ShortcutExtensions___c__DisplayClass56_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS56_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _DOPunchScale_b__0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS56_0__DOPUNCHSCALE_B__0_OFFSET))(this);
		}

		::System::Void _DOPunchScale_b__1(::UnityEngine::Vector3 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS56_0__DOPUNCHSCALE_B__1_OFFSET))(this, x);
		}
	};
}
