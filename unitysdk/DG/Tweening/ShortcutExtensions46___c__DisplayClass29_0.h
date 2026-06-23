#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class ScrollRect; }

#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E637850)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS29_0__DOVERTICALNORMALIZEDPOS_B__0_OFFSET UNITYSDK_OFFSET(0x1E6390D0)
#define DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS29_0__DOVERTICALNORMALIZEDPOS_B__1_OFFSET UNITYSDK_OFFSET(0x1E6390F0)

namespace DG::Tweening
{
	inline static constexpr unsigned int ShortcutExtensions46___c__DisplayClass29_0_TypeDefinitionIndex = 34465;

	class ShortcutExtensions46___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::UnityEngine::UI::ScrollRect* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Single _DOVerticalNormalizedPos_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS29_0__DOVERTICALNORMALIZEDPOS_B__0_OFFSET))(this);
		}

		::System::Void _DOVerticalNormalizedPos_b__1(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DG_TWEENING_SHORTCUTEXTENSIONS46___C__DISPLAYCLASS29_0__DOVERTICALNORMALIZEDPOS_B__1_OFFSET))(this, x);
		}
	};
}
