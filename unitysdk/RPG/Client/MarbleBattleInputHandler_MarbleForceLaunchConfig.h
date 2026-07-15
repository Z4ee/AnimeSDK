#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_MARBLEFORCELAUNCHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A878260)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBattleInputHandler_MarbleForceLaunchConfig_TypeDefinitionIndex = 62880;

	class MarbleBattleInputHandler_MarbleForceLaunchConfig : public ::System::Object
	{
	public:
		::System::Single AngleTolerance; // 0x10
		::System::UInt32 ForceSealTeamIndex; // 0x14
		::RPG::MVector2 ForceFactorVector; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_MARBLEFORCELAUNCHCONFIG__CTOR_OFFSET))(this);
		}
	};
}
