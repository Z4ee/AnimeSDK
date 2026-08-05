#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Color2.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class LineRenderer; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBE7540)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS17_0__DOCOLOR_B__0_OFFSET UNITYSDK_OFFSET(0x1FBE7550)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS17_0__DOCOLOR_B__1_OFFSET UNITYSDK_OFFSET(0x1FBE7570)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass17_0_TypeDefinitionIndex = 28472;

	class ShortcutExtensions___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::UnityEngine::LineRenderer* target; // 0x10
		::DG::Tweening::Color2 startValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::DG::Tweening::Color2 _DOColor_b__0()
		{
			return ((::DG::Tweening::Color2(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS17_0__DOCOLOR_B__0_OFFSET))(this);
		}

		::System::Void _DOColor_b__1(::DG::Tweening::Color2 x)
		{
			return ((::System::Void(*)(::PVOID, ::DG::Tweening::Color2))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS17_0__DOCOLOR_B__1_OFFSET))(this, x);
		}
	};
}
