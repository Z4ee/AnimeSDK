#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class Image; }

#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA1D0B0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS5_0__DOFILLAMOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x1FA21970)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS5_0__DOFILLAMOUNT_B__1_OFFSET UNITYSDK_OFFSET(0x1FA21990)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions46___c__DisplayClass5_0_TypeDefinitionIndex = 35096;

	class ShortcutExtensions46___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Image* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Single _DOFillAmount_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS5_0__DOFILLAMOUNT_B__0_OFFSET))(this);
		}

		::System::Void _DOFillAmount_b__1(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS5_0__DOFILLAMOUNT_B__1_OFFSET))(this, x);
		}
	};
}
