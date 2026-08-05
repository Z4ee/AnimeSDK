#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E081FCEC8F87505A;
class Class_2_208CC9941471731A_12;

#define MOLEMOLE_UITRAININGSPECIALROWWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16783640)
#define MOLEMOLE_UITRAININGSPECIALROWWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ENTERSPECIALTRAINING_B__1_OFFSET UNITYSDK_OFFSET(0x16783650)

namespace MoleMole
{
	inline static constexpr unsigned int UITrainingSpecialRowWidgetController___c__DisplayClass4_0_TypeDefinitionIndex = 62279;

	class UITrainingSpecialRowWidgetController___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::Class_2_208CC9941471731A_12* config; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRAININGSPECIALROWWIDGETCONTROLLER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnterSpecialTraining_b__1(::Class_1_E081FCEC8F87505A* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRAININGSPECIALROWWIDGETCONTROLLER___C__DISPLAYCLASS4_0__ENTERSPECIALTRAINING_B__1_OFFSET))(this, data);
		}
	};
}
