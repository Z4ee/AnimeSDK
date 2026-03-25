#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildGearManager_EvolveBuildPauseConfig.h"
#include "unitysdk/RPG/GameCore/EvolveBuildGearManager_SecondChapterStrategy___c__DisplayClass6_0.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_381;
class Class_1_7AB88D713F5121B3_33;
class Class_1_C9DFE5EE7107C629_4;
class Class_1_CF82246F32402DDA;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class ActivityEvolveBuildCardRow; }
namespace RPG::GameCore { class ActivityEvolveBuildGearCollectionRow; }
namespace RPG::GameCore { class EvolveBuildGearManager; }
namespace RPG::GameCore { class EvolveBuildGearManager_IEvolveBuildTreasureStrategy; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_GEARMGR_OFFSET UNITYSDK_OFFSET(0xA9347E0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_GEARSELECTPAGEFILENAME_OFFSET UNITYSDK_OFFSET(0xA934D20)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_GEARSELECTPAGEPATH_OFFSET UNITYSDK_OFFSET(0xA934CE0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_PAUSECONFIG_OFFSET UNITYSDK_OFFSET(0xA934E70)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_PROGRESSPAGEPATH_OFFSET UNITYSDK_OFFSET(0xA934E30)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_SEASON_OFFSET UNITYSDK_OFFSET(0xA934CC0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_SORTVISITOR_OFFSET UNITYSDK_OFFSET(0xA934EB0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_TREASURESTRATEGY_OFFSET UNITYSDK_OFFSET(0xA934EA0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_SET_GEARMGR_OFFSET UNITYSDK_OFFSET(0xA9347F0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_SET_PAUSECONFIG_OFFSET UNITYSDK_OFFSET(0xA934E90)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_SHOWCARDSELECTDIALOG_OFFSET UNITYSDK_OFFSET(0xA934800)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_SHOWPHASERESULTUI_OFFSET UNITYSDK_OFFSET(0xA934A50)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__CONVERTWEIGHTINDEXTOSELECTPRIORITY_OFFSET UNITYSDK_OFFSET(0xA933EA0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__CTOR_OFFSET UNITYSDK_OFFSET(0xA926F60)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__FILLCARDSELECTINFO_OFFSET UNITYSDK_OFFSET(0xA933F00)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__GENGEARWEIGHTDICT_OFFSET UNITYSDK_OFFSET(0xA933560)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__GETGEARWEIGHTINDEX_OFFSET UNITYSDK_OFFSET(0xA933870)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__GETGEARWEIGHT_1_OFFSET UNITYSDK_OFFSET(0xA933E30)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__GETGEARWEIGHT_OFFSET UNITYSDK_OFFSET(0xA9337B0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY___FILLCARDSELECTINFO_G__ISCARDVALIDFORSELECT_6_0_OFFSET UNITYSDK_OFFSET(0xA934320)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY___FILLCARDSELECTINFO_G___FETCHCARDFROMPOOL_6_2_OFFSET UNITYSDK_OFFSET(0xA934680)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY___FILLCARDSELECTINFO_G___SETUPCARDPOOL_6_1_OFFSET UNITYSDK_OFFSET(0xA934440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildGearManager_SecondChapterStrategy_TypeDefinitionIndex = 44913;

	class EvolveBuildGearManager_SecondChapterStrategy : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_381* _SortVisitor; // 0x10
		::RPG::GameCore::EvolveBuildGearManager_EvolveBuildPauseConfig _PauseConfig_k__BackingField; // 0x18
		::RPG::GameCore::EvolveBuildGearManager_IEvolveBuildTreasureStrategy* _TreasureStrategy_k__BackingField; // 0x30
		::RPG::GameCore::EvolveBuildGearManager* _GearMgr_k__BackingField; // 0x38

		::System::Void _ctor(::RPG::GameCore::EvolveBuildGearManager* pMgr)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__CTOR_OFFSET))(this, pMgr);
		}

		::RPG::PoolDictionary_2<::System::UInt32, ::System::Int32>* _GenGearWeightDict(::System::Int32& nTotalWeight)
		{
			return ((::RPG::PoolDictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__GENGEARWEIGHTDICT_OFFSET))(this, nTotalWeight);
		}

		::System::Int32 _GetGearWeight(::RPG::GameCore::ActivityEvolveBuildGearCollectionRow* config)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__GETGEARWEIGHT_OFFSET))(this, config);
		}

		::System::Int32 _GetGearWeight_1(::System::Int32 nWeightConstIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__GETGEARWEIGHT_1_OFFSET))(this, nWeightConstIndex);
		}

		::System::Int32 _GetGearWeightIndex(::RPG::GameCore::ActivityEvolveBuildGearCollectionRow* config)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__GETGEARWEIGHTINDEX_OFFSET))(this, config);
		}

		::System::Byte _ConvertWeightIndexToSelectPriority(::System::Int32 weightIndex)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__CONVERTWEIGHTINDEXTOSELECTPRIORITY_OFFSET))(this, weightIndex);
		}

		::System::Void _FillCardSelectInfo(::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_33*>* targetList, ::Il2CppArray<::System::UInt32>* refWhitelist, ::Il2CppArray<::System::UInt32>* refBlacklist, ::System::UInt32 nMaxCardCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_33*>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__FILLCARDSELECTINFO_OFFSET))(this, targetList, refWhitelist, refBlacklist, nMaxCardCount);
		}

		::RPG::GameCore::EvolveBuildGearManager* get_GearMgr()
		{
			return ((::RPG::GameCore::EvolveBuildGearManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_GEARMGR_OFFSET))(this);
		}

		::System::Void set_GearMgr(::RPG::GameCore::EvolveBuildGearManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_SET_GEARMGR_OFFSET))(this, value);
		}

		::RPG::Client::UIController* ShowCardSelectDialog(::Class_1_CF82246F32402DDA* initParam)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::Class_1_CF82246F32402DDA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_SHOWCARDSELECTDIALOG_OFFSET))(this, initParam);
		}

		::RPG::Client::UIController* ShowPhaseResultUI(::Class_1_C9DFE5EE7107C629_4* levelInfo)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_4*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_SHOWPHASERESULTUI_OFFSET))(this, levelInfo);
		}

		::System::String* get_GearSelectPagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_GEARSELECTPAGEPATH_OFFSET))(this);
		}

		::System::String* get_GearSelectPageFileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_GEARSELECTPAGEFILENAME_OFFSET))(this);
		}

		::System::String* get_ProgressPagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_PROGRESSPAGEPATH_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildGearManager_EvolveBuildPauseConfig get_PauseConfig()
		{
			return ((::RPG::GameCore::EvolveBuildGearManager_EvolveBuildPauseConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_PAUSECONFIG_OFFSET))(this);
		}

		::System::Void set_PauseConfig(::RPG::GameCore::EvolveBuildGearManager_EvolveBuildPauseConfig value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager_EvolveBuildPauseConfig))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_SET_PAUSECONFIG_OFFSET))(this, value);
		}

		::RPG::GameCore::EvolveBuildGearManager_IEvolveBuildTreasureStrategy* get_TreasureStrategy()
		{
			return ((::RPG::GameCore::EvolveBuildGearManager_IEvolveBuildTreasureStrategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_TREASURESTRATEGY_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_SEASON_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_381* get_SortVisitor()
		{
			return ((::Class_0_16E4307DCC419505_381*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_SORTVISITOR_OFFSET))(this);
		}

		::System::Boolean __FillCardSelectInfo_g__IsCardValidForSelect_6_0(::RPG::GameCore::ActivityEvolveBuildCardRow* pCardRow, ::RPG::GameCore::EvolveBuildGearManager_SecondChapterStrategy___c__DisplayClass6_0& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActivityEvolveBuildCardRow*, ::RPG::GameCore::EvolveBuildGearManager_SecondChapterStrategy___c__DisplayClass6_0&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY___FILLCARDSELECTINFO_G__ISCARDVALIDFORSELECT_6_0_OFFSET))(this, pCardRow, a2);
		}

		::System::Void __FillCardSelectInfo_g___SetupCardPool_6_1(::RPG::GameCore::EvolveBuildGearManager_SecondChapterStrategy___c__DisplayClass6_0& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager_SecondChapterStrategy___c__DisplayClass6_0&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY___FILLCARDSELECTINFO_G___SETUPCARDPOOL_6_1_OFFSET))(this, a1);
		}

		::Class_1_7AB88D713F5121B3_33* __FillCardSelectInfo_g___FetchCardFromPool_6_2(::System::Boolean bAddToTargetList, ::RPG::GameCore::EvolveBuildGearManager_SecondChapterStrategy___c__DisplayClass6_0& a2)
		{
			return ((::Class_1_7AB88D713F5121B3_33*(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::EvolveBuildGearManager_SecondChapterStrategy___c__DisplayClass6_0&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY___FILLCARDSELECTINFO_G___FETCHCARDFROMPOOL_6_2_OFFSET))(this, bAddToTargetList, a2);
		}
	};
}
