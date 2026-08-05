#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UI { class Outline; }

#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA1DD10)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS12_0__DOSCALE_B__0_OFFSET UNITYSDK_OFFSET(0x1FA20990)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS12_0__DOSCALE_B__1_OFFSET UNITYSDK_OFFSET(0x1FA209B0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions46___c__DisplayClass12_0_TypeDefinitionIndex = 35102;

	class ShortcutExtensions46___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::Outline* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 _DOScale_b__0()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS12_0__DOSCALE_B__0_OFFSET))(this);
		}

		::System::Void _DOScale_b__1(::UnityEngine::Vector2 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS12_0__DOSCALE_B__1_OFFSET))(this, x);
		}
	};
}
