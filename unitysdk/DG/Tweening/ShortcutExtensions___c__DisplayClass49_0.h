#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E61B3C0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS49_0__DOSCALE_B__0_OFFSET UNITYSDK_OFFSET(0x1E61B3D0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS49_0__DOSCALE_B__1_OFFSET UNITYSDK_OFFSET(0x1E61B420)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass49_0_TypeDefinitionIndex = 27900;

	class ShortcutExtensions___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _DOScale_b__0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS49_0__DOSCALE_B__0_OFFSET))(this);
		}

		::System::Void _DOScale_b__1(::UnityEngine::Vector3 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS49_0__DOSCALE_B__1_OFFSET))(this, x);
		}
	};
}
