#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class BattleTargetConfigRow; }

#define RPG_GAMECORE_BATTLETARGETDETAILDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x3B8A650)
#define RPG_GAMECORE_BATTLETARGETDETAILDATA_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x3B8A5E0)
#define RPG_GAMECORE_BATTLETARGETDETAILDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x379FAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleTargetDetailData_TypeDefinitionIndex = 57754;

	struct alignas(8) BattleTargetDetailData
	{
		::RPG::GameCore::BattleTargetConfigRow* Config; // 0x10
		::RPG::GameCore::FixPoint CurrentProgress; // 0x18
		::RPG::GameCore::FixPoint FinishDelay; // 0x20

		::System::Void _ctor(::RPG::GameCore::BattleTargetConfigRow* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleTargetConfigRow*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETARGETDETAILDATA__CTOR_OFFSET))(this, a1, a2, a3);
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
