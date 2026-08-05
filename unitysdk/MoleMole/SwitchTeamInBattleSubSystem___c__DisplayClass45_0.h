#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_97F99D2BC471ECEC;

#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1998F220)
#define MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___C__DISPLAYCLASS45_0__FORCECLEANUPALLDELAYEDFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x1998F230)

namespace MoleMole
{
	inline static constexpr unsigned int SwitchTeamInBattleSubSystem___c__DisplayClass45_0_TypeDefinitionIndex = 83407;

	class SwitchTeamInBattleSubSystem___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::Class_3_97F99D2BC471ECEC* switchComp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Void _ForceCleanupAllDelayedFadeOut_b__0(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_SWITCHTEAMINBATTLESUBSYSTEM___C__DISPLAYCLASS45_0__FORCECLEANUPALLDELAYEDFADEOUT_B__0_OFFSET))(this, entityID);
		}
	};
}
