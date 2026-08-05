#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening { class TweenCallback; }
namespace MoleMole { class UIMainCityMissionWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19CA00C0)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS15_0__UPDATEMISSIONCONTENTFADEOUTANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x19CA00D0)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS15_0__UPDATEMISSIONCONTENTFADEOUTANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x19CA0190)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMissionWidgetController___c__DisplayClass15_0_TypeDefinitionIndex = 88618;

	class UIMainCityMissionWidgetController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityMissionWidgetController* __4__this; // 0x10
		::System::Action* callback; // 0x18
		::DG::Tweening::TweenCallback* __9__1; // 0x20
		::UnityEngine::Vector2 finalSize; // 0x28
		::System::Single length; // 0x30
		::System::Boolean resetLayout; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateMissionContentFadeOutAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS15_0__UPDATEMISSIONCONTENTFADEOUTANIMATION_B__0_OFFSET))(this);
		}

		::System::Void _UpdateMissionContentFadeOutAnimation_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS15_0__UPDATEMISSIONCONTENTFADEOUTANIMATION_B__1_OFFSET))(this);
		}
	};
}
