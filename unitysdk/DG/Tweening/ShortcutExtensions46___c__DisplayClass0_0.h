#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class CanvasGroup; }

#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA1C8A0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS0_0__DOFADE_B__0_OFFSET UNITYSDK_OFFSET(0x1FA20880)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS0_0__DOFADE_B__1_OFFSET UNITYSDK_OFFSET(0x1FA208A0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions46___c__DisplayClass0_0_TypeDefinitionIndex = 35091;

	class ShortcutExtensions46___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::UnityEngine::CanvasGroup* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Single _DOFade_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS0_0__DOFADE_B__0_OFFSET))(this);
		}

		::System::Void _DOFade_b__1(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS0_0__DOFADE_B__1_OFFSET))(this, x);
		}
	};
}
