#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AD73F3F0692AA278.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::MiniUIGame::BezierCurve { class UIMissionPointWidgetController; }

#define MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIINLEVELBEZIERCURVEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x149F3C30)
#define MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIINLEVELBEZIERCURVEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS39_0__REMOVEDETECTEDPOINT_B__0_OFFSET UNITYSDK_OFFSET(0x149F3C40)

namespace MoleMole::MiniUIGame::BezierCurve
{
	inline static constexpr unsigned int UIInLevelBezierCurveGameWidgetController___c__DisplayClass39_0_TypeDefinitionIndex = 43041;

	class UIInLevelBezierCurveGameWidgetController___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::Enum_3_AD73F3F0692AA278 type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIINLEVELBEZIERCURVEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveDetectedPoint_b__0(::MoleMole::MiniUIGame::BezierCurve::UIMissionPointWidgetController* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MiniUIGame::BezierCurve::UIMissionPointWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIINLEVELBEZIERCURVEGAMEWIDGETCONTROLLER___C__DISPLAYCLASS39_0__REMOVEDETECTEDPOINT_B__0_OFFSET))(this, x);
		}
	};
}
