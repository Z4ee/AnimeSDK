#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UI { class LayoutElement; }

#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E635450)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS9_0__DOPREFERREDSIZE_B__0_OFFSET UNITYSDK_OFFSET(0x1E639710)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS9_0__DOPREFERREDSIZE_B__1_OFFSET UNITYSDK_OFFSET(0x1E639770)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions46___c__DisplayClass9_0_TypeDefinitionIndex = 34445;

	class ShortcutExtensions46___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::LayoutElement* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 _DOPreferredSize_b__0()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS9_0__DOPREFERREDSIZE_B__0_OFFSET))(this);
		}

		::System::Void _DOPreferredSize_b__1(::UnityEngine::Vector2 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS9_0__DOPREFERREDSIZE_B__1_OFFSET))(this, x);
		}
	};
}
