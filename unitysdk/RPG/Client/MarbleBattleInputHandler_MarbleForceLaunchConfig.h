#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_MARBLEFORCELAUNCHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2483B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBattleInputHandler_MarbleForceLaunchConfig_TypeDefinitionIndex = 65865;

	class MarbleBattleInputHandler_MarbleForceLaunchConfig : public ::System::Object
	{
	public:
		::System::Single AngleTolerance; // 0x10
		::RPG::MVector2 ForceFactorVector; // 0x14
		::System::UInt32 ForceSealTeamIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_MARBLEFORCELAUNCHCONFIG__CTOR_OFFSET))(this);
		}
	};
}
