#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

class Class_1_3AD2528CD53B1639_4;
namespace RPG::Client { class EvolveBuildModule; }
namespace RPG::Client { class EvolveBuildStageResultItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_CREATEFAKE_OFFSET UNITYSDK_OFFSET(0x1B883510)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_CREATEFROMFINISHNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B882820)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_CREATE_OFFSET UNITYSDK_OFFSET(0x1B882370)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GETSCORENUM_OFFSET UNITYSDK_OFFSET(0x1B8828C0)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GETTEAMDAMAGENUM_OFFSET UNITYSDK_OFFSET(0x1B8830F0)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GETTITLE_OFFSET UNITYSDK_OFFSET(0x1B883720)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GETWEAPONDAMAGENUM_OFFSET UNITYSDK_OFFSET(0x1B882CC0)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GET_ISINTUTORIALSTAGE_OFFSET UNITYSDK_OFFSET(0x1B883850)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x1B883830)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x1B883810)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GET__MODULE_OFFSET UNITYSDK_OFFSET(0x1B883670)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_OPENPHASETREASUREUI_OFFSET UNITYSDK_OFFSET(0x1B883570)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0x1B883840)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x1B883820)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B882810)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildStageResult_TypeDefinitionIndex = 63844;

	class EvolveBuildStageResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStageResultItem*>* _Items_k__BackingField; // 0x10
		::System::UInt32 _Score_k__BackingField; // 0x18
		::System::UInt32 _PeriodIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildStageResult* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::EvolveBuildSeason a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::RPG::Client::EvolveBuildStageResult*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::EvolveBuildSeason, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::Client::EvolveBuildStageResult* CreateFromFinishNotify(::Class_1_3AD2528CD53B1639_4* a1, ::RPG::GameCore::EvolveBuildSeason a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::EvolveBuildStageResult*(*)(::Class_1_3AD2528CD53B1639_4*, ::RPG::GameCore::EvolveBuildSeason, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_CREATEFROMFINISHNOTIFY_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetWeaponDamageNum(::Class_1_3AD2528CD53B1639_4* a1)
		{
			return ((::System::UInt32(*)(::Class_1_3AD2528CD53B1639_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GETWEAPONDAMAGENUM_OFFSET))(a1);
		}

		static ::System::UInt32 GetTeamDamageNum(::Class_1_3AD2528CD53B1639_4* a1)
		{
			return ((::System::UInt32(*)(::Class_1_3AD2528CD53B1639_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GETTEAMDAMAGENUM_OFFSET))(a1);
		}

		static ::System::UInt32 GetScoreNum(::Class_1_3AD2528CD53B1639_4* a1)
		{
			return ((::System::UInt32(*)(::Class_1_3AD2528CD53B1639_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GETSCORENUM_OFFSET))(a1);
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

		::System::Void set_Score(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_SET_SCORE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStageResultItem*>* get_Items()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStageResultItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GET_ITEMS_OFFSET))(this);
		}

		::System::Void set_Items(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStageResultItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildStageResultItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_SET_ITEMS_OFFSET))(this, a1);
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
