#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Camera; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6ED120)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS6_0__DONEARCLIPPLANE_B__0_OFFSET UNITYSDK_OFFSET(0x1E6ED130)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS6_0__DONEARCLIPPLANE_B__1_OFFSET UNITYSDK_OFFSET(0x1E6ED150)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass6_0_TypeDefinitionIndex = 27857;

	class ShortcutExtensions___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::UnityEngine::Camera* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Single _DONearClipPlane_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS6_0__DONEARCLIPPLANE_B__0_OFFSET))(this);
		}

		::System::Void _DONearClipPlane_b__1(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS6_0__DONEARCLIPPLANE_B__1_OFFSET))(this, x);
		}
	};
}
