#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_344;
class Class_2_F8EB4D9464ADCCA1;
namespace MoleMole { class UIActivityBossChallengeHardInfoWidgetController; }

#define MOLEMOLE_UIACTIVITYBOSSCHALLENGEHARDINFOWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x192715F0)
#define MOLEMOLE_UIACTIVITYBOSSCHALLENGEHARDINFOWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHBOSSCARD_B__0_OFFSET UNITYSDK_OFFSET(0x19271600)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBossChallengeHardInfoWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 46550;

	class UIActivityBossChallengeHardInfoWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::Class_2_F8EB4D9464ADCCA1* bossMonster; // 0x10
		::Class_1_5DA2E7556103D5A3_344* layerInfo; // 0x18
		::MoleMole::UIActivityBossChallengeHardInfoWidgetController* __4__this; // 0x20
		::System::Int32 roomID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBOSSCHALLENGEHARDINFOWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshBossCard_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBOSSCHALLENGEHARDINFOWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHBOSSCARD_B__0_OFFSET))(this);
		}
	};
}
