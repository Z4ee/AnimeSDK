#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::MiniUIGame::BezierCurve { class UIBezierCurveGameWidgetController; }

#define MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIBEZIERCURVEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E448E0)
#define MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIBEZIERCURVEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS26_0__ONGAMESETTLED_B__0_OFFSET UNITYSDK_OFFSET(0x15E448F0)
#define MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIBEZIERCURVEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS26_0__ONGAMESETTLED_B__1_OFFSET UNITYSDK_OFFSET(0x15E44920)

namespace MoleMole::MiniUIGame::BezierCurve
{
	inline static constexpr unsigned int UIBezierCurveGameWidgetController___c__DisplayClass26_0_TypeDefinitionIndex = 65477;

	class UIBezierCurveGameWidgetController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MoleMole::MiniUIGame::BezierCurve::UIBezierCurveGameWidgetController* __4__this; // 0x10
		::System::Boolean isWin; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIBEZIERCURVEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnGameSettled_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIBEZIERCURVEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS26_0__ONGAMESETTLED_B__0_OFFSET))(this);
		}

		::System::Void _OnGameSettled_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIBEZIERCURVEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS26_0__ONGAMESETTLED_B__1_OFFSET))(this);
		}
	};
}
