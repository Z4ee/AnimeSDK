#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8772A0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS26_0__DOTILING_B__0_OFFSET UNITYSDK_OFFSET(0x1E8772B0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS26_0__DOTILING_B__1_OFFSET UNITYSDK_OFFSET(0x1E877300)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass26_0_TypeDefinitionIndex = 27877;

	class ShortcutExtensions___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::UnityEngine::Material* target; // 0x10
		::System::String* property; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 _DOTiling_b__0()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS26_0__DOTILING_B__0_OFFSET))(this);
		}

		::System::Void _DOTiling_b__1(::UnityEngine::Vector2 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS26_0__DOTILING_B__1_OFFSET))(this, x);
		}
	};
}
