#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ScrollViewItemWidgetController; }

#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x173A2A70)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER___C__DISPLAYCLASS35_0__PLAYFADEANIM_G__ONFADEANIMFINISH_0_OFFSET UNITYSDK_OFFSET(0x173A2A80)

namespace MoleMole
{
	inline static constexpr unsigned int ScrollViewItemWidgetController___c__DisplayClass35_0_TypeDefinitionIndex = 67004;

	class ScrollViewItemWidgetController___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::MoleMole::ScrollViewItemWidgetController* __4__this; // 0x10
		::System::Boolean isFadeIn; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayFadeAnim_g__OnFadeAnimFinish_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER___C__DISPLAYCLASS35_0__PLAYFADEANIM_G__ONFADEANIMFINISH_0_OFFSET))(this);
		}
	};
}
