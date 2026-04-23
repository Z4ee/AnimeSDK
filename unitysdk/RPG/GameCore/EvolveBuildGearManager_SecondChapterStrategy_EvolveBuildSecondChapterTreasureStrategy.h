#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildTreasureType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EvolveBuildTreasureSolution; }
namespace RPG::Client { class UIController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_EVOLVEBUILDSECONDCHAPTERTREASURESTRATEGY_GET_DELAYSHOWTREASUREUI_OFFSET UNITYSDK_OFFSET(0xB680180)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_EVOLVEBUILDSECONDCHAPTERTREASURESTRATEGY_SETTREASURECONFIG_OFFSET UNITYSDK_OFFSET(0xB67FE00)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_EVOLVEBUILDSECONDCHAPTERTREASURESTRATEGY_SHOWEVOLVEBUILDTREASURE_OFFSET UNITYSDK_OFFSET(0xB67FE60)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_EVOLVEBUILDSECONDCHAPTERTREASURESTRATEGY__CTOR_OFFSET UNITYSDK_OFFSET(0xB67E4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildGearManager_SecondChapterStrategy_EvolveBuildSecondChapterTreasureStrategy_TypeDefinitionIndex = 51663;

	class EvolveBuildGearManager_SecondChapterStrategy_EvolveBuildSecondChapterTreasureStrategy : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildTreasureSolution*>* _Solutions; // 0x10
		::RPG::GameCore::EvolveBuildTreasureType _TreasureType; // 0x18
		::System::UInt32 _BasicCoinNum; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_EVOLVEBUILDSECONDCHAPTERTREASURESTRATEGY__CTOR_OFFSET))(this);
		}

		::System::Void SetTreasureConfig(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildTreasureSolution*>* solutions, ::System::UInt32 basicCoinNum, ::RPG::GameCore::EvolveBuildTreasureType treasureType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildTreasureSolution*>*, ::System::UInt32, ::RPG::GameCore::EvolveBuildTreasureType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_EVOLVEBUILDSECONDCHAPTERTREASURESTRATEGY_SETTREASURECONFIG_OFFSET))(this, solutions, basicCoinNum, treasureType);
		}

		::RPG::Client::UIController* ShowEvolveBuildTreasure()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_EVOLVEBUILDSECONDCHAPTERTREASURESTRATEGY_SHOWEVOLVEBUILDTREASURE_OFFSET))(this);
		}

		::System::Boolean get_DelayShowTreasureUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_EVOLVEBUILDSECONDCHAPTERTREASURESTRATEGY_GET_DELAYSHOWTREASUREUI_OFFSET))(this);
		}
	};
}
