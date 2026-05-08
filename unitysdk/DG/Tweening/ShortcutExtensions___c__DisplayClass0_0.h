#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AudioSource; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4F9080)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS0_0__DOFADE_B__0_OFFSET UNITYSDK_OFFSET(0x1C4F9090)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS0_0__DOFADE_B__1_OFFSET UNITYSDK_OFFSET(0x1C4F90B0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass0_0_TypeDefinitionIndex = 25360;

	class ShortcutExtensions___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::UnityEngine::AudioSource* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Single _DOFade_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS0_0__DOFADE_B__0_OFFSET))(this);
		}

		::System::Void _DOFade_b__1(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS0_0__DOFADE_B__1_OFFSET))(this, x);
		}
	};
}
