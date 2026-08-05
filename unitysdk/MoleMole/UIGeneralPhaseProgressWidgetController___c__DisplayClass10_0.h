#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIHollowProgressCircleRowWidgetController; }

#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x185A5BE0)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS10_0__MAINICONANIM_B__0_OFFSET UNITYSDK_OFFSET(0x185A5BF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPhaseProgressWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 70529;

	class UIGeneralPhaseProgressWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowProgressCircleRowWidgetController* mainIconCircle; // 0x10
		::UnityEngine::Vector3 tar; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _MainIconAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___C__DISPLAYCLASS10_0__MAINICONANIM_B__0_OFFSET))(this);
		}
	};
}
