#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS52_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAD0FE0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS52_0__DOSCALEY_B__0_OFFSET UNITYSDK_OFFSET(0x1FAD0FF0)
#define DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS52_0__DOSCALEY_B__1_OFFSET UNITYSDK_OFFSET(0x1FAD1040)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions___c__DisplayClass52_0_TypeDefinitionIndex = 28507;

	class ShortcutExtensions___c__DisplayClass52_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS52_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _DOScaleY_b__0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS52_0__DOSCALEY_B__0_OFFSET))(this);
		}

		::System::Void _DOScaleY_b__1(::UnityEngine::Vector3 x)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS___C__DISPLAYCLASS52_0__DOSCALEY_B__1_OFFSET))(this, x);
		}
	};
}
