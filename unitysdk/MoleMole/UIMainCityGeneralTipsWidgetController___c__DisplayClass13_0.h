#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening { class TweenCallback; }
namespace MoleMole { class UIMainCityGeneralTipsWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1693A2A0)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS13_0__UPDATECONTENTFADEOUTANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x1693A2B0)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS13_0__UPDATECONTENTFADEOUTANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x1693A370)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityGeneralTipsWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 73243;

	class UIMainCityGeneralTipsWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityGeneralTipsWidgetController* __4__this; // 0x10
		::System::Action* callback; // 0x18
		::DG::Tweening::TweenCallback* __9__1; // 0x20
		::System::Single length; // 0x28
		::System::Boolean resetLayout; // 0x2C
		::UnityEngine::Vector2 finalSize; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateContentFadeOutAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS13_0__UPDATECONTENTFADEOUTANIMATION_B__0_OFFSET))(this);
		}

		::System::Void _UpdateContentFadeOutAnimation_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS13_0__UPDATECONTENTFADEOUTANIMATION_B__1_OFFSET))(this);
		}
	};
}
