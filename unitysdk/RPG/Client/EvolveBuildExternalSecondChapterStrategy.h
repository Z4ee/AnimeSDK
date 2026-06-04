#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

class Class_1_7B0175BD08E75DE3;
namespace RPG::Client { class IEvolveBuildFirstStageTutorialUnlockConfig; }
namespace RPG::Client { class SortedEvolveBuildGearEquipInfoLists; }
namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDEXTERNALSECONDCHAPTERSTRATEGY_GETSORTEDGEAREQUIPINFO_OFFSET UNITYSDK_OFFSET(0xB93FC90)
#define RPG_CLIENT_EVOLVEBUILDEXTERNALSECONDCHAPTERSTRATEGY_GET_ENDLESSSTAGEID_OFFSET UNITYSDK_OFFSET(0xB93FDD0)
#define RPG_CLIENT_EVOLVEBUILDEXTERNALSECONDCHAPTERSTRATEGY_GET_LOADINGPAGEPATH_OFFSET UNITYSDK_OFFSET(0xB93FD40)
#define RPG_CLIENT_EVOLVEBUILDEXTERNALSECONDCHAPTERSTRATEGY_GET_NORANDOMBONUSNUM_OFFSET UNITYSDK_OFFSET(0xB93FDF0)
#define RPG_CLIENT_EVOLVEBUILDEXTERNALSECONDCHAPTERSTRATEGY_GET_OFFERINGID_OFFSET UNITYSDK_OFFSET(0xB93FD30)
#define RPG_CLIENT_EVOLVEBUILDEXTERNALSECONDCHAPTERSTRATEGY_GET_RESULTPAGEPATH_OFFSET UNITYSDK_OFFSET(0xB93FD80)
#define RPG_CLIENT_EVOLVEBUILDEXTERNALSECONDCHAPTERSTRATEGY_GET_SEASON_OFFSET UNITYSDK_OFFSET(0xB93FD20)
#define RPG_CLIENT_EVOLVEBUILDEXTERNALSECONDCHAPTERSTRATEGY_GET_TUTORIALUNLOCKCONFIG_OFFSET UNITYSDK_OFFSET(0xB93FDE0)
#define RPG_CLIENT_EVOLVEBUILDEXTERNALSECONDCHAPTERSTRATEGY_GET_WEAPONINITIALSKILLID_OFFSET UNITYSDK_OFFSET(0xB93FDC0)
#define RPG_CLIENT_EVOLVEBUILDEXTERNALSECONDCHAPTERSTRATEGY_SHOWUIONBATTLEEND_OFFSET UNITYSDK_OFFSET(0xB93F9E0)
#define RPG_CLIENT_EVOLVEBUILDEXTERNALSECONDCHAPTERSTRATEGY_TRYSHOWDEMONKINGCARDUIONBATTLEEND_OFFSET UNITYSDK_OFFSET(0xB93FA90)
#define RPG_CLIENT_EVOLVEBUILDEXTERNALSECONDCHAPTERSTRATEGY__CTOR_OFFSET UNITYSDK_OFFSET(0xB93FF00)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildExternalSecondChapterStrategy_TypeDefinitionIndex = 59752;

	class EvolveBuildExternalSecondChapterStrategy : public ::System::Object
	{
	public:
		::RPG::Client::IEvolveBuildFirstStageTutorialUnlockConfig* _TutorialUnlockConfig_k__BackingField; // 0x10
		::Class_1_7B0175BD08E75DE3* _Sorter; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDEXTERNALSECONDCHAPTERSTRATEGY__CTOR_OFFSET))(this);
		}

		::System::Void ShowUIOnBattleEnd(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDEXTERNALSECONDCHAPTERSTRATEGY_SHOWUIONBATTLEEND_OFFSET))(this, a1);
		}

		::RPG::Client::SortedEvolveBuildGearEquipInfoLists* GetSortedGearEquipInfo(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::RPG::Client::SortedEvolveBuildGearEquipInfoLists*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDEXTERNALSECONDCHAPTERSTRATEGY_GETSORTEDGEAREQUIPINFO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean TryShowDemonKingCardUIOnBattleEnd(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDEXTERNALSECONDCHAPTERSTRATEGY_TRYSHOWDEMONKINGCARDUIONBATTLEEND_OFFSET))(this, a1);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDEXTERNALSECONDCHAPTERSTRATEGY_GET_SEASON_OFFSET))(this);
		}

		::System::UInt32 get_OfferingID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDEXTERNALSECONDCHAPTERSTRATEGY_GET_OFFERINGID_OFFSET))(this);
		}

		::System::String* get_LoadingPagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDEXTERNALSECONDCHAPTERSTRATEGY_GET_LOADINGPAGEPATH_OFFSET))(this);
		}

		::System::String* get_ResultPagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDEXTERNALSECONDCHAPTERSTRATEGY_GET_RESULTPAGEPATH_OFFSET))(this);
		}

		::System::UInt32 get_WeaponInitialSkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDEXTERNALSECONDCHAPTERSTRATEGY_GET_WEAPONINITIALSKILLID_OFFSET))(this);
		}

		::System::UInt32 get_EndLessStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDEXTERNALSECONDCHAPTERSTRATEGY_GET_ENDLESSSTAGEID_OFFSET))(this);
		}

		::RPG::Client::IEvolveBuildFirstStageTutorialUnlockConfig* get_TutorialUnlockConfig()
		{
			return ((::RPG::Client::IEvolveBuildFirstStageTutorialUnlockConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDEXTERNALSECONDCHAPTERSTRATEGY_GET_TUTORIALUNLOCKCONFIG_OFFSET))(this);
		}

		::System::UInt32 get_NoRandomBonusNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDEXTERNALSECONDCHAPTERSTRATEGY_GET_NORANDOMBONUSNUM_OFFSET))(this);
		}
	};
}
