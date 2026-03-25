#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IEvolveBuildFirstStageTutorialUnlockConfig; }
namespace RPG::Client { class SortedEvolveBuildGearEquipInfoLists; }
namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDEXTERNALFIRSTCHAPTERSTRATEGY_GETSORTEDGEAREQUIPINFO_OFFSET UNITYSDK_OFFSET(0x9630DF0)
#define RPG_CLIENT_EVOLVEBUILDEXTERNALFIRSTCHAPTERSTRATEGY_GET_ENDLESSSTAGEID_OFFSET UNITYSDK_OFFSET(0x9630F20)
#define RPG_CLIENT_EVOLVEBUILDEXTERNALFIRSTCHAPTERSTRATEGY_GET_LOADINGPAGEPATH_OFFSET UNITYSDK_OFFSET(0x9630E90)
#define RPG_CLIENT_EVOLVEBUILDEXTERNALFIRSTCHAPTERSTRATEGY_GET_NORANDOMBONUSNUM_OFFSET UNITYSDK_OFFSET(0x9630F40)
#define RPG_CLIENT_EVOLVEBUILDEXTERNALFIRSTCHAPTERSTRATEGY_GET_OFFERINGID_OFFSET UNITYSDK_OFFSET(0x9630E80)
#define RPG_CLIENT_EVOLVEBUILDEXTERNALFIRSTCHAPTERSTRATEGY_GET_RESULTPAGEPATH_OFFSET UNITYSDK_OFFSET(0x9630ED0)
#define RPG_CLIENT_EVOLVEBUILDEXTERNALFIRSTCHAPTERSTRATEGY_GET_SEASON_OFFSET UNITYSDK_OFFSET(0x9630E70)
#define RPG_CLIENT_EVOLVEBUILDEXTERNALFIRSTCHAPTERSTRATEGY_GET_TUTORIALUNLOCKCONFIG_OFFSET UNITYSDK_OFFSET(0x9630F30)
#define RPG_CLIENT_EVOLVEBUILDEXTERNALFIRSTCHAPTERSTRATEGY_GET_WEAPONINITIALSKILLID_OFFSET UNITYSDK_OFFSET(0x9630F10)
#define RPG_CLIENT_EVOLVEBUILDEXTERNALFIRSTCHAPTERSTRATEGY_SHOWUIONBATTLEEND_OFFSET UNITYSDK_OFFSET(0x9630D50)
#define RPG_CLIENT_EVOLVEBUILDEXTERNALFIRSTCHAPTERSTRATEGY__CTOR_OFFSET UNITYSDK_OFFSET(0x9631050)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildExternalFirstChapterStrategy_TypeDefinitionIndex = 51872;

	class EvolveBuildExternalFirstChapterStrategy : public ::System::Object
	{
	public:
		::RPG::Client::IEvolveBuildFirstStageTutorialUnlockConfig* _TutorialUnlockConfig_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDEXTERNALFIRSTCHAPTERSTRATEGY__CTOR_OFFSET))(this);
		}

		::System::Void ShowUIOnBattleEnd(::System::Boolean isLose)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDEXTERNALFIRSTCHAPTERSTRATEGY_SHOWUIONBATTLEEND_OFFSET))(this, isLose);
		}

		::RPG::Client::SortedEvolveBuildGearEquipInfoLists* GetSortedGearEquipInfo(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* weapons, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* accessories, ::System::Int32 weaponSlotCapacity, ::System::Int32 accessorySlotCapacity)
		{
			return ((::RPG::Client::SortedEvolveBuildGearEquipInfoLists*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDEXTERNALFIRSTCHAPTERSTRATEGY_GETSORTEDGEAREQUIPINFO_OFFSET))(this, weapons, accessories, weaponSlotCapacity, accessorySlotCapacity);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDEXTERNALFIRSTCHAPTERSTRATEGY_GET_SEASON_OFFSET))(this);
		}

		::System::UInt32 get_OfferingID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDEXTERNALFIRSTCHAPTERSTRATEGY_GET_OFFERINGID_OFFSET))(this);
		}

		::System::String* get_LoadingPagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDEXTERNALFIRSTCHAPTERSTRATEGY_GET_LOADINGPAGEPATH_OFFSET))(this);
		}

		::System::String* get_ResultPagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDEXTERNALFIRSTCHAPTERSTRATEGY_GET_RESULTPAGEPATH_OFFSET))(this);
		}

		::System::UInt32 get_WeaponInitialSkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDEXTERNALFIRSTCHAPTERSTRATEGY_GET_WEAPONINITIALSKILLID_OFFSET))(this);
		}

		::System::UInt32 get_EndLessStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDEXTERNALFIRSTCHAPTERSTRATEGY_GET_ENDLESSSTAGEID_OFFSET))(this);
		}

		::RPG::Client::IEvolveBuildFirstStageTutorialUnlockConfig* get_TutorialUnlockConfig()
		{
			return ((::RPG::Client::IEvolveBuildFirstStageTutorialUnlockConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDEXTERNALFIRSTCHAPTERSTRATEGY_GET_TUTORIALUNLOCKCONFIG_OFFSET))(this);
		}

		::System::UInt32 get_NoRandomBonusNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDEXTERNALFIRSTCHAPTERSTRATEGY_GET_NORANDOMBONUSNUM_OFFSET))(this);
		}
	};
}
