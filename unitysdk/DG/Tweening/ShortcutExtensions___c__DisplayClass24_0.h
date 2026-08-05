#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC54790)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS24_0__DOOFFSET_B__0_OFFSET UNITYSDK_OFFSET(0x1FC547A0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS24_0__DOOFFSET_B__1_OFFSET UNITYSDK_OFFSET(0x1FC547F0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass24_0_TypeDefinitionIndex = 28479;

	class ShortcutExtensions___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::String* property; // 0x10
		::UnityEngine::Material* target; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 _DOOffset_b__0()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS24_0__DOOFFSET_B__0_OFFSET))(this);
		}

		::System::Void _DOOffset_b__1(::UnityEngine::Vector2 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS24_0__DOOFFSET_B__1_OFFSET))(this, x);
		}
	};
}
