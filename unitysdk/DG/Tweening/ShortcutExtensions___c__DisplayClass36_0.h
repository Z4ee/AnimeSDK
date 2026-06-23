#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class TrailRenderer; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E4D20)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS36_0__DOTIME_B__0_OFFSET UNITYSDK_OFFSET(0x1E7E4D30)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS36_0__DOTIME_B__1_OFFSET UNITYSDK_OFFSET(0x1E7E4D50)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass36_0_TypeDefinitionIndex = 27887;

	class ShortcutExtensions___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::UnityEngine::TrailRenderer* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Single _DOTime_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS36_0__DOTIME_B__0_OFFSET))(this);
		}

		::System::Void _DOTime_b__1(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS36_0__DOTIME_B__1_OFFSET))(this, x);
		}
	};
}
