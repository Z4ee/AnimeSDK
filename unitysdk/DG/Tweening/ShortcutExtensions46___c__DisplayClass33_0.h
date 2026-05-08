#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E65D0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS33_0__DOTEXT_B__0_OFFSET UNITYSDK_OFFSET(0x1C2E7A20)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS33_0__DOTEXT_B__1_OFFSET UNITYSDK_OFFSET(0x1C2E7A50)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions46___c__DisplayClass33_0_TypeDefinitionIndex = 32916;

	class ShortcutExtensions46___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Text* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::String* _DOText_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS33_0__DOTEXT_B__0_OFFSET))(this);
		}

		::System::Void _DOText_b__1(::System::String* x)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS33_0__DOTEXT_B__1_OFFSET))(this, x);
		}
	};
}
