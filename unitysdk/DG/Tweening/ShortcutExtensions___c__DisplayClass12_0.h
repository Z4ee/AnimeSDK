#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E80C670)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS12_0__DOSHAKEROTATION_B__0_OFFSET UNITYSDK_OFFSET(0x1E80C680)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS12_0__DOSHAKEROTATION_B__1_OFFSET UNITYSDK_OFFSET(0x1E80C7B0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass12_0_TypeDefinitionIndex = 27863;

	class ShortcutExtensions___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::UnityEngine::Camera* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _DOShakeRotation_b__0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS12_0__DOSHAKEROTATION_B__0_OFFSET))(this);
		}

		::System::Void _DOShakeRotation_b__1(::UnityEngine::Vector3 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS12_0__DOSHAKEROTATION_B__1_OFFSET))(this, x);
		}
	};
}
