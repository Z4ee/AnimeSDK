#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_MARBLEFORCELAUNCHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xD614640)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBattleInputHandler_MarbleForceLaunchConfig_TypeDefinitionIndex = 65865;

	class MarbleBattleInputHandler_MarbleForceLaunchConfig : public ::System::Object
	{
	public:
		::RPG::MVector2 ForceFactorVector; // 0x10
		::System::Single AngleTolerance; // 0x18
		::System::UInt32 ForceSealTeamIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_MARBLEFORCELAUNCHCONFIG__CTOR_OFFSET))(this);
		}
	};
}
