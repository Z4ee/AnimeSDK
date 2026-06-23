#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }

#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E635FA0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS16_0__DOANCHORPOS3D_B__0_OFFSET UNITYSDK_OFFSET(0x1E638700)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS16_0__DOANCHORPOS3D_B__1_OFFSET UNITYSDK_OFFSET(0x1E638780)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions46___c__DisplayClass16_0_TypeDefinitionIndex = 34452;

	class ShortcutExtensions46___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _DOAnchorPos3D_b__0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS16_0__DOANCHORPOS3D_B__0_OFFSET))(this);
		}

		::System::Void _DOAnchorPos3D_b__1(::UnityEngine::Vector3 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS16_0__DOANCHORPOS3D_B__1_OFFSET))(this, x);
		}
	};
}
