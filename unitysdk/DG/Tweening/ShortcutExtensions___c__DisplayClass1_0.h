#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AudioSource; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF06A50)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS1_0__DOPITCH_B__0_OFFSET UNITYSDK_OFFSET(0x1BF10EB0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS1_0__DOPITCH_B__1_OFFSET UNITYSDK_OFFSET(0x1BF10ED0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass1_0_TypeDefinitionIndex = 25361;

	class ShortcutExtensions___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::UnityEngine::AudioSource* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Single _DOPitch_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS1_0__DOPITCH_B__0_OFFSET))(this);
		}

		::System::Void _DOPitch_b__1(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS1_0__DOPITCH_B__1_OFFSET))(this, x);
		}
	};
}
