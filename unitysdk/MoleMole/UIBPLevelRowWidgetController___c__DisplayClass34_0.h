#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBPLevelRowWidgetController; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19778BE0)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___C__DISPLAYCLASS34_0__STARTSECONDINCREASE_B__1_OFFSET UNITYSDK_OFFSET(0x19778BF0)
#define MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___C__DISPLAYCLASS34_0__STARTSECONDINCREASE_B__2_OFFSET UNITYSDK_OFFSET(0x19778D20)

namespace MoleMole
{
	inline static constexpr unsigned int UIBPLevelRowWidgetController___c__DisplayClass34_0_TypeDefinitionIndex = 79587;

	class UIBPLevelRowWidgetController___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBPLevelRowWidgetController* __4__this; // 0x10
		::UnityEngine::AnimationCurve* secondCurve; // 0x18
		::System::Single timer; // 0x20
		::System::Single nextProgress; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartSecondIncrease_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___C__DISPLAYCLASS34_0__STARTSECONDINCREASE_B__1_OFFSET))(this);
		}

		::System::Void _StartSecondIncrease_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPLEVELROWWIDGETCONTROLLER___C__DISPLAYCLASS34_0__STARTSECONDINCREASE_B__2_OFFSET))(this);
		}
	};
}
