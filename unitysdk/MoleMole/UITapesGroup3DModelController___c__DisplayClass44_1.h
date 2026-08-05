#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITape3DModelController; }
namespace MoleMole { class UITapesGroup3DModelController___c__DisplayClass44_0; }

#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS44_1__CTOR_OFFSET UNITYSDK_OFFSET(0x140D1440)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS44_1__LIFTTAPES_B__0_OFFSET UNITYSDK_OFFSET(0x140D1450)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS44_1__LIFTTAPES_B__1_OFFSET UNITYSDK_OFFSET(0x140D15C0)

namespace MoleMole
{
	inline static constexpr unsigned int UITapesGroup3DModelController___c__DisplayClass44_1_TypeDefinitionIndex = 60818;

	class UITapesGroup3DModelController___c__DisplayClass44_1 : public ::System::Object
	{
	public:
		::MoleMole::UITape3DModelController* leftTape; // 0x10
		::MoleMole::UITape3DModelController* rightTape; // 0x18
		::MoleMole::UITapesGroup3DModelController___c__DisplayClass44_0* CS___8__locals1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS44_1__CTOR_OFFSET))(this);
		}

		::System::Void _LiftTapes_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS44_1__LIFTTAPES_B__0_OFFSET))(this);
		}

		::System::Void _LiftTapes_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS44_1__LIFTTAPES_B__1_OFFSET))(this);
		}
	};
}
