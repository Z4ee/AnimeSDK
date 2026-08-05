#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Material; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC54830)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS25_0__DOTILING_B__0_OFFSET UNITYSDK_OFFSET(0x1FC54840)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS25_0__DOTILING_B__1_OFFSET UNITYSDK_OFFSET(0x1FC548C0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass25_0_TypeDefinitionIndex = 28480;

	class ShortcutExtensions___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::UnityEngine::Material* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 _DOTiling_b__0()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS25_0__DOTILING_B__0_OFFSET))(this);
		}

		::System::Void _DOTiling_b__1(::UnityEngine::Vector2 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS25_0__DOTILING_B__1_OFFSET))(this, x);
		}
	};
}
