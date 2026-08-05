#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC549D0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS27_0__DOVECTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1FC549E0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS27_0__DOVECTOR_B__1_OFFSET UNITYSDK_OFFSET(0x1FC54A30)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass27_0_TypeDefinitionIndex = 28482;

	class ShortcutExtensions___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::UnityEngine::Material* target; // 0x10
		::System::String* property; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector4 _DOVector_b__0()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS27_0__DOVECTOR_B__0_OFFSET))(this);
		}

		::System::Void _DOVector_b__1(::UnityEngine::Vector4 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS27_0__DOVECTOR_B__1_OFFSET))(this, x);
		}
	};
}
