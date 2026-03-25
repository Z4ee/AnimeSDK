#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

class Class_1_C9DFE5EE7107C629_4;
namespace RPG::Client { class EvolveBuildModule; }
namespace RPG::Client { class EvolveBuildStageResultItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_CREATEFAKE_OFFSET UNITYSDK_OFFSET(0x9647DC0)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_CREATEFROMFINISHNOTIFY_OFFSET UNITYSDK_OFFSET(0x9647490)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_CREATE_OFFSET UNITYSDK_OFFSET(0x96470F0)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GETSCORENUM_OFFSET UNITYSDK_OFFSET(0x9647520)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GETTEAMDAMAGENUM_OFFSET UNITYSDK_OFFSET(0x9647AE0)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GETTITLE_OFFSET UNITYSDK_OFFSET(0x9647F20)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GETWEAPONDAMAGENUM_OFFSET UNITYSDK_OFFSET(0x96477F0)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GET_ISINTUTORIALSTAGE_OFFSET UNITYSDK_OFFSET(0x9648040)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x9648020)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x9648000)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GET__MODULE_OFFSET UNITYSDK_OFFSET(0x9647EC0)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_OPENPHASETREASUREUI_OFFSET UNITYSDK_OFFSET(0x9647E20)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0x9648030)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x9648010)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x9647480)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildStageResult_TypeDefinitionIndex = 51828;

	class EvolveBuildStageResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStageResultItem*>* _Items_k__BackingField; // 0x10
		::System::UInt32 _PeriodIndex; // 0x18
		::System::UInt32 _Score_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildStageResult* Create(::System::UInt32 score, ::System::UInt32 coinNum, ::System::UInt32 exp, ::RPG::GameCore::EvolveBuildSeason season, ::System::UInt32 stageID, ::System::UInt32 periodIndex)
		{
			return ((::RPG::Client::EvolveBuildStageResult*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::EvolveBuildSeason, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_CREATE_OFFSET))(score, coinNum, exp, season, stageID, periodIndex);
		}

		static ::RPG::Client::EvolveBuildStageResult* CreateFromFinishNotify(::Class_1_C9DFE5EE7107C629_4* levelInfo, ::RPG::GameCore::EvolveBuildSeason season, ::System::UInt32 stageID)
		{
			return ((::RPG::Client::EvolveBuildStageResult*(*)(::Class_1_C9DFE5EE7107C629_4*, ::RPG::GameCore::EvolveBuildSeason, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_CREATEFROMFINISHNOTIFY_OFFSET))(levelInfo, season, stageID);
		}

		static ::System::UInt32 GetWeaponDamageNum(::Class_1_C9DFE5EE7107C629_4* levelInfo)
		{
			return ((::System::UInt32(*)(::Class_1_C9DFE5EE7107C629_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GETWEAPONDAMAGENUM_OFFSET))(levelInfo);
		}

		static ::System::UInt32 GetTeamDamageNum(::Class_1_C9DFE5EE7107C629_4* levelInfo)
		{
			return ((::System::UInt32(*)(::Class_1_C9DFE5EE7107C629_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GETTEAMDAMAGENUM_OFFSET))(levelInfo);
		}

		static ::System::UInt32 GetScoreNum(::Class_1_C9DFE5EE7107C629_4* levelInfo)
		{
			return ((::System::UInt32(*)(::Class_1_C9DFE5EE7107C629_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GETSCORENUM_OFFSET))(levelInfo);
		}

		static ::RPG::Client::EvolveBuildStageResult* CreateFake()
		{
			return ((::RPG::Client::EvolveBuildStageResult*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_CREATEFAKE_OFFSET))();
		}

		::System::Void OpenPhaseTreasureUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_OPENPHASETREASUREUI_OFFSET))(this);
		}

		::RPG::Client::TextID GetTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GETTITLE_OFFSET))(this);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GET_SCORE_OFFSET))(this);
		}

		::System::Void set_Score(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_SET_SCORE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStageResultItem*>* get_Items()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStageResultItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GET_ITEMS_OFFSET))(this);
		}

		::System::Void set_Items(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStageResultItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStageResultItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_SET_ITEMS_OFFSET))(this, value);
		}

		::System::Boolean get_IsInTutorialStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GET_ISINTUTORIALSTAGE_OFFSET))(this);
		}

		::RPG::Client::EvolveBuildModule* get__Module()
		{
			return ((::RPG::Client::EvolveBuildModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GET__MODULE_OFFSET))(this);
		}
	};
}
