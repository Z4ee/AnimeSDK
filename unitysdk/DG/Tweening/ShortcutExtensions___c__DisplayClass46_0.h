#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace UnityEngine { class Transform; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2CDA30)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS46_0__DOROTATEQUATERNION_B__0_OFFSET UNITYSDK_OFFSET(0x1C2CDA40)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS46_0__DOROTATEQUATERNION_B__1_OFFSET UNITYSDK_OFFSET(0x1C2CDA80)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass46_0_TypeDefinitionIndex = 25406;

	class ShortcutExtensions___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Quaternion _DORotateQuaternion_b__0()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS46_0__DOROTATEQUATERNION_B__0_OFFSET))(this);
		}

		::System::Void _DORotateQuaternion_b__1(::UnityEngine::Quaternion x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS46_0__DOROTATEQUATERNION_B__1_OFFSET))(this, x);
		}
	};
}
