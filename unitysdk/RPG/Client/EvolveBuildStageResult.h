#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

class Class_1_0F00B330391D7109;
namespace RPG::Client { class EvolveBuildModule; }
namespace RPG::Client { class EvolveBuildStageResultItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_CREATEFAKE_OFFSET UNITYSDK_OFFSET(0xB957D40)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_CREATEFROMFINISHNOTIFY_OFFSET UNITYSDK_OFFSET(0xB9573E0)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_CREATE_OFFSET UNITYSDK_OFFSET(0xB956F70)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GETSCORENUM_OFFSET UNITYSDK_OFFSET(0xB957470)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GETTEAMDAMAGENUM_OFFSET UNITYSDK_OFFSET(0xB957A50)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GETTITLE_OFFSET UNITYSDK_OFFSET(0xB957EA0)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GETWEAPONDAMAGENUM_OFFSET UNITYSDK_OFFSET(0xB957750)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GET_ISINTUTORIALSTAGE_OFFSET UNITYSDK_OFFSET(0xB957FD0)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0xB957FB0)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GET_SCORE_OFFSET UNITYSDK_OFFSET(0xB957F90)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xB957E40)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_OPENPHASETREASUREUI_OFFSET UNITYSDK_OFFSET(0xB957DA0)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0xB957FC0)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT_SET_SCORE_OFFSET UNITYSDK_OFFSET(0xB957FA0)
#define RPG_CLIENT_EVOLVEBUILDSTAGERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0xB9573D0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildStageResult_TypeDefinitionIndex = 59706;

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

		static ::RPG::Client::EvolveBuildStageResult* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::EvolveBuildSeason a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::RPG::Client::EvolveBuildStageResult*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::EvolveBuildSeason, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::Client::EvolveBuildStageResult* CreateFromFinishNotify(::Class_1_0F00B330391D7109* a1, ::RPG::GameCore::EvolveBuildSeason a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::EvolveBuildStageResult*(*)(::Class_1_0F00B330391D7109*, ::RPG::GameCore::EvolveBuildSeason, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_CREATEFROMFINISHNOTIFY_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 GetWeaponDamageNum(::Class_1_0F00B330391D7109* a1)
		{
			return ((::System::UInt32(*)(::Class_1_0F00B330391D7109*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GETWEAPONDAMAGENUM_OFFSET))(a1);
		}

		static ::System::UInt32 GetTeamDamageNum(::Class_1_0F00B330391D7109* a1)
		{
			return ((::System::UInt32(*)(::Class_1_0F00B330391D7109*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GETTEAMDAMAGENUM_OFFSET))(a1);
		}

		static ::System::UInt32 GetScoreNum(::Class_1_0F00B330391D7109* a1)
		{
			return ((::System::UInt32(*)(::Class_1_0F00B330391D7109*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDSTAGERESULT_GETSCORENUM_OFFSET))(a1);
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
