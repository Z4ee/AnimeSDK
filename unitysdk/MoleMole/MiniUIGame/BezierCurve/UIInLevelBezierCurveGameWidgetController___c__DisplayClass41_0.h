#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::MiniUIGame::BezierCurve { class UIMissionPointWidgetController; }

#define MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIINLEVELBEZIERCURVEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS41_0__CONTAINSDETECTEDPOINT_B__0_OFFSET UNITYSDK_OFFSET(0x13F07D20)
#define MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIINLEVELBEZIERCURVEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13F07D10)

namespace MoleMole::MiniUIGame::BezierCurve
{
	inline static constexpr unsigned int UIInLevelBezierCurveGameWidgetController___c__DisplayClass41_0_TypeDefinitionIndex = 43579;

	class UIInLevelBezierCurveGameWidgetController___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::System::Int32 index; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIINLEVELBEZIERCURVEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ContainsDetectedPoint_b__0(::MoleMole::MiniUIGame::BezierCurve::UIMissionPointWidgetController* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MiniUIGame::BezierCurve::UIMissionPointWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIINLEVELBEZIERCURVEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS41_0__CONTAINSDETECTEDPOINT_B__0_OFFSET))(this, x);
		}
	};
}
