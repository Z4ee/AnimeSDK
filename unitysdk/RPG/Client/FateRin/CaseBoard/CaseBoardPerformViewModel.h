#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/BaseViewModel.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_C28E571CD1C66CE4;
class Class_3_866FEB8E1747AA26;
class Class_3_CDE976C9BD175E30;
class Class_3_CF97B0EA9108B481;
class Class_3_FB5A83386423B008;
namespace RPG::Client::FateRin { class ViewModelEventHandler; }
namespace RPG::Client::FateRin { template <typename T> class ViewModelEventHandler_1; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardMoveToGrailParams; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardMoveToTeamParams; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardSetupScaleParams; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardShowGrailParams; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardShowLineParams; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardShowRewardParams; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardShowTeamParams; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardSimpleTalkParams; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardTrackTeamParams; }
namespace RPG::Client::FateRin::CaseBoard { class GrailViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class TeamRelationViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class FateRinCaseBoardEffectInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_ADD_ONMOVETOGRAIL_OFFSET UNITYSDK_OFFSET(0x1CBF57B0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_ADD_ONMOVETOTEAM_OFFSET UNITYSDK_OFFSET(0x1CBF56F0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_ADD_ONPERFORMFINISHED_OFFSET UNITYSDK_OFFSET(0x1CBF5550)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_ADD_ONPERFORMSTART_OFFSET UNITYSDK_OFFSET(0x1CBF5490)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_ADD_ONSETUPSCALE_OFFSET UNITYSDK_OFFSET(0x1CBF5610)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_ADD_ONSHOWGRAIL_OFFSET UNITYSDK_OFFSET(0x1CBF5A10)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_ADD_ONSHOWLINE_OFFSET UNITYSDK_OFFSET(0x1CBF5AD0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_ADD_ONSHOWREWARD_OFFSET UNITYSDK_OFFSET(0x1CBF5B90)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_ADD_ONSHOWTEAM_OFFSET UNITYSDK_OFFSET(0x1CBF5890)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_ADD_ONSIMPLETALK_OFFSET UNITYSDK_OFFSET(0x1CBF5C70)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_ADD_ONTRACKTEAM_OFFSET UNITYSDK_OFFSET(0x1CBF5950)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_APPLYSTATICSTATE_OFFSET UNITYSDK_OFFSET(0x1CBF62B0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_CLEARPERFORM_OFFSET UNITYSDK_OFFSET(0x1CBF60C0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_GETCURRENTFORTASK_OFFSET UNITYSDK_OFFSET(0x1CBF5E30)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_GETGRAILFORTASK_OFFSET UNITYSDK_OFFSET(0x1CBF5EA0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_GET_ISPERFORMFINISHED_OFFSET UNITYSDK_OFFSET(0x1CBF5DC0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_GET_ISPERFORMING_OFFSET UNITYSDK_OFFSET(0x1CBF5D50)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_MOVETOGRAILCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1CBF67F0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_MOVETOGRAIL_OFFSET UNITYSDK_OFFSET(0x1CBF66B0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_MOVETOTEAMCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1CBF6660)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_MOVETOTEAM_OFFSET UNITYSDK_OFFSET(0x1CBF6530)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_REMOVE_ONMOVETOGRAIL_OFFSET UNITYSDK_OFFSET(0x1CBF5820)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_REMOVE_ONMOVETOTEAM_OFFSET UNITYSDK_OFFSET(0x1CBF5750)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_REMOVE_ONPERFORMFINISHED_OFFSET UNITYSDK_OFFSET(0x1CBF55B0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_REMOVE_ONPERFORMSTART_OFFSET UNITYSDK_OFFSET(0x1CBF54F0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_REMOVE_ONSETUPSCALE_OFFSET UNITYSDK_OFFSET(0x1CBF5680)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_REMOVE_ONSHOWGRAIL_OFFSET UNITYSDK_OFFSET(0x1CBF5A70)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_REMOVE_ONSHOWLINE_OFFSET UNITYSDK_OFFSET(0x1CBF5B30)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_REMOVE_ONSHOWREWARD_OFFSET UNITYSDK_OFFSET(0x1CBF5C00)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_REMOVE_ONSHOWTEAM_OFFSET UNITYSDK_OFFSET(0x1CBF58F0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_REMOVE_ONSIMPLETALK_OFFSET UNITYSDK_OFFSET(0x1CBF5CE0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_REMOVE_ONTRACKTEAM_OFFSET UNITYSDK_OFFSET(0x1CBF59B0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_SETUPSCALECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1CBF64D0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_SETUPSCALE_OFFSET UNITYSDK_OFFSET(0x1CBF6390)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_SHOWGRAILCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1CBF71C0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_SHOWGRAIL_OFFSET UNITYSDK_OFFSET(0x1CBF6EB0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_SHOWLINECOMPLETE_OFFSET UNITYSDK_OFFSET(0x1CBF7720)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_SHOWLINE_OFFSET UNITYSDK_OFFSET(0x1CBF7330)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_SHOWREWARDCOMPLETE_1_OFFSET UNITYSDK_OFFSET(0x1CBF7A70)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_SHOWREWARDCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1CBF79D0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_SHOWREWARD_OFFSET UNITYSDK_OFFSET(0x1CBF7890)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_SHOWTEAMCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1CBF6D70)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_SHOWTEAM_OFFSET UNITYSDK_OFFSET(0x1CBF6840)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_SIMPLETALK_OFFSET UNITYSDK_OFFSET(0x1CBF7AF0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_STARTPERFORM_OFFSET UNITYSDK_OFFSET(0x1CBF5EF0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_TRACKTEAM_OFFSET UNITYSDK_OFFSET(0x1CBF7220)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL__CLEARPENDINGPROMISES_OFFSET UNITYSDK_OFFSET(0x1CBF7C70)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL__CLEARPERFORM_OFFSET UNITYSDK_OFFSET(0x1CBF61D0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBF5320)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL__HASPENDINGPROMISE_OFFSET UNITYSDK_OFFSET(0x1CBF7E20)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL__HASWAITEFFECT_OFFSET UNITYSDK_OFFSET(0x1CBF6CE0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL__ISPENDING_OFFSET UNITYSDK_OFFSET(0x1CBF83F0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL__NOTIFYPERFORMFINISHED_OFFSET UNITYSDK_OFFSET(0x1CBF7DA0)
#define RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL__SIMPLETALK_B__60_0_OFFSET UNITYSDK_OFFSET(0x1CBF8440)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int CaseBoardPerformViewModel_TypeDefinitionIndex = 79477;

	class CaseBoardPerformViewModel : public ::RPG::Client::FateRin::BaseViewModel
	{
	public:
		::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardMoveToTeamParams*>* OnMoveToTeam; // 0x20
		::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardShowTeamParams*>* OnShowTeam; // 0x28
		::RPG::Client::FateRin::ViewModelEventHandler* OnPerformFinished; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::GameCore::FateRinCaseBoardTeamType, ::RPG::GameCore::FateRinCaseBoardTeamType>, ::RPG::Client::Promises::Promise*>* _ShowLinePromises; // 0x38
		::RPG::Client::Promises::Promise* _MoveToGrailPromise; // 0x40
		::RPG::Client::FateRin::ViewModelEventHandler* OnPerformStart; // 0x48
		::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardShowGrailParams*>* OnShowGrail; // 0x50
		::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardTrackTeamParams*>* OnTrackTeam; // 0x58
		::Class_1_C28E571CD1C66CE4* _State; // 0x60
		::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardShowLineParams*>* OnShowLine; // 0x68
		::RPG::Client::Promises::Promise* _SimpleTalkPromise; // 0x70
		::RPG::Client::Promises::Promise* _MoveToTeamPromise; // 0x78
		::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardSetupScaleParams*>* OnSetupScale; // 0x80
		::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardShowRewardParams*>* OnShowReward; // 0x88
		::RPG::Client::Promises::Promise* _ShowRewardPromise; // 0x90
		::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardSimpleTalkParams*>* OnSimpleTalk; // 0x98
		::RPG::GameCore::GameEntity* _LevelGraphEntity; // 0xA0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRinCaseBoardTeamType, ::RPG::Client::Promises::Promise*>* _ShowTeamPromises; // 0xA8
		::RPG::Client::Promises::Promise* _ShowGrailPromise; // 0xB0
		::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardMoveToGrailParams*>* OnMoveToGrail; // 0xB8
		::RPG::Client::Promises::Promise* _SetupScalePromise; // 0xC0
		::System::Boolean _IsStaticStateOnly; // 0xC8
		::System::Boolean _HasPerformFinishedNotified; // 0xC9
		::System::Boolean _HasPerformStarted; // 0xCA

		::System::Void _ctor(::Class_1_C28E571CD1C66CE4* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C28E571CD1C66CE4*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void add_OnPerformStart(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_ADD_ONPERFORMSTART_OFFSET))(this, a1);
		}

		::System::Void remove_OnPerformStart(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_REMOVE_ONPERFORMSTART_OFFSET))(this, a1);
		}

		::System::Void add_OnPerformFinished(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_ADD_ONPERFORMFINISHED_OFFSET))(this, a1);
		}

		::System::Void remove_OnPerformFinished(::RPG::Client::FateRin::ViewModelEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_REMOVE_ONPERFORMFINISHED_OFFSET))(this, a1);
		}

		::System::Void add_OnSetupScale(::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardSetupScaleParams*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardSetupScaleParams*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_ADD_ONSETUPSCALE_OFFSET))(this, a1);
		}

		::System::Void remove_OnSetupScale(::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardSetupScaleParams*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardSetupScaleParams*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_REMOVE_ONSETUPSCALE_OFFSET))(this, a1);
		}

		::System::Void add_OnMoveToTeam(::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardMoveToTeamParams*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardMoveToTeamParams*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_ADD_ONMOVETOTEAM_OFFSET))(this, a1);
		}

		::System::Void remove_OnMoveToTeam(::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardMoveToTeamParams*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardMoveToTeamParams*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_REMOVE_ONMOVETOTEAM_OFFSET))(this, a1);
		}

		::System::Void add_OnMoveToGrail(::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardMoveToGrailParams*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardMoveToGrailParams*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_ADD_ONMOVETOGRAIL_OFFSET))(this, a1);
		}

