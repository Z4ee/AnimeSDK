#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E80CD00)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS19_0__DOCOLOR_B__0_OFFSET UNITYSDK_OFFSET(0x1E80CD10)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS19_0__DOCOLOR_B__1_OFFSET UNITYSDK_OFFSET(0x1E80CD60)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass19_0_TypeDefinitionIndex = 27870;

	class ShortcutExtensions___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::UnityEngine::Material* target; // 0x10
		::System::String* property; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color _DOColor_b__0()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS19_0__DOCOLOR_B__0_OFFSET))(this);
		}

		::System::Void _DOColor_b__1(::UnityEngine::Color x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS19_0__DOCOLOR_B__1_OFFSET))(this, x);
		}
	};
}
