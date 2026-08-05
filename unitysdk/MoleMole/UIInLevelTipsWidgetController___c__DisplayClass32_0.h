#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelTipsWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182BCD50)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS32_0__UPDATECONTENTFADEOUTANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x182BCD60)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS32_0__UPDATECONTENTFADEOUTANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x182BCD70)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS32_0__UPDATECONTENTFADEOUTANIMATION_B__2_OFFSET UNITYSDK_OFFSET(0x182BCD80)
#define MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS32_0__UPDATECONTENTFADEOUTANIMATION_B__3_OFFSET UNITYSDK_OFFSET(0x182BCF50)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelTipsWidgetController___c__DisplayClass32_0_TypeDefinitionIndex = 77527;

	class UIInLevelTipsWidgetController___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelTipsWidgetController* __4__this; // 0x10
		::System::Action* callback; // 0x18
		::System::Single currentWidth; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Single _UpdateContentFadeOutAnimation_b__0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS32_0__UPDATECONTENTFADEOUTANIMATION_B__0_OFFSET))(this);
		}

		::System::Void _UpdateContentFadeOutAnimation_b__1(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS32_0__UPDATECONTENTFADEOUTANIMATION_B__1_OFFSET))(this, v);
		}

		::System::Void _UpdateContentFadeOutAnimation_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS32_0__UPDATECONTENTFADEOUTANIMATION_B__2_OFFSET))(this);
		}

		::System::Void _UpdateContentFadeOutAnimation_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELTIPSWIDGETCONTROLLER___C__DISPLAYCLASS32_0__UPDATECONTENTFADEOUTANIMATION_B__3_OFFSET))(this);
		}
	};
}
