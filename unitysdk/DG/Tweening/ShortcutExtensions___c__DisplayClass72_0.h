#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS72_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC12740)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS72_0__DOBLENDABLECOLOR_B__0_OFFSET UNITYSDK_OFFSET(0x1FC12750)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS72_0__DOBLENDABLECOLOR_B__1_OFFSET UNITYSDK_OFFSET(0x1FC12760)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass72_0_TypeDefinitionIndex = 28527;

	class ShortcutExtensions___c__DisplayClass72_0 : public ::System::Object
	{
	public:
		::System::String* property; // 0x10
		::UnityEngine::Material* target; // 0x18
		::UnityEngine::Color to; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS72_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color _DOBlendableColor_b__0()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS72_0__DOBLENDABLECOLOR_B__0_OFFSET))(this);
		}

		::System::Void _DOBlendableColor_b__1(::UnityEngine::Color x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS72_0__DOBLENDABLECOLOR_B__1_OFFSET))(this, x);
		}
	};
}
