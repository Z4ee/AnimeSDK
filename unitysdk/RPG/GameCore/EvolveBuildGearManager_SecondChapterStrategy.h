#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildGearManager_EvolveBuildPauseConfig.h"
#include "unitysdk/RPG/GameCore/EvolveBuildGearManager_SecondChapterStrategy___c__DisplayClass6_0.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_407;
class Class_1_0F00B330391D7109;
class Class_1_7AB88D713F5121B3_40;
class Class_1_CF82246F32402DDA;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class ActivityEvolveBuildCardRow; }
namespace RPG::GameCore { class ActivityEvolveBuildGearCollectionRow; }
namespace RPG::GameCore { class EvolveBuildGearManager; }
namespace RPG::GameCore { class EvolveBuildGearManager_IEvolveBuildTreasureStrategy; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_GEARMGR_OFFSET UNITYSDK_OFFSET(0xCDE9FD0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_GEARSELECTPAGEFILENAME_OFFSET UNITYSDK_OFFSET(0xCDEA4D0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_GEARSELECTPAGEPATH_OFFSET UNITYSDK_OFFSET(0xCDEA490)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_PAUSECONFIG_OFFSET UNITYSDK_OFFSET(0xCDEA600)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_PROGRESSPAGEPATH_OFFSET UNITYSDK_OFFSET(0xCDEA5C0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_SEASON_OFFSET UNITYSDK_OFFSET(0xCDEA470)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_SORTVISITOR_OFFSET UNITYSDK_OFFSET(0xCDEA640)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_TREASURESTRATEGY_OFFSET UNITYSDK_OFFSET(0xCDEA630)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_SET_GEARMGR_OFFSET UNITYSDK_OFFSET(0xCDE9FE0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_SET_PAUSECONFIG_OFFSET UNITYSDK_OFFSET(0xCDEA620)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_SHOWCARDSELECTDIALOG_OFFSET UNITYSDK_OFFSET(0xCDE9FF0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_SHOWPHASERESULTUI_OFFSET UNITYSDK_OFFSET(0xCDEA230)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__CONVERTWEIGHTINDEXTOSELECTPRIORITY_OFFSET UNITYSDK_OFFSET(0xCDE9430)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__CTOR_OFFSET UNITYSDK_OFFSET(0xCDDB2E0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__FILLCARDSELECTINFO_OFFSET UNITYSDK_OFFSET(0xCDE9490)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__GENGEARWEIGHTDICT_OFFSET UNITYSDK_OFFSET(0xCDE89D0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__GETGEARWEIGHTINDEX_OFFSET UNITYSDK_OFFSET(0xCDE8E20)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__GETGEARWEIGHT_1_OFFSET UNITYSDK_OFFSET(0xCDE93C0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__GETGEARWEIGHT_OFFSET UNITYSDK_OFFSET(0xCDE8D60)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY___FILLCARDSELECTINFO_G__ISCARDVALIDFORSELECT_6_0_OFFSET UNITYSDK_OFFSET(0xCDE9910)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY___FILLCARDSELECTINFO_G___FETCHCARDFROMPOOL_6_2_OFFSET UNITYSDK_OFFSET(0xCDE9DF0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY___FILLCARDSELECTINFO_G___SETUPCARDPOOL_6_1_OFFSET UNITYSDK_OFFSET(0xCDE9AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildGearManager_SecondChapterStrategy_TypeDefinitionIndex = 52335;

	class EvolveBuildGearManager_SecondChapterStrategy : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveBuildGearManager* _GearMgr_k__BackingField; // 0x10
		::Class_0_16E4307DCC419505_407* _SortVisitor; // 0x18
		::RPG::GameCore::EvolveBuildGearManager_IEvolveBuildTreasureStrategy* _TreasureStrategy_k__BackingField; // 0x20
		::RPG::GameCore::EvolveBuildGearManager_EvolveBuildPauseConfig _PauseConfig_k__BackingField; // 0x28

		::System::Void _ctor(::RPG::GameCore::EvolveBuildGearManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__CTOR_OFFSET))(this, a1);
		}

		::RPG::PoolDictionary_2<::System::UInt32, ::System::Int32>* _GenGearWeightDict(::System::Int32& a1)
		{
			return ((::RPG::PoolDictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__GENGEARWEIGHTDICT_OFFSET))(this, a1);
		}

		::System::Int32 _GetGearWeight(::RPG::GameCore::ActivityEvolveBuildGearCollectionRow* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__GETGEARWEIGHT_OFFSET))(this, a1);
		}

		::System::Int32 _GetGearWeight_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__GETGEARWEIGHT_1_OFFSET))(this, a1);
		}

		::System::Int32 _GetGearWeightIndex(::RPG::GameCore::ActivityEvolveBuildGearCollectionRow* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__GETGEARWEIGHTINDEX_OFFSET))(this, a1);
		}

		::System::Byte _ConvertWeightIndexToSelectPriority(::System::Int32 a1)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__CONVERTWEIGHTINDEXTOSELECTPRIORITY_OFFSET))(this, a1);
		}

		::System::Void _FillCardSelectInfo(::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_40*>* a1, ::Il2CppArray<::System::UInt32>* a2, ::Il2CppArray<::System::UInt32>* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_40*>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY__FILLCARDSELECTINFO_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::EvolveBuildGearManager* get_GearMgr()
		{
			return ((::RPG::GameCore::EvolveBuildGearManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_GEARMGR_OFFSET))(this);
		}

		::System::Void set_GearMgr(::RPG::GameCore::EvolveBuildGearManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_SET_GEARMGR_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* ShowCardSelectDialog(::Class_1_CF82246F32402DDA* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::Class_1_CF82246F32402DDA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_SHOWCARDSELECTDIALOG_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* ShowPhaseResultUI(::Class_1_0F00B330391D7109* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::Class_1_0F00B330391D7109*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_SHOWPHASERESULTUI_OFFSET))(this, a1);
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

		::System::Void set_PauseConfig(::RPG::GameCore::EvolveBuildGearManager_EvolveBuildPauseConfig a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager_EvolveBuildPauseConfig))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_SET_PAUSECONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::EvolveBuildGearManager_IEvolveBuildTreasureStrategy* get_TreasureStrategy()
		{
			return ((::RPG::GameCore::EvolveBuildGearManager_IEvolveBuildTreasureStrategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_TREASURESTRATEGY_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_SEASON_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_407* get_SortVisitor()
		{
			return ((::Class_0_16E4307DCC419505_407*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY_GET_SORTVISITOR_OFFSET))(this);
		}

		::System::Boolean __FillCardSelectInfo_g__IsCardValidForSelect_6_0(::RPG::GameCore::ActivityEvolveBuildCardRow* a1, ::RPG::GameCore::EvolveBuildGearManager_SecondChapterStrategy___c__DisplayClass6_0& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActivityEvolveBuildCardRow*, ::RPG::GameCore::EvolveBuildGearManager_SecondChapterStrategy___c__DisplayClass6_0&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY___FILLCARDSELECTINFO_G__ISCARDVALIDFORSELECT_6_0_OFFSET))(this, a1, a2);
		}

		::System::Void __FillCardSelectInfo_g___SetupCardPool_6_1(::RPG::GameCore::EvolveBuildGearManager_SecondChapterStrategy___c__DisplayClass6_0& a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager_SecondChapterStrategy___c__DisplayClass6_0&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY___FILLCARDSELECTINFO_G___SETUPCARDPOOL_6_1_OFFSET))(this, a1);
		}

		::Class_1_7AB88D713F5121B3_40* __FillCardSelectInfo_g___FetchCardFromPool_6_2(::System::Boolean a1, ::RPG::GameCore::EvolveBuildGearManager_SecondChapterStrategy___c__DisplayClass6_0& a2)
		{
			return ((::Class_1_7AB88D713F5121B3_40*(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::EvolveBuildGearManager_SecondChapterStrategy___c__DisplayClass6_0&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_SECONDCHAPTERSTRATEGY___FILLCARDSELECTINFO_G___FETCHCARDFROMPOOL_6_2_OFFSET))(this, a1, a2);
		}
	};
}