		::System::Void remove_OnMoveToGrail(::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardMoveToGrailParams*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardMoveToGrailParams*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_REMOVE_ONMOVETOGRAIL_OFFSET))(this, a1);
		}

		::System::Void add_OnShowTeam(::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardShowTeamParams*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardShowTeamParams*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_ADD_ONSHOWTEAM_OFFSET))(this, a1);
		}

		::System::Void remove_OnShowTeam(::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardShowTeamParams*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardShowTeamParams*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_REMOVE_ONSHOWTEAM_OFFSET))(this, a1);
		}

		::System::Void add_OnTrackTeam(::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardTrackTeamParams*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardTrackTeamParams*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_ADD_ONTRACKTEAM_OFFSET))(this, a1);
		}

		::System::Void remove_OnTrackTeam(::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardTrackTeamParams*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardTrackTeamParams*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_REMOVE_ONTRACKTEAM_OFFSET))(this, a1);
		}

		::System::Void add_OnShowGrail(::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardShowGrailParams*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardShowGrailParams*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_ADD_ONSHOWGRAIL_OFFSET))(this, a1);
		}

		::System::Void remove_OnShowGrail(::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardShowGrailParams*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardShowGrailParams*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_REMOVE_ONSHOWGRAIL_OFFSET))(this, a1);
		}

		::System::Void add_OnShowLine(::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardShowLineParams*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardShowLineParams*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_ADD_ONSHOWLINE_OFFSET))(this, a1);
		}

		::System::Void remove_OnShowLine(::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardShowLineParams*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardShowLineParams*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_REMOVE_ONSHOWLINE_OFFSET))(this, a1);
		}

		::System::Void add_OnShowReward(::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardShowRewardParams*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardShowRewardParams*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_ADD_ONSHOWREWARD_OFFSET))(this, a1);
		}

		::System::Void remove_OnShowReward(::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardShowRewardParams*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardShowRewardParams*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_REMOVE_ONSHOWREWARD_OFFSET))(this, a1);
		}

		::System::Void add_OnSimpleTalk(::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardSimpleTalkParams*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardSimpleTalkParams*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_ADD_ONSIMPLETALK_OFFSET))(this, a1);
		}

		::System::Void remove_OnSimpleTalk(::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardSimpleTalkParams*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::ViewModelEventHandler_1<::RPG::Client::FateRin::CaseBoard::CaseBoardSimpleTalkParams*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_REMOVE_ONSIMPLETALK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPerforming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_GET_ISPERFORMING_OFFSET))(this);
		}

		::System::Boolean get_IsPerformFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_GET_ISPERFORMFINISHED_OFFSET))(this);
		}

		static ::RPG::Client::FateRin::CaseBoard::CaseBoardPerformViewModel* GetCurrentForTask()
		{
			return ((::RPG::Client::FateRin::CaseBoard::CaseBoardPerformViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_GETCURRENTFORTASK_OFFSET))();
		}

		::RPG::Client::FateRin::CaseBoard::GrailViewModel* GetGrailForTask()
		{
			return ((::RPG::Client::FateRin::CaseBoard::GrailViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_GETGRAILFORTASK_OFFSET))(this);
		}

		::System::Void StartPerform(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_STARTPERFORM_OFFSET))(this, a1);
		}

		::System::Void ClearPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_CLEARPERFORM_OFFSET))(this);
		}

		::System::Void ApplyStaticState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_APPLYSTATICSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* SetupScale(::RPG::Client::FateRin::CaseBoard::CaseBoardSetupScaleParams* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardSetupScaleParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_SETUPSCALE_OFFSET))(this, a1);
		}

		::System::Void SetupScaleComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_SETUPSCALECOMPLETE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* MoveToTeam(::RPG::Client::FateRin::CaseBoard::CaseBoardMoveToTeamParams* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardMoveToTeamParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_MOVETOTEAM_OFFSET))(this, a1);
		}

		::System::Void MoveToTeamComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_MOVETOTEAMCOMPLETE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* MoveToGrail(::RPG::Client::FateRin::CaseBoard::CaseBoardMoveToGrailParams* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardMoveToGrailParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_MOVETOGRAIL_OFFSET))(this, a1);
		}

		::System::Void MoveToGrailComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_MOVETOGRAILCOMPLETE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* ShowTeam(::Class_3_CF97B0EA9108B481* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_3_CF97B0EA9108B481*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_SHOWTEAM_OFFSET))(this, a1);
		}

		::System::Void ShowTeamComplete(::RPG::GameCore::FateRinCaseBoardTeamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_SHOWTEAMCOMPLETE_OFFSET))(this, a1);
		}

		static ::System::Boolean _HasWaitEffect(::Il2CppArray<::RPG::GameCore::FateRinCaseBoardEffectInfo*>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::FateRinCaseBoardEffectInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL__HASWAITEFFECT_OFFSET))(a1);
		}

		::RPG::Client::Promises::IPromise* ShowGrail(::Class_3_CDE976C9BD175E30* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_3_CDE976C9BD175E30*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_SHOWGRAIL_OFFSET))(this, a1);
		}

		::System::Void ShowGrailComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_SHOWGRAILCOMPLETE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* TrackTeam(::Class_3_866FEB8E1747AA26* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_3_866FEB8E1747AA26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_TRACKTEAM_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* ShowLine(::Class_3_FB5A83386423B008* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_3_FB5A83386423B008*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_SHOWLINE_OFFSET))(this, a1);
		}

		::System::Void ShowLineComplete(::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::TeamRelationViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_SHOWLINECOMPLETE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* ShowReward(::RPG::Client::FateRin::CaseBoard::CaseBoardShowRewardParams* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardShowRewardParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_SHOWREWARD_OFFSET))(this, a1);
		}

		::System::Void ShowRewardComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_SHOWREWARDCOMPLETE_OFFSET))(this);
		}

		::System::Void ShowRewardComplete_1(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_SHOWREWARDCOMPLETE_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* SimpleTalk(::RPG::Client::FateRin::CaseBoard::CaseBoardSimpleTalkParams* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::CaseBoardSimpleTalkParams*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL_SIMPLETALK_OFFSET))(this, a1);
		}

		::System::Void _ClearPerform(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL__CLEARPERFORM_OFFSET))(this, a1);
		}

		::System::Void _NotifyPerformFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL__NOTIFYPERFORMFINISHED_OFFSET))(this);
		}

		::System::Boolean _HasPendingPromise()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL__HASPENDINGPROMISE_OFFSET))(this);
		}

		static ::System::Boolean _IsPending(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL__ISPENDING_OFFSET))(a1);
		}

		::System::Void _ClearPendingPromises()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL__CLEARPENDINGPROMISES_OFFSET))(this);
		}

		::System::Void _SimpleTalk_b__60_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_CASEBOARDPERFORMVIEWMODEL__SIMPLETALK_B__60_0_OFFSET))(this);
		}
	};
}
