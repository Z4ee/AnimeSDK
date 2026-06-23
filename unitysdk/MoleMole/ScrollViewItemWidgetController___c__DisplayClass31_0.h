#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ScrollViewItemWidgetController; }

#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17DEA5D0)
#define MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER___C__DISPLAYCLASS31_0__PLAYFADEANIM_G__ONFADEANIMFINISH_0_OFFSET UNITYSDK_OFFSET(0x17DEA5E0)

namespace MoleMole
{
	inline static constexpr unsigned int ScrollViewItemWidgetController___c__DisplayClass31_0_TypeDefinitionIndex = 84484;

	class ScrollViewItemWidgetController___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::MoleMole::ScrollViewItemWidgetController* __4__this; // 0x10
		::System::Boolean isFadeIn; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayFadeAnim_g__OnFadeAnimFinish_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCROLLVIEWITEMWIDGETCONTROLLER___C__DISPLAYCLASS31_0__PLAYFADEANIM_G__ONFADEANIMFINISH_0_OFFSET))(this);
		}
	};
}
