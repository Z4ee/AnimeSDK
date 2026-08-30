#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterState.h"
#include "unitysdk/System/ValueType.h"

#define RPG_GAMECORE_STAGEINVASIONMONSTERUIDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0x39AA070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageInvasionMonsterUIData_TypeDefinitionIndex = 56367;

	struct alignas(8) StageInvasionMonsterUIData
	{
		::System::UInt32 RuntimeID; // 0x10
		::System::UInt32 InvasionLevel; // 0x14
		::RPG::Client::TextID InvasionDesc; // 0x18
		::System::Single KillMarkRatio; // 0x28
		::RPG::GameCore::StageInvasionMonsterState State; // 0x2C

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONMONSTERUIDATA_ISVALID_OFFSET))(this);
		}
	};
}
