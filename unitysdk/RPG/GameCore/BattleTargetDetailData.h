#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class BattleTargetConfigRow; }

#define RPG_GAMECORE_BATTLETARGETDETAILDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xE1F50)
#define RPG_GAMECORE_BATTLETARGETDETAILDATA_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0xE1EF0)
#define RPG_GAMECORE_BATTLETARGETDETAILDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x29C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleTargetDetailData_TypeDefinitionIndex = 53100;

	struct alignas(8) BattleTargetDetailData
	{
		::RPG::GameCore::BattleTargetConfigRow* Config; // 0x10
		::RPG::GameCore::FixPoint CurrentProgress; // 0x18
		::RPG::GameCore::FixPoint FinishDelay; // 0x20

		::System::Void _ctor(::RPG::GameCore::BattleTargetConfigRow* config, ::RPG::GameCore::FixPoint currentProgress, ::RPG::GameCore::FixPoint finishDelay)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetConfigRow*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETARGETDETAILDATA__CTOR_OFFSET))(this, config, currentProgress, finishDelay);
		}

		::RPG::GameCore::FixPoint get_TotalProgress()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETARGETDETAILDATA_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETARGETDETAILDATA_GET_ISFINISHED_OFFSET))(this);
		}
	};
}
