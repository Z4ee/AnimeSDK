#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_883E597458B91E77_1;

#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x141A5BD0)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___C__DISPLAYCLASS37_0__FORCECLEANUPALLDELAYEDFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x141A5BE0)

namespace MoleMole
{
	inline static constexpr unsigned int SwitchTeamInBattleSubSystem___c__DisplayClass37_0_TypeDefinitionIndex = 42451;

	class SwitchTeamInBattleSubSystem___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::Class_3_883E597458B91E77_1* switchComp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _ForceCleanupAllDelayedFadeOut_b__0(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___C__DISPLAYCLASS37_0__FORCECLEANUPALLDELAYEDFADEOUT_B__0_OFFSET))(this, entityID);
		}
	};
}
