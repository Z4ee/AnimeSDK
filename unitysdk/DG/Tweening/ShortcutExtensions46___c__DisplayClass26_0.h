#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening { class Sequence; }
namespace UnityEngine { class RectTransform; }

#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E5AB0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS26_0__DOJUMPANCHORPOS_B__0_OFFSET UNITYSDK_OFFSET(0x1C2E73B0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS26_0__DOJUMPANCHORPOS_B__1_OFFSET UNITYSDK_OFFSET(0x1C2E73F0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS26_0__DOJUMPANCHORPOS_B__2_OFFSET UNITYSDK_OFFSET(0x1C2E7420)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS26_0__DOJUMPANCHORPOS_B__3_OFFSET UNITYSDK_OFFSET(0x1C2E7460)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS26_0__DOJUMPANCHORPOS_B__4_OFFSET UNITYSDK_OFFSET(0x1C2E7490)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions46___c__DisplayClass26_0_TypeDefinitionIndex = 32909;

	class ShortcutExtensions46___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* target; // 0x10
		::DG::Tweening::Sequence* s; // 0x18
		::System::Single offsetY; // 0x20
		::System::Boolean offsetYSet; // 0x24
		::System::Single startPosY; // 0x28
		::UnityEngine::Vector2 endValue; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 _DOJumpAnchorPos_b__0()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS26_0__DOJUMPANCHORPOS_B__0_OFFSET))(this);
		}

		::System::Void _DOJumpAnchorPos_b__1(::UnityEngine::Vector2 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS26_0__DOJUMPANCHORPOS_B__1_OFFSET))(this, x);
		}

		::UnityEngine::Vector2 _DOJumpAnchorPos_b__2()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS26_0__DOJUMPANCHORPOS_B__2_OFFSET))(this);
		}

		::System::Void _DOJumpAnchorPos_b__3(::UnityEngine::Vector2 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS26_0__DOJUMPANCHORPOS_B__3_OFFSET))(this, x);
		}

		::System::Void _DOJumpAnchorPos_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS26_0__DOJUMPANCHORPOS_B__4_OFFSET))(this);
		}
	};
}
