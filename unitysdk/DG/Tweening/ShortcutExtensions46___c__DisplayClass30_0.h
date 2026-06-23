#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class Slider; }

#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6379E0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS30_0__DOVALUE_B__0_OFFSET UNITYSDK_OFFSET(0x1E6391F0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS30_0__DOVALUE_B__1_OFFSET UNITYSDK_OFFSET(0x1E639220)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions46___c__DisplayClass30_0_TypeDefinitionIndex = 34466;

	class ShortcutExtensions46___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Slider* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Single _DOValue_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS30_0__DOVALUE_B__0_OFFSET))(this);
		}

		::System::Void _DOValue_b__1(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS30_0__DOVALUE_B__1_OFFSET))(this, x);
		}
	};
}
