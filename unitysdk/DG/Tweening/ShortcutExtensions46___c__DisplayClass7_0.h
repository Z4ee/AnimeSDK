#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UI { class LayoutElement; }

#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E635130)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS7_0__DOFLEXIBLESIZE_B__0_OFFSET UNITYSDK_OFFSET(0x1E639590)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS7_0__DOFLEXIBLESIZE_B__1_OFFSET UNITYSDK_OFFSET(0x1E6395F0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions46___c__DisplayClass7_0_TypeDefinitionIndex = 34443;

	class ShortcutExtensions46___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::LayoutElement* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 _DOFlexibleSize_b__0()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS7_0__DOFLEXIBLESIZE_B__0_OFFSET))(this);
		}

		::System::Void _DOFlexibleSize_b__1(::UnityEngine::Vector2 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS7_0__DOFLEXIBLESIZE_B__1_OFFSET))(this, x);
		}
	};
}
