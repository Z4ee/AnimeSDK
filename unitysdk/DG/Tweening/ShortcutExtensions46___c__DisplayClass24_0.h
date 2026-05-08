#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }

#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2E53B0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS24_0__DOSHAKEANCHORPOS_B__0_OFFSET UNITYSDK_OFFSET(0x1C2E72B0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS24_0__DOSHAKEANCHORPOS_B__1_OFFSET UNITYSDK_OFFSET(0x1C2E7300)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions46___c__DisplayClass24_0_TypeDefinitionIndex = 32907;

	class ShortcutExtensions46___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _DOShakeAnchorPos_b__0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS24_0__DOSHAKEANCHORPOS_B__0_OFFSET))(this);
		}

		::System::Void _DOShakeAnchorPos_b__1(::UnityEngine::Vector3 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS24_0__DOSHAKEANCHORPOS_B__1_OFFSET))(this, x);
		}
	};
}
