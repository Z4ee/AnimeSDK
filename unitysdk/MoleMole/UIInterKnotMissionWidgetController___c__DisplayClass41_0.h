#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A5FC45CC23522FB5;
namespace MoleMole { class UIInterKnotMissionWidgetController; }

#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15A566C0)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS41_0__INITMISSION_B__1_OFFSET UNITYSDK_OFFSET(0x15A566D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotMissionWidgetController___c__DisplayClass41_0_TypeDefinitionIndex = 42785;

	class UIInterKnotMissionWidgetController___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInterKnotMissionWidgetController* __4__this; // 0x10
		::System::Int32 i; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitMission_b__1(::Class_1_A5FC45CC23522FB5* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_A5FC45CC23522FB5*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS41_0__INITMISSION_B__1_OFFSET))(this, a);
		}
	};
}
