#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Camera; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4DC140)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS2_0__DOASPECT_B__0_OFFSET UNITYSDK_OFFSET(0x1C4DC150)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS2_0__DOASPECT_B__1_OFFSET UNITYSDK_OFFSET(0x1C4DC170)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass2_0_TypeDefinitionIndex = 25362;

	class ShortcutExtensions___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::UnityEngine::Camera* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Single _DOAspect_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS2_0__DOASPECT_B__0_OFFSET))(this);
		}

		::System::Void _DOAspect_b__1(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS2_0__DOASPECT_B__1_OFFSET))(this, x);
		}
	};
}
