#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Camera; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5553F0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS4_0__DOFARCLIPPLANE_B__0_OFFSET UNITYSDK_OFFSET(0x1C555400)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS4_0__DOFARCLIPPLANE_B__1_OFFSET UNITYSDK_OFFSET(0x1C555420)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass4_0_TypeDefinitionIndex = 25364;

	class ShortcutExtensions___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::UnityEngine::Camera* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Single _DOFarClipPlane_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS4_0__DOFARCLIPPLANE_B__0_OFFSET))(this);
		}

		::System::Void _DOFarClipPlane_b__1(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS4_0__DOFARCLIPPLANE_B__1_OFFSET))(this, x);
		}
	};
}
