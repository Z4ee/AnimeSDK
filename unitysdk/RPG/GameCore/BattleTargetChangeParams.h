#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_BATTLETARGETCHANGEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B634DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleTargetChangeParams_TypeDefinitionIndex = 58675;

	class BattleTargetChangeParams : public ::System::Object
	{
	public:
		::System::Int32 PreviousProgress; // 0x10
		::System::UInt32 BattleTargetID; // 0x14
		::System::Int32 CurrentProgress; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETARGETCHANGEPARAMS__CTOR_OFFSET))(this);
		}
	};
}
