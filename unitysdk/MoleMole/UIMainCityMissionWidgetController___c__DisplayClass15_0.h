#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening { class TweenCallback; }
namespace MoleMole { class UIMainCityMissionWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15C4EA60)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS15_0__UPDATEMISSIONCONTENTFADEOUTANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x15C4EA70)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS15_0__UPDATEMISSIONCONTENTFADEOUTANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x15C4EB30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMissionWidgetController___c__DisplayClass15_0_TypeDefinitionIndex = 52948;

	class UIMainCityMissionWidgetController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::DG::Tweening::TweenCallback* __9__1; // 0x10
		::MoleMole::UIMainCityMissionWidgetController* __4__this; // 0x18
		::System::Action* callback; // 0x20
		::System::Single length; // 0x28
		::UnityEngine::Vector2 finalSize; // 0x2C
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
