#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Rigidbody; }

#define DG_TWEENING_SHORTCUTEXTENSIONSPRO___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C476BB0)
#define DG_TWEENING_SHORTCUTEXTENSIONSPRO___C__DISPLAYCLASS1_0__DOSPIRAL_B__0_OFFSET UNITYSDK_OFFSET(0x1C476C50)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensionsPro___c__DisplayClass1_0_TypeDefinitionIndex = 32929;

	class ShortcutExtensionsPro___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::UnityEngine::Rigidbody* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONSPRO___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _DOSpiral_b__0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONSPRO___C__DISPLAYCLASS1_0__DOSPIRAL_B__0_OFFSET))(this);
		}
	};
}
