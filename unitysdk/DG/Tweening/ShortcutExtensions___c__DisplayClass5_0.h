#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Camera; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA11530)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS5_0__DOFIELDOFVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x1FA11540)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS5_0__DOFIELDOFVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x1FA11560)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass5_0_TypeDefinitionIndex = 28460;

	class ShortcutExtensions___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::UnityEngine::Camera* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Single _DOFieldOfView_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS5_0__DOFIELDOFVIEW_B__0_OFFSET))(this);
		}

		::System::Void _DOFieldOfView_b__1(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS5_0__DOFIELDOFVIEW_B__1_OFFSET))(this, x);
		}
	};
}
