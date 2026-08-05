#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS73_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC127E0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS73_0__DOBLENDABLEMOVEBY_B__0_OFFSET UNITYSDK_OFFSET(0x1FC127F0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS73_0__DOBLENDABLEMOVEBY_B__1_OFFSET UNITYSDK_OFFSET(0x1FC12810)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass73_0_TypeDefinitionIndex = 28528;

	class ShortcutExtensions___c__DisplayClass73_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* target; // 0x10
		::UnityEngine::Vector3 to; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS73_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _DOBlendableMoveBy_b__0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS73_0__DOBLENDABLEMOVEBY_B__0_OFFSET))(this);
		}

		::System::Void _DOBlendableMoveBy_b__1(::UnityEngine::Vector3 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS73_0__DOBLENDABLEMOVEBY_B__1_OFFSET))(this, x);
		}
	};
}
