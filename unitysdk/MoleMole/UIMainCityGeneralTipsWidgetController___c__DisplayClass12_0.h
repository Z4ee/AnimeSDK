#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening { class TweenCallback; }
namespace MoleMole { class UIMainCityGeneralTipsWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1483AA10)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS12_0__UPDATECONTENTFADEINANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x1483AA20)
#define MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS12_0__UPDATECONTENTFADEINANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x1483AAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityGeneralTipsWidgetController___c__DisplayClass12_0_TypeDefinitionIndex = 73725;

	class UIMainCityGeneralTipsWidgetController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::DG::Tweening::TweenCallback* __9__1; // 0x10
		::System::Action* callback; // 0x18
		::MoleMole::UIMainCityGeneralTipsWidgetController* __4__this; // 0x20
		::UnityEngine::Vector2 finalSize; // 0x28
		::System::Single length; // 0x30
		::System::Boolean resetLayout; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateContentFadeInAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS12_0__UPDATECONTENTFADEINANIMATION_B__0_OFFSET))(this);
		}

		::System::Void _UpdateContentFadeInAnimation_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGENERALTIPSWIDGETCONTROLLER___C__DISPLAYCLASS12_0__UPDATECONTENTFADEINANIMATION_B__1_OFFSET))(this);
		}
	};
}
