#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_BATTLEROGUEMAGICDATA_ROUNDCOUNT_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0xB5D26A0)
#define RPG_GAMECORE_BATTLEROGUEMAGICDATA_ROUNDCOUNT_GETLEFTBATTLECOUNT_OFFSET UNITYSDK_OFFSET(0xB5D2AE0)
#define RPG_GAMECORE_BATTLEROGUEMAGICDATA_ROUNDCOUNT_GETLEFTGLOBALCOUNT_OFFSET UNITYSDK_OFFSET(0xB5D2A90)
#define RPG_GAMECORE_BATTLEROGUEMAGICDATA_ROUNDCOUNT_GET_TOTALROUNDCNT_OFFSET UNITYSDK_OFFSET(0xB5CC6C0)
#define RPG_GAMECORE_BATTLEROGUEMAGICDATA_ROUNDCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0xB5D2B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleRogueMagicData_RoundCount_TypeDefinitionIndex = 51904;

	class BattleRogueMagicData_RoundCount : public ::System::Object
	{
	public:
		::System::UInt32 GlobalRoundCnt; // 0x10
		::System::UInt32 BattleRoundCnt; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUEMAGICDATA_ROUNDCOUNT__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_TotalRoundCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUEMAGICDATA_ROUNDCOUNT_GET_TOTALROUNDCNT_OFFSET))(this);
		}

		::System::UInt32 GetLeftGlobalCount(::System::UInt32 totalLeft)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUEMAGICDATA_ROUNDCOUNT_GETLEFTGLOBALCOUNT_OFFSET))(this, totalLeft);
		}

		::System::UInt32 GetLeftBattleCount(::System::UInt32 totalLeft)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUEMAGICDATA_ROUNDCOUNT_GETLEFTBATTLECOUNT_OFFSET))(this, totalLeft);
		}

		::RPG::GameCore::BattleRogueMagicData_RoundCount* DeepClone()
		{
			return ((::RPG::GameCore::BattleRogueMagicData_RoundCount*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEROGUEMAGICDATA_ROUNDCOUNT_DEEPCLONE_OFFSET))(this);
		}
	};
}
