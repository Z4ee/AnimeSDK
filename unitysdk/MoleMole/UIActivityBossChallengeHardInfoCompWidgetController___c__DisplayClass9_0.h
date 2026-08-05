#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_344;
class Class_2_F8EB4D9464ADCCA1;
namespace MoleMole { class UIActivityBossChallengeHardInfoCompWidgetController; }

#define MOLEMOLE_UIACTIVITYBOSSCHALLENGEHARDINFOCOMPWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x197D2F50)
#define MOLEMOLE_UIACTIVITYBOSSCHALLENGEHARDINFOCOMPWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHBOSSCARD_B__0_OFFSET UNITYSDK_OFFSET(0x197D2F60)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBossChallengeHardInfoCompWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 61671;

	class UIActivityBossChallengeHardInfoCompWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityBossChallengeHardInfoCompWidgetController* __4__this; // 0x10
		::Class_1_5DA2E7556103D5A3_344* layerInfo; // 0x18
		::Class_2_F8EB4D9464ADCCA1* bossMonster; // 0x20
		::System::Int32 roomID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBOSSCHALLENGEHARDINFOCOMPWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshBossCard_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBOSSCHALLENGEHARDINFOCOMPWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHBOSSCARD_B__0_OFFSET))(this);
		}
	};
}
