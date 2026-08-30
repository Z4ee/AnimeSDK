#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildTreasureType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildTreasureSolution; }
namespace RPG::Client { class UIController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_EVOLVEBUILDEARLYACCESSTREASURESTRATEGY_GET_DELAYSHOWTREASUREUI_OFFSET UNITYSDK_OFFSET(0x1157B8B0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_EVOLVEBUILDEARLYACCESSTREASURESTRATEGY_SETTREASURECONFIG_OFFSET UNITYSDK_OFFSET(0x1157B6F0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_EVOLVEBUILDEARLYACCESSTREASURESTRATEGY_SHOWEVOLVEBUILDTREASURE_OFFSET UNITYSDK_OFFSET(0x1157B750)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_EVOLVEBUILDEARLYACCESSTREASURESTRATEGY__CTOR_OFFSET UNITYSDK_OFFSET(0x11579E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildGearManager_EarlyAccessStrategy_EvolveBuildEarlyAccessTreasureStrategy_TypeDefinitionIndex = 56252;

	class EvolveBuildGearManager_EarlyAccessStrategy_EvolveBuildEarlyAccessTreasureStrategy : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildTreasureSolution*>* _Solutions; // 0x10
		::System::UInt32 _BasicCoinNum; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_EVOLVEBUILDEARLYACCESSTREASURESTRATEGY__CTOR_OFFSET))(this);
		}

		::System::Void SetTreasureConfig(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildTreasureSolution*>* a1, ::System::UInt32 a2, ::RPG::GameCore::EvolveBuildTreasureType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildTreasureSolution*>*, ::System::UInt32, ::RPG::GameCore::EvolveBuildTreasureType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_EVOLVEBUILDEARLYACCESSTREASURESTRATEGY_SETTREASURECONFIG_OFFSET))(this, a1, a2, a3);
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
