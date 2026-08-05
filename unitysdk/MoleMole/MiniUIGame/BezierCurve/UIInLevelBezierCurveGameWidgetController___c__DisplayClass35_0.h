#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvyUISpline; }

#define MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIINLEVELBEZIERCURVEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x149F3BE0)
#define MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIINLEVELBEZIERCURVEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS35_0__SETCURVYDATA_B__0_OFFSET UNITYSDK_OFFSET(0x149F3BF0)

namespace MoleMole::MiniUIGame::BezierCurve
{
	inline static constexpr unsigned int UIInLevelBezierCurveGameWidgetController___c__DisplayClass35_0_TypeDefinitionIndex = 43042;

	class UIInLevelBezierCurveGameWidgetController___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::CurvyUISpline* curvy; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIINLEVELBEZIERCURVEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetCurvyData_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIINLEVELBEZIERCURVEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS35_0__SETCURVYDATA_B__0_OFFSET))(this);
		}
	};
}
