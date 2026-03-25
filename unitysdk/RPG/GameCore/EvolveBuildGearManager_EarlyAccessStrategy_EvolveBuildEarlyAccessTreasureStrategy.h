#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildTreasureType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildTreasureSolution; }
namespace RPG::Client { class UIController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_EVOLVEBUILDEARLYACCESSTREASURESTRATEGY_GET_DELAYSHOWTREASUREUI_OFFSET UNITYSDK_OFFSET(0xA932CB0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_EVOLVEBUILDEARLYACCESSTREASURESTRATEGY_SETTREASURECONFIG_OFFSET UNITYSDK_OFFSET(0xA932AB0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_EVOLVEBUILDEARLYACCESSTREASURESTRATEGY_SHOWEVOLVEBUILDTREASURE_OFFSET UNITYSDK_OFFSET(0xA932B10)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_EVOLVEBUILDEARLYACCESSTREASURESTRATEGY__CTOR_OFFSET UNITYSDK_OFFSET(0xA931780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildGearManager_EarlyAccessStrategy_EvolveBuildEarlyAccessTreasureStrategy_TypeDefinitionIndex = 44912;

	class EvolveBuildGearManager_EarlyAccessStrategy_EvolveBuildEarlyAccessTreasureStrategy : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildTreasureSolution*>* _Solutions; // 0x10
		::System::UInt32 _BasicCoinNum; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_EVOLVEBUILDEARLYACCESSTREASURESTRATEGY__CTOR_OFFSET))(this);
		}

		::System::Void SetTreasureConfig(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildTreasureSolution*>* solutions, ::System::UInt32 basicCoinNum, ::RPG::GameCore::EvolveBuildTreasureType treasureType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildTreasureSolution*>*, ::System::UInt32, ::RPG::GameCore::EvolveBuildTreasureType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_EVOLVEBUILDEARLYACCESSTREASURESTRATEGY_SETTREASURECONFIG_OFFSET))(this, solutions, basicCoinNum, treasureType);
		}

		::RPG::Client::UIController* ShowEvolveBuildTreasure()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_EVOLVEBUILDEARLYACCESSTREASURESTRATEGY_SHOWEVOLVEBUILDTREASURE_OFFSET))(this);
		}

		::System::Boolean get_DelayShowTreasureUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_EVOLVEBUILDEARLYACCESSTREASURESTRATEGY_GET_DELAYSHOWTREASUREUI_OFFSET))(this);
		}
	};
}
