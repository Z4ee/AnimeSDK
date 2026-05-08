#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define DG_TWEENING_SHORTCUTEXTENSIONSPRO___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C476800)
#define DG_TWEENING_SHORTCUTEXTENSIONSPRO___C__DISPLAYCLASS0_0__DOSPIRAL_B__0_OFFSET UNITYSDK_OFFSET(0x1C476BC0)
#define DG_TWEENING_SHORTCUTEXTENSIONSPRO___C__DISPLAYCLASS0_0__DOSPIRAL_B__1_OFFSET UNITYSDK_OFFSET(0x1C476C10)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensionsPro___c__DisplayClass0_0_TypeDefinitionIndex = 32928;

	class ShortcutExtensionsPro___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONSPRO___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _DOSpiral_b__0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONSPRO___C__DISPLAYCLASS0_0__DOSPIRAL_B__0_OFFSET))(this);
		}

		::System::Void _DOSpiral_b__1(::UnityEngine::Vector3 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONSPRO___C__DISPLAYCLASS0_0__DOSPIRAL_B__1_OFFSET))(this, x);
		}
	};
}
