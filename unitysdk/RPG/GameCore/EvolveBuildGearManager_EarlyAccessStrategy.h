#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildGearManager_EvolveBuildPauseConfig.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_466;
class Class_1_3AD2528CD53B1639_4;
class Class_1_7AB88D713F5121B3_42;
class Class_1_CF82246F32402DDA;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class ActivityEvolveBuildGearCollectionRow; }
namespace RPG::GameCore { class EvolveBuildGearManager; }
namespace RPG::GameCore { class EvolveBuildGearManager_IEvolveBuildTreasureStrategy; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_GEARMGR_OFFSET UNITYSDK_OFFSET(0xE632D40)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_GEARSELECTPAGEFILENAME_OFFSET UNITYSDK_OFFSET(0xE6330B0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_GEARSELECTPAGEPATH_OFFSET UNITYSDK_OFFSET(0xE633070)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_PAUSECONFIG_OFFSET UNITYSDK_OFFSET(0xE6331E0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_PROGRESSPAGEPATH_OFFSET UNITYSDK_OFFSET(0xE6331A0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_SEASON_OFFSET UNITYSDK_OFFSET(0xE633220)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_SORTVISITOR_OFFSET UNITYSDK_OFFSET(0xE633240)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_TREASURESTRATEGY_OFFSET UNITYSDK_OFFSET(0xE633210)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_SET_GEARMGR_OFFSET UNITYSDK_OFFSET(0xE632D50)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_SET_PAUSECONFIG_OFFSET UNITYSDK_OFFSET(0xE633200)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_SHOWCARDSELECTDIALOG_OFFSET UNITYSDK_OFFSET(0xE632D60)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_SHOWPHASERESULTUI_OFFSET UNITYSDK_OFFSET(0xE633020)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__CONVERTWEIGHTINDEXTOSELECTPRIORITY_OFFSET UNITYSDK_OFFSET(0xE6322C0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__CTOR_OFFSET UNITYSDK_OFFSET(0xE626420)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__FILLCARDSELECTINFO_OFFSET UNITYSDK_OFFSET(0xE632320)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__GENGEARWEIGHTDICT_OFFSET UNITYSDK_OFFSET(0xE631A10)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__GETGEARWEIGHTINDEX_OFFSET UNITYSDK_OFFSET(0xE631E60)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__GETGEARWEIGHT_1_OFFSET UNITYSDK_OFFSET(0xE632250)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__GETGEARWEIGHT_OFFSET UNITYSDK_OFFSET(0xE631DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildGearManager_EarlyAccessStrategy_TypeDefinitionIndex = 56251;

	class EvolveBuildGearManager_EarlyAccessStrategy : public ::System::Object
	{
	public:
		::RPG::GameCore::EvolveBuildGearManager_IEvolveBuildTreasureStrategy* _TreasureStrategy_k__BackingField; // 0x10
		::RPG::GameCore::EvolveBuildGearManager* _GearMgr_k__BackingField; // 0x18
		::Class_0_16E4307DCC419505_466* _SortVisitor; // 0x20
		::RPG::GameCore::EvolveBuildGearManager_EvolveBuildPauseConfig _PauseConfig_k__BackingField; // 0x28

		::System::Void _ctor(::RPG::GameCore::EvolveBuildGearManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__CTOR_OFFSET))(this, a1);
		}

		::RPG::PoolDictionary_2<::System::UInt32, ::System::Int32>* _GenGearWeightDict(::System::Int32& a1)
		{
			return ((::RPG::PoolDictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__GENGEARWEIGHTDICT_OFFSET))(this, a1);
		}

		::System::Int32 _GetGearWeight(::RPG::GameCore::ActivityEvolveBuildGearCollectionRow* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__GETGEARWEIGHT_OFFSET))(this, a1);
		}

		::System::Int32 _GetGearWeight_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__GETGEARWEIGHT_1_OFFSET))(this, a1);
		}

		::System::Int32 _GetGearWeightIndex(::RPG::GameCore::ActivityEvolveBuildGearCollectionRow* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ActivityEvolveBuildGearCollectionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__GETGEARWEIGHTINDEX_OFFSET))(this, a1);
		}

		::System::Byte _ConvertWeightIndexToSelectPriority(::System::Int32 a1)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__CONVERTWEIGHTINDEXTOSELECTPRIORITY_OFFSET))(this, a1);
		}

		::System::Void _FillCardSelectInfo(::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_42*>* a1, ::Il2CppArray<::System::UInt32>* a2, ::Il2CppArray<::System::UInt32>* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_42*>*, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY__FILLCARDSELECTINFO_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::EvolveBuildGearManager* get_GearMgr()
		{
			return ((::RPG::GameCore::EvolveBuildGearManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_GEARMGR_OFFSET))(this);
		}

		::System::Void set_GearMgr(::RPG::GameCore::EvolveBuildGearManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_SET_GEARMGR_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* ShowCardSelectDialog(::Class_1_CF82246F32402DDA* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::Class_1_CF82246F32402DDA*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_SHOWCARDSELECTDIALOG_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* ShowPhaseResultUI(::Class_1_3AD2528CD53B1639_4* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::Class_1_3AD2528CD53B1639_4*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_SHOWPHASERESULTUI_OFFSET))(this, a1);
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

		::System::Void set_PauseConfig(::RPG::GameCore::EvolveBuildGearManager_EvolveBuildPauseConfig a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager_EvolveBuildPauseConfig))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_SET_PAUSECONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::EvolveBuildGearManager_IEvolveBuildTreasureStrategy* get_TreasureStrategy()
		{
			return ((::RPG::GameCore::EvolveBuildGearManager_IEvolveBuildTreasureStrategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_TREASURESTRATEGY_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_SEASON_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_466* get_SortVisitor()
		{
			return ((::Class_0_16E4307DCC419505_466*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EARLYACCESSSTRATEGY_GET_SORTVISITOR_OFFSET))(this);
		}
	};
}
