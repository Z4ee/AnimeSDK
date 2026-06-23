#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UI { class LayoutElement; }

#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6352C0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS8_0__DOMINSIZE_B__0_OFFSET UNITYSDK_OFFSET(0x1E639650)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS8_0__DOMINSIZE_B__1_OFFSET UNITYSDK_OFFSET(0x1E6396B0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions46___c__DisplayClass8_0_TypeDefinitionIndex = 34444;

	class ShortcutExtensions46___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::LayoutElement* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 _DOMinSize_b__0()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS8_0__DOMINSIZE_B__0_OFFSET))(this);
		}

		::System::Void _DOMinSize_b__1(::UnityEngine::Vector2 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS8_0__DOMINSIZE_B__1_OFFSET))(this, x);
		}
	};
}
