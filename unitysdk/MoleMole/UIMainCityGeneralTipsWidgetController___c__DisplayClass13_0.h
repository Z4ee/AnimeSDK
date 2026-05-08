#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening { class TweenCallback; }
namespace MoleMole { class UIMainCityGeneralTipsWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1483AB30)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS13_0__UPDATECONTENTFADEOUTANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x1483AB40)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS13_0__UPDATECONTENTFADEOUTANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x1483AC00)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityGeneralTipsWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 73726;

	class UIMainCityGeneralTipsWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::UIMainCityGeneralTipsWidgetController* __4__this; // 0x18
		::DG::Tweening::TweenCallback* __9__1; // 0x20
		::System::Boolean resetLayout; // 0x28
		::UnityEngine::Vector2 finalSize; // 0x2C
		::System::Single length; // 0x34

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
