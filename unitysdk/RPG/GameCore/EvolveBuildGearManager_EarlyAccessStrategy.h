#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildGearManager_EvolveBuildPauseConfig.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_388;
class Class_1_7AB88D713F5121B3_40;
class Class_1_C9DFE5EE7107C629_8;
class Class_1_CF82246F32402DDA;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class ActivityEvolveBuildGearCollectionRow; }
namespace RPG::GameCore { class EvolveBuildGearManager; }
namespace RPG::GameCore { class EvolveBuildGearManager_IEvolveBuildTreasureStrategy; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_GEARMGR_OFFSET UNITYSDK_OFFSET(0xB67D500)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_GEARSELECTPAGEFILENAME_OFFSET UNITYSDK_OFFSET(0xB67D840)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_GEARSELECTPAGEPATH_OFFSET UNITYSDK_OFFSET(0xB67D800)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_PAUSECONFIG_OFFSET UNITYSDK_OFFSET(0xB67D990)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_PROGRESSPAGEPATH_OFFSET UNITYSDK_OFFSET(0xB67D950)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_SEASON_OFFSET UNITYSDK_OFFSET(0xB67D9D0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_SORTVISITOR_OFFSET UNITYSDK_OFFSET(0xB67D9F0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_TREASURESTRATEGY_OFFSET UNITYSDK_OFFSET(0xB67D9C0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_SET_GEARMGR_OFFSET UNITYSDK_OFFSET(0xB67D510)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_SET_PAUSECONFIG_OFFSET UNITYSDK_OFFSET(0xB67D9B0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_SHOWCARDSELECTDIALOG_OFFSET UNITYSDK_OFFSET(0xB67D520)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_SHOWPHASERESULTUI_OFFSET UNITYSDK_OFFSET(0xB67D7B0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__CONVERTWEIGHTINDEXTOSELECTPRIORITY_OFFSET UNITYSDK_OFFSET(0xB67CE70)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__CTOR_OFFSET UNITYSDK_OFFSET(0xB671EE0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__FILLCARDSELECTINFO_OFFSET UNITYSDK_OFFSET(0xB67CED0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__GENGEARWEIGHTDICT_OFFSET UNITYSDK_OFFSET(0xB67C6F0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__GETGEARWEIGHTINDEX_OFFSET UNITYSDK_OFFSET(0xB67CA00)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__GETGEARWEIGHT_1_OFFSET UNITYSDK_OFFSET(0xB67CE00)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__GETGEARWEIGHT_OFFSET UNITYSDK_OFFSET(0xB67C940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildGearManager_EarlyAccessStrategy_TypeDefinitionIndex = 51660;

	class EvolveBuildGearManager_EarlyAccessStrategy : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveBuildGearManager_IEvolveBuildTreasureStrategy* _TreasureStrategy_k__BackingField; // 0x10
		::RPG::GameCore::EvolveBuildGearManager_EvolveBuildPauseConfig _PauseConfig_k__BackingField; // 0x18
		::RPG::GameCore::EvolveBuildGearManager* _GearMgr_k__BackingField; // 0x30
		::Class_0_16E4307DCC419505_388* _SortVisitor; // 0x38

		::System::Void _ctor(::RPG::GameCore::EvolveBuildGearManager* pMgr)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__CTOR_OFFSET))(this, pMgr);
		}

		::RPG::PoolDictionary_2<::System::UInt32, ::System::Int32>* _GenGearWeightDict(::System::Int32& nTotalWeight)
		{
			return ((::RPG::PoolDictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__GENGEARWEIGHTDICT_OFFSET))(this, nTotalWeight);
		}

		::System::Int32 _GetGearWeight(::RPG::GameCore::ActivityEvolveBuildGearCollectionRow* config)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__GETGEARWEIGHT_OFFSET))(this, config);
		}

		::System::Int32 _GetGearWeight_1(::System::Int32 nWeightConstIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__GETGEARWEIGHT_1_OFFSET))(this, nWeightConstIndex);
		}

		::System::Int32 _GetGearWeightIndex(::RPG::GameCore::ActivityEvolveBuildGearCollectionRow* config)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__GETGEARWEIGHTINDEX_OFFSET))(this, config);
		}

		::System::Byte _ConvertWeightIndexToSelectPriority(::System::Int32 weightIndex)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__CONVERTWEIGHTINDEXTOSELECTPRIORITY_OFFSET))(this, weightIndex);
		}

		::System::Void _FillCardSelectInfo(::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_40*>* targetList, ::Il2CppArray<::System::UInt32>* refWhitelist, ::Il2CppArray<::System::UInt32>* refBlacklist, ::System::UInt32 nMaxCardCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_40*>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__FILLCARDSELECTINFO_OFFSET))(this, targetList, refWhitelist, refBlacklist, nMaxCardCount);
		}

		::RPG::GameCore::EvolveBuildGearManager* get_GearMgr()
		{
			return ((::RPG::GameCore::EvolveBuildGearManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_GEARMGR_OFFSET))(this);
		}

		::System::Void set_GearMgr(::RPG::GameCore::EvolveBuildGearManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_SET_GEARMGR_OFFSET))(this, value);
		}

		::RPG::Client::UIController* ShowCardSelectDialog(::Class_1_CF82246F32402DDA* initParam)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::Class_1_CF82246F32402DDA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_SHOWCARDSELECTDIALOG_OFFSET))(this, initParam);
		}

		::RPG::Client::UIController* ShowPhaseResultUI(::Class_1_C9DFE5EE7107C629_8* levelInfo)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_8*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_SHOWPHASERESULTUI_OFFSET))(this, levelInfo);
		}

		::System::String* get_GearSelectPagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_GEARSELECTPAGEPATH_OFFSET))(this);
		}

		::System::String* get_GearSelectPageFileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_GEARSELECTPAGEFILENAME_OFFSET))(this);
		}

		::System::String* get_ProgressPagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_PROGRESSPAGEPATH_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildGearManager_EvolveBuildPauseConfig get_PauseConfig()
		{
			return ((::RPG::GameCore::EvolveBuildGearManager_EvolveBuildPauseConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_PAUSECONFIG_OFFSET))(this);
		}

		::System::Void set_PauseConfig(::RPG::GameCore::EvolveBuildGearManager_EvolveBuildPauseConfig value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager_EvolveBuildPauseConfig))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_SET_PAUSECONFIG_OFFSET))(this, value);
		}

		::RPG::GameCore::EvolveBuildGearManager_IEvolveBuildTreasureStrategy* get_TreasureStrategy()
		{
			return ((::RPG::GameCore::EvolveBuildGearManager_IEvolveBuildTreasureStrategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_TREASURESTRATEGY_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_SEASON_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_388* get_SortVisitor()
		{
			return ((::Class_0_16E4307DCC419505_388*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_SORTVISITOR_OFFSET))(this);
		}
	};
}
