#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace UnityEngine { class Transform; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA11290)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS45_0__DOROTATE_B__0_OFFSET UNITYSDK_OFFSET(0x1FA112A0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS45_0__DOROTATE_B__1_OFFSET UNITYSDK_OFFSET(0x1FA112E0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass45_0_TypeDefinitionIndex = 28500;

	class ShortcutExtensions___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Quaternion _DORotate_b__0()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS45_0__DOROTATE_B__0_OFFSET))(this);
		}

		::System::Void _DORotate_b__1(::UnityEngine::Quaternion x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS45_0__DOROTATE_B__1_OFFSET))(this, x);
		}
	};
}
