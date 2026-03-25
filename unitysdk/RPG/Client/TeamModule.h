#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_3.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_11.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TeamModule_IndexKey.h"
#include "unitysdk/RPG/Client/TeamModule_TeleportState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_14E02E1F6D70E487_2;
namespace RPG::Client { class AssistData; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class ITeamBuildCalculator; }
namespace RPG::Client { class TeamData; }
namespace RPG::Client { class TeamDataRefreshParam; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMMODULE_ADDEXTRASKILLMPCOST_OFFSET UNITYSDK_OFFSET(0xA577C00)
#define RPG_CLIENT_TEAMMODULE_CHANGELINEUPLEADER_OFFSET UNITYSDK_OFFSET(0xA571B20)
#define RPG_CLIENT_TEAMMODULE_CHECKTEAMASSOCIATIONUNLOCK_OFFSET UNITYSDK_OFFSET(0xA57D160)
#define RPG_CLIENT_TEAMMODULE_CHECKTEAMLIMITCONDITIONBYAVATARLIST_OFFSET UNITYSDK_OFFSET(0xA57B860)
#define RPG_CLIENT_TEAMMODULE_CHECKTEAMLIMITCONDITION_OFFSET UNITYSDK_OFFSET(0xA57BD50)
#define RPG_CLIENT_TEAMMODULE_CLEARALLPRECOSTMP_OFFSET UNITYSDK_OFFSET(0xA5774C0)
#define RPG_CLIENT_TEAMMODULE_CLEARLINEUPAVATARDATASNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA578D10)
#define RPG_CLIENT_TEAMMODULE_CLONETEAMDATAFROMEXTRALINEUP_OFFSET UNITYSDK_OFFSET(0xA57CC10)
#define RPG_CLIENT_TEAMMODULE_CREATELOCALEDITTEAM_OFFSET UNITYSDK_OFFSET(0xA578FA0)
#define RPG_CLIENT_TEAMMODULE_DESTROYLOCALEDITTEAM_OFFSET UNITYSDK_OFFSET(0xA5791D0)
#define RPG_CLIENT_TEAMMODULE_GETALLTRAILAVATARS_OFFSET UNITYSDK_OFFSET(0xA57B240)
#define RPG_CLIENT_TEAMMODULE_GETAVATARHPPERCENT_1_OFFSET UNITYSDK_OFFSET(0xA57B0E0)
#define RPG_CLIENT_TEAMMODULE_GETAVATARHPPERCENT_OFFSET UNITYSDK_OFFSET(0xA57B020)
#define RPG_CLIENT_TEAMMODULE_GETCLIENTONLYTEAM_OFFSET UNITYSDK_OFFSET(0xA5776D0)
#define RPG_CLIENT_TEAMMODULE_GETCURRENTEDITTEAM_OFFSET UNITYSDK_OFFSET(0xA578E70)
#define RPG_CLIENT_TEAMMODULE_GETCURRENTTEAM_OFFSET UNITYSDK_OFFSET(0xA578F40)
#define RPG_CLIENT_TEAMMODULE_GETEXTRASKILLMPCOST_OFFSET UNITYSDK_OFFSET(0xA577DC0)
#define RPG_CLIENT_TEAMMODULE_GETEXTRATEAM_OFFSET UNITYSDK_OFFSET(0xA578410)
#define RPG_CLIENT_TEAMMODULE_GETLINEUPAVATARSNAPSHOTHPPERCENT_OFFSET UNITYSDK_OFFSET(0xA578DB0)
#define RPG_CLIENT_TEAMMODULE_GETMAINLINETEAM_OFFSET UNITYSDK_OFFSET(0xA5777A0)
#define RPG_CLIENT_TEAMMODULE_GETPRECOSTMP_OFFSET UNITYSDK_OFFSET(0xA577B50)
#define RPG_CLIENT_TEAMMODULE_GETSTORYLINETEAM_OFFSET UNITYSDK_OFFSET(0xA577910)
#define RPG_CLIENT_TEAMMODULE_GETTEAMLIMITDESC_OFFSET UNITYSDK_OFFSET(0xA57C520)
#define RPG_CLIENT_TEAMMODULE_GETTEAMLIMITHINTPARAM_OFFSET UNITYSDK_OFFSET(0xA57BF90)
#define RPG_CLIENT_TEAMMODULE_GETTEAMLIMITTOAST_OFFSET UNITYSDK_OFFSET(0xA57C8D0)
#define RPG_CLIENT_TEAMMODULE_GETVIRTUALTEAM_OFFSET UNITYSDK_OFFSET(0xA5775F0)
#define RPG_CLIENT_TEAMMODULE_GET_CURRENTMAINLINETEAMINDEX_OFFSET UNITYSDK_OFFSET(0xA57EDE0)
#define RPG_CLIENT_TEAMMODULE_GET_ISCLIENTONLY_OFFSET UNITYSDK_OFFSET(0xA582E40)
#define RPG_CLIENT_TEAMMODULE_GET_ISCUREDITLOCALTEAM_OFFSET UNITYSDK_OFFSET(0xA582D70)
#define RPG_CLIENT_TEAMMODULE_GET_ISCURSHOWLOCALTEAM_OFFSET UNITYSDK_OFFSET(0xA582DD0)
#define RPG_CLIENT_TEAMMODULE_GET_ISEXISTLOCALEDITTEAM_OFFSET UNITYSDK_OFFSET(0xA582D60)
#define RPG_CLIENT_TEAMMODULE_GET_MAINLINETEAMCOUNT_OFFSET UNITYSDK_OFFSET(0xA57EDF0)
#define RPG_CLIENT_TEAMMODULE_GET_TEAMASSOCIATIONUNLOCKID_OFFSET UNITYSDK_OFFSET(0xA583080)
#define RPG_CLIENT_TEAMMODULE_GET_TEAMBUILDCALCULATOR_OFFSET UNITYSDK_OFFSET(0xA582FF0)
#define RPG_CLIENT_TEAMMODULE_ISAVATARALIVE_OFFSET UNITYSDK_OFFSET(0xA57B1E0)
#define RPG_CLIENT_TEAMMODULE_ISCANCHANGELINEUPLEADER_OFFSET UNITYSDK_OFFSET(0xA57CEC0)
#define RPG_CLIENT_TEAMMODULE_ISCURRENTTEAM_OFFSET UNITYSDK_OFFSET(0xA57F510)
#define RPG_CLIENT_TEAMMODULE_JOINMEMBERTOTEAMBYAVATAR_OFFSET UNITYSDK_OFFSET(0xA579DB0)
#define RPG_CLIENT_TEAMMODULE_JOINMEMBERTOTEAM_OFFSET UNITYSDK_OFFSET(0xA579250)
#define RPG_CLIENT_TEAMMODULE_ONPROJECTILEDISPOSEWITHOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA5783C0)
#define RPG_CLIENT_TEAMMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA577450)
#define RPG_CLIENT_TEAMMODULE_ONSKILLCASTRESULTSERVERRESPOND_OFFSET UNITYSDK_OFFSET(0xA577F40)
#define RPG_CLIENT_TEAMMODULE_ONSKILLSYNCTOSERVER_OFFSET UNITYSDK_OFFSET(0xA577BA0)
#define RPG_CLIENT_TEAMMODULE_PAUSETEAMDATAREFRESH_OFFSET UNITYSDK_OFFSET(0xA580670)
#define RPG_CLIENT_TEAMMODULE_PRECOSTMPINCLIENT_OFFSET UNITYSDK_OFFSET(0xA578150)
#define RPG_CLIENT_TEAMMODULE_QUITMEMBERFROMTEAM_OFFSET UNITYSDK_OFFSET(0xA579F90)
#define RPG_CLIENT_TEAMMODULE_REFRESHCURLINEUPDATA_OFFSET UNITYSDK_OFFSET(0xA577A60)
#define RPG_CLIENT_TEAMMODULE_REFRESHLINEUP_OFFSET UNITYSDK_OFFSET(0xA57F560)
#define RPG_CLIENT_TEAMMODULE_REMOVEEXTRASKILLMPCOST_OFFSET UNITYSDK_OFFSET(0xA577CF0)
#define RPG_CLIENT_TEAMMODULE_RESUMETEAMDATAREFRESH_OFFSET UNITYSDK_OFFSET(0xA580DA0)
#define RPG_CLIENT_TEAMMODULE_SAVELINEUPAVATARDATASNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA578B50)
#define RPG_CLIENT_TEAMMODULE_SETTEAMINDEX_OFFSET UNITYSDK_OFFSET(0xA57AE80)
#define RPG_CLIENT_TEAMMODULE_SETTEAMMEMBER_OFFSET UNITYSDK_OFFSET(0xA57A3B0)
#define RPG_CLIENT_TEAMMODULE_SETTEAMNAME_OFFSET UNITYSDK_OFFSET(0xA57AF60)
#define RPG_CLIENT_TEAMMODULE_SET_ISCLIENTONLY_OFFSET UNITYSDK_OFFSET(0xA582E50)
#define RPG_CLIENT_TEAMMODULE_SET_ISCURSHOWLOCALTEAM_OFFSET UNITYSDK_OFFSET(0xA582DE0)
#define RPG_CLIENT_TEAMMODULE_SKILLFINISHTRYREVERTPRECOSTMP_OFFSET UNITYSDK_OFFSET(0xA578360)
#define RPG_CLIENT_TEAMMODULE_SWAPMEMBERSLOTINTEAM_OFFSET UNITYSDK_OFFSET(0xA57A740)
#define RPG_CLIENT_TEAMMODULE_SWITCHCURRENTEDITTEAM_OFFSET UNITYSDK_OFFSET(0xA5788A0)
#define RPG_CLIENT_TEAMMODULE_SWITCHCURRENTTEAM_OFFSET UNITYSDK_OFFSET(0xA578920)
#define RPG_CLIENT_TEAMMODULE_TRYCONSUMEMAPTELEPORT_OFFSET UNITYSDK_OFFSET(0xA56B3E0)
#define RPG_CLIENT_TEAMMODULE_USEMAINCHARACTERONLYTEAM_OFFSET UNITYSDK_OFFSET(0xA5785E0)
#define RPG_CLIENT_TEAMMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA57D510)
#define RPG_CLIENT_TEAMMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA57D1B0)
#define RPG_CLIENT_TEAMMODULE__ADDSKILLPRECOSTVALUE_OFFSET UNITYSDK_OFFSET(0xA5782B0)
#define RPG_CLIENT_TEAMMODULE__CHECKCONTAINANYHEROAVATAR_OFFSET UNITYSDK_OFFSET(0xA582600)
#define RPG_CLIENT_TEAMMODULE__CHECKCONTAINMULTIPATHAVATAR_OFFSET UNITYSDK_OFFSET(0xA5827A0)
#define RPG_CLIENT_TEAMMODULE__CHECKTEAMAVATARCOUNT_OFFSET UNITYSDK_OFFSET(0xA5823E0)
#define RPG_CLIENT_TEAMMODULE__CHECKTEAMLEVEL_OFFSET UNITYSDK_OFFSET(0xA5820C0)
#define RPG_CLIENT_TEAMMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA5771B0)
#define RPG_CLIENT_TEAMMODULE__DETECTCHARACTERHPREFRESH_OFFSET UNITYSDK_OFFSET(0xA581430)
#define RPG_CLIENT_TEAMMODULE__DETECTMAZESKILLMPREFRESH_OFFSET UNITYSDK_OFFSET(0xA5811B0)
#define RPG_CLIENT_TEAMMODULE__DIFFTEAMDATAANDNOTIFY_OFFSET UNITYSDK_OFFSET(0xA57F090)
#define RPG_CLIENT_TEAMMODULE__DODESTORYVIRTUALLINEUP_OFFSET UNITYSDK_OFFSET(0xA57E4C0)
#define RPG_CLIENT_TEAMMODULE__GETCANDIDATEMEMBERS_OFFSET UNITYSDK_OFFSET(0xA581A10)
#define RPG_CLIENT_TEAMMODULE__GETLACKINGMEMBERS_OFFSET UNITYSDK_OFFSET(0xA581CB0)
#define RPG_CLIENT_TEAMMODULE__GETLEADERSLOTAFTERREPLACE_OFFSET UNITYSDK_OFFSET(0xA57AC40)
#define RPG_CLIENT_TEAMMODULE__GETTEAMDATA_OFFSET UNITYSDK_OFFSET(0xA57FC90)
#define RPG_CLIENT_TEAMMODULE__ISCURRENTTEAM_OFFSET UNITYSDK_OFFSET(0xA57F480)
#define RPG_CLIENT_TEAMMODULE__ISTEAMCONTAINAVATAR_OFFSET UNITYSDK_OFFSET(0xA581F50)
#define RPG_CLIENT_TEAMMODULE__JOINMEMBERTOLOCALEDITTEAM_OFFSET UNITYSDK_OFFSET(0xA5794E0)
#define RPG_CLIENT_TEAMMODULE__JOINMEMBERTOPRESETTEAM_OFFSET UNITYSDK_OFFSET(0xA579860)
#define RPG_CLIENT_TEAMMODULE__JOINMEMBERTOTEAMDEFAULT_OFFSET UNITYSDK_OFFSET(0xA579B50)
#define RPG_CLIENT_TEAMMODULE__JOINVACANTSLOTWITHEXTRAAVATARS_OFFSET UNITYSDK_OFFSET(0xA57EE40)
#define RPG_CLIENT_TEAMMODULE__ONADVENTUREPHASEPOPUPFINISH_OFFSET UNITYSDK_OFFSET(0xA582C50)
#define RPG_CLIENT_TEAMMODULE__ONCMDCHANGELINEUPLEADERSCRSP_OFFSET UNITYSDK_OFFSET(0xA57E150)
#define RPG_CLIENT_TEAMMODULE__ONCMDEXTRALINEUPDESTROYNOTIFY_OFFSET UNITYSDK_OFFSET(0xA57E890)
#define RPG_CLIENT_TEAMMODULE__ONCMDGETALLLINEUPDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA57D8F0)
#define RPG_CLIENT_TEAMMODULE__ONCMDGETCURLINEUPDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA57DB00)
#define RPG_CLIENT_TEAMMODULE__ONCMDGETLINEUPAVATARDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA57DFE0)
#define RPG_CLIENT_TEAMMODULE__ONCMDJOINLINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xA57DD90)
#define RPG_CLIENT_TEAMMODULE__ONCMDQUITLINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xA57DE10)
#define RPG_CLIENT_TEAMMODULE__ONCMDREPLACELINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xA57DF10)
#define RPG_CLIENT_TEAMMODULE__ONCMDSETLINEUPNAMESCRSP_OFFSET UNITYSDK_OFFSET(0xA57EA20)
#define RPG_CLIENT_TEAMMODULE__ONCMDSWAPLINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xA57DE90)
#define RPG_CLIENT_TEAMMODULE__ONCMDSWITCHLINEUPINDEXSCRSP_OFFSET UNITYSDK_OFFSET(0xA57E990)
#define RPG_CLIENT_TEAMMODULE__ONCMDSYNCLINEUPNOTIFY_OFFSET UNITYSDK_OFFSET(0xA57DBA0)
#define RPG_CLIENT_TEAMMODULE__ONCMDSYNCSERVERSCENECHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0xA580550)
#define RPG_CLIENT_TEAMMODULE__ONCMDVIRTUALLINEUPDESTROYNOTIFY_OFFSET UNITYSDK_OFFSET(0xA57E420)
#define RPG_CLIENT_TEAMMODULE__ONCMDVIRTUALLINEUPTRIALAVATARCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA580740)
#define RPG_CLIENT_TEAMMODULE__ONMAPCREATED_OFFSET UNITYSDK_OFFSET(0xA582920)
#define RPG_CLIENT_TEAMMODULE__ONMAPREFRESHAFTERRELOGIN_OFFSET UNITYSDK_OFFSET(0xA57ED90)
#define RPG_CLIENT_TEAMMODULE__ONMAZETOBATTLETRANSITION_OFFSET UNITYSDK_OFFSET(0xA582B00)
#define RPG_CLIENT_TEAMMODULE__ONPLAYERMAPTELEPORT_OFFSET UNITYSDK_OFFSET(0xA57EC70)
#define RPG_CLIENT_TEAMMODULE__ONPLAYERMPTELEPORTNOSWITCHINWHITE_OFFSET UNITYSDK_OFFSET(0xA57ED40)
#define RPG_CLIENT_TEAMMODULE__ONPLAYERMPTELEPORTNOSWITCHIN_OFFSET UNITYSDK_OFFSET(0xA57ECF0)
#define RPG_CLIENT_TEAMMODULE__ONSTORYMODECHANGE_OFFSET UNITYSDK_OFFSET(0xA582A80)
#define RPG_CLIENT_TEAMMODULE__PROCESSTEAMSNAPSHOTDATACHANGE_OFFSET UNITYSDK_OFFSET(0xA580FC0)
#define RPG_CLIENT_TEAMMODULE__REMOVESKILLPRECOSTVALUE_OFFSET UNITYSDK_OFFSET(0xA577FD0)
#define RPG_CLIENT_TEAMMODULE__REPORTCURRENTMPMAXCHANGE_OFFSET UNITYSDK_OFFSET(0xA57FD50)
#define RPG_CLIENT_TEAMMODULE__RESUMETEAMDATAREFRESH_B__90_0_OFFSET UNITYSDK_OFFSET(0xA5831A0)
#define RPG_CLIENT_TEAMMODULE__REVERTPRECOSTMP_OFFSET UNITYSDK_OFFSET(0xA578090)
#define RPG_CLIENT_TEAMMODULE__SHOULDMERGEDESTROYINGTEAM_OFFSET UNITYSDK_OFFSET(0xA57E790)
#define RPG_CLIENT_TEAMMODULE__SWITCHCURRENTTEAM_OFFSET UNITYSDK_OFFSET(0xA57EF50)
#define RPG_CLIENT_TEAMMODULE__UPDATETEAMDATA_OFFSET UNITYSDK_OFFSET(0xA57FF60)
#define RPG_CLIENT_TEAMMODULE__WILLBEEMPTYAFTERQUIT_OFFSET UNITYSDK_OFFSET(0xA582CA0)
#define RPG_CLIENT_TEAMMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA583270)
#define RPG_CLIENT_TEAMMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA583330)
#define RPG_CLIENT_TEAMMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA5832D0)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamModule_TypeDefinitionIndex = 55614;

	class TeamModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::Int32 _MAX_TEAM_MEMBER = 0x4; // 0x0
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::UInt32>* _SkillExtraCostMpValueDict; // 0x10
		::RPG::Client::ITeamBuildCalculator* _TeamBuildCalculator; // 0x18
		::System::Collections::Generic::Dictionary_2<::Enum_3_63C076C405BE0674_3, ::RPG::Client::TeamData*>* _ExtraTeams; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _LocalTeamTrialAvatarIDs; // 0x28
		::System::Collections::Generic::List_1<::Enum_3_71AA90D596A09AC8_11>* _RecentLineupReasons; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* _SkillPreCostMpValue; // 0x38
		::RPG::Client::TeamData* _CurrentTeam; // 0x40
		::RPG::Client::TeamData* _VirtualTeamData; // 0x48
		::RPG::Client::TeamData* _LocalEditTeam; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::TeamData*>* _MainlineTeams; // 0x58
		::RPG::Client::TeamData* _ClientOnlyTeamData; // 0x60
		::System::Collections::Generic::Dictionary_2<::RPG::Client::TeamModule_IndexKey, ::System::UInt32>* _LineupAvatarHPs; // 0x68
		::RPG::Client::TeamData* _CurrentEditTeam; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::TeamData*>* _StoryLineTeams; // 0x78
		::System::Collections::Generic::Dictionary_2<::RPG::Client::TeamModule_IndexKey, ::System::UInt32>* _LineupAvatarDatasSnapShot; // 0x80
		::RPG::Client::Promises::Promise* _GetCurLineupDataPromise; // 0x88
		::RPG::Client::TeamModule_TeleportState _TeleportState; // 0x90
		::System::UInt32 _CurrentMainlineTeamIndex; // 0x94
		::System::Nullable_1<::System::UInt32> _TeamAssociationUnlockID; // 0x98
		::System::UInt32 _CurMpCostSkillUseID; // 0xA0
		::RPG::GameCore::FixPoint _LastNotifyMaxMPUpdate; // 0xA8
		::RPG::GameCore::FixPoint _PreCostMpTotal; // 0xB0
		::System::Boolean _IsClientOnly; // 0xB8
		::System::Boolean _IsCurShowLocalTeam; // 0xB9
		::System::Boolean _IsPauseTeamDataRefresh; // 0xBA
		::System::Boolean _TeamDataRefreshAfterLoading; // 0xBB

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__CTOR_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_ONRECONNECT_OFFSET))(this);
		}

		::RPG::Client::TeamData* GetVirtualTeam()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETVIRTUALTEAM_OFFSET))(this);
		}

		::RPG::Client::TeamData* GetClientOnlyTeam()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETCLIENTONLYTEAM_OFFSET))(this);
		}

		::RPG::Client::TeamData* GetMainlineTeam(::System::UInt32 index)
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETMAINLINETEAM_OFFSET))(this, index);
		}

		::RPG::Client::TeamData* GetStoryLineTeam(::System::UInt32 storyLineID)
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETSTORYLINETEAM_OFFSET))(this, storyLineID);
		}

		::RPG::Client::Promises::Promise* RefreshCurLineUpData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_REFRESHCURLINEUPDATA_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetPreCostMp()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETPRECOSTMP_OFFSET))(this);
		}

		::System::Void OnSkillSyncToServer(::System::UInt32 skillUseID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_ONSKILLSYNCTOSERVER_OFFSET))(this, skillUseID);
		}

		::System::Void ClearAllPreCostMp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_CLEARALLPRECOSTMP_OFFSET))(this);
		}

		::System::Void AddExtraSkillMpCost(::System::UInt32 skillExcelIndex, ::System::UInt32 extraCost)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_ADDEXTRASKILLMPCOST_OFFSET))(this, skillExcelIndex, extraCost);
		}

		::System::Void RemoveExtraSkillMpCost(::System::UInt32 skillExcelIndex, ::System::UInt32 extraCost)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_REMOVEEXTRASKILLMPCOST_OFFSET))(this, skillExcelIndex, extraCost);
		}

		::System::UInt32 GetExtraSkillMpCost(::System::UInt32 skillExcelIndex)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETEXTRASKILLMPCOST_OFFSET))(this, skillExcelIndex);
		}

		::System::Void OnSkillCastResultServerRespond(::System::Boolean result, ::System::UInt32 skillUseID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_ONSKILLCASTRESULTSERVERRESPOND_OFFSET))(this, result, skillUseID);
		}

		::System::Void PreCostMpInClient(::RPG::GameCore::FixPoint mpCost, ::System::UInt32 skillUseID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_PRECOSTMPINCLIENT_OFFSET))(this, mpCost, skillUseID);
		}

		::System::Void SkillFinishTryRevertPreCostMp(::System::UInt32 skillUseID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_SKILLFINISHTRYREVERTPRECOSTMP_OFFSET))(this, skillUseID);
		}

		::System::Void OnProjectileDisposeWithOutCallback(::System::UInt32 skillUseID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_ONPROJECTILEDISPOSEWITHOUTCALLBACK_OFFSET))(this, skillUseID);
		}

		::System::Void _RevertPreCostMp(::System::UInt32 skillUseID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__REVERTPRECOSTMP_OFFSET))(this, skillUseID);
		}

		::System::Void _AddSkillPreCostValue(::System::UInt32 skillUseID, ::RPG::GameCore::FixPoint mpCost)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ADDSKILLPRECOSTVALUE_OFFSET))(this, skillUseID, mpCost);
		}

		::System::Void _RemoveSkillPreCostValue(::System::UInt32 skillUseID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__REMOVESKILLPRECOSTVALUE_OFFSET))(this, skillUseID);
		}

		::RPG::Client::TeamData* GetExtraTeam(::Enum_3_63C076C405BE0674_3 extraLineupType)
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID, ::Enum_3_63C076C405BE0674_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETEXTRATEAM_OFFSET))(this, extraLineupType);
		}

		::System::Void UseMainCharacterOnlyTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_USEMAINCHARACTERONLYTEAM_OFFSET))(this);
		}

		::System::Void SwitchCurrentEditTeam(::Enum_3_63C076C405BE0674_3 extraLineupType, ::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_3, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_SWITCHCURRENTEDITTEAM_OFFSET))(this, extraLineupType, index);
		}

		::System::Void SwitchCurrentTeam(::Enum_3_63C076C405BE0674_3 extraLineupType, ::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_3, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_SWITCHCURRENTTEAM_OFFSET))(this, extraLineupType, index);
		}

		::System::Void SaveLineupAvatarDataSnapShot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_SAVELINEUPAVATARDATASNAPSHOT_OFFSET))(this);
		}

		::System::Void ClearLineupAvatarDataSnapShot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_CLEARLINEUPAVATARDATASNAPSHOT_OFFSET))(this);
		}

		::System::Single GetLineupAvatarSnapShotHpPercent(::Enum_3_A35B38E5F9115A76 avatarType, ::System::UInt32 ID)
		{
			return ((::System::Single(*)(::PVOID, ::Enum_3_A35B38E5F9115A76, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETLINEUPAVATARSNAPSHOTHPPERCENT_OFFSET))(this, avatarType, ID);
		}

		::RPG::Client::TeamData* GetCurrentEditTeam()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETCURRENTEDITTEAM_OFFSET))(this);
		}

		::RPG::Client::TeamData* GetCurrentTeam()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETCURRENTTEAM_OFFSET))(this);
		}

		::System::Void CreateLocalEditTeam(::System::Collections::Generic::List_1<::System::UInt32>* trialAvatarIDs, ::System::Boolean isCreateTeamData, ::Enum_3_63C076C405BE0674_3 lineupType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::Enum_3_63C076C405BE0674_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_CREATELOCALEDITTEAM_OFFSET))(this, trialAvatarIDs, isCreateTeamData, lineupType);
		}

		::System::Void DestroyLocalEditTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_DESTROYLOCALEDITTEAM_OFFSET))(this);
		}

		::System::Void JoinMemberToTeam(::RPG::Client::TeamData* teamData, ::System::UInt32 avatarID, ::System::UInt32 slot)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_JOINMEMBERTOTEAM_OFFSET))(this, teamData, avatarID, slot);
		}

		::System::Void JoinMemberToTeamByAvatar(::RPG::Client::TeamData* teamData, ::RPG::Client::IAvatarInfoProvider* avatar, ::System::UInt32 slot, ::RPG::Client::AssistData* assistData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::RPG::Client::IAvatarInfoProvider*, ::System::UInt32, ::RPG::Client::AssistData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_JOINMEMBERTOTEAMBYAVATAR_OFFSET))(this, teamData, avatar, slot, assistData);
		}

		::System::Void QuitMemberFromTeam(::RPG::Client::TeamData* teamData, ::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_QUITMEMBERFROMTEAM_OFFSET))(this, teamData, avatarID);
		}

		::System::Void SwapMemberSlotInTeam(::RPG::Client::TeamData* teamData, ::System::UInt32 srcSlot, ::System::UInt32 dstSlot)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_SWAPMEMBERSLOTINTEAM_OFFSET))(this, teamData, srcSlot, dstSlot);
		}

		::System::Void SetTeamMember(::RPG::Client::TeamData* teamData, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* avatars, ::RPG::Client::AssistData* assistData, ::System::Boolean isFromRecommend)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*, ::RPG::Client::AssistData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_SETTEAMMEMBER_OFFSET))(this, teamData, avatars, assistData, isFromRecommend);
		}

		::System::Void ChangeLineupLeader(::System::UInt32 slot)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_CHANGELINEUPLEADER_OFFSET))(this, slot);
		}

		::System::Void SetTeamIndex(::System::UInt32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_SETTEAMINDEX_OFFSET))(this, index);
		}

		::System::Void SetTeamName(::System::UInt32 index, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_SETTEAMNAME_OFFSET))(this, index, name);
		}

		::System::Single GetAvatarHpPercent(::Enum_3_A35B38E5F9115A76 avatarType, ::System::UInt32 ID)
		{
			return ((::System::Single(*)(::PVOID, ::Enum_3_A35B38E5F9115A76, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETAVATARHPPERCENT_OFFSET))(this, avatarType, ID);
		}

		::System::Single GetAvatarHpPercent_1(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETAVATARHPPERCENT_1_OFFSET))(this, avatar);
		}

		::System::Boolean IsAvatarAlive(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_ISAVATARALIVE_OFFSET))(this, avatar);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetAllTrailAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETALLTRAILAVATARS_OFFSET))(this);
		}

		::System::Boolean TryConsumeMapTeleport(::System::Boolean bCrossMap, ::RPG::Client::TeamModule_TeleportState& consumedTeleportState)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::RPG::Client::TeamModule_TeleportState&))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_TRYCONSUMEMAPTELEPORT_OFFSET))(this, bCrossMap, consumedTeleportState);
		}

		::System::Boolean CheckTeamLimitConditionByAvatarList(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* avatarList, ::System::UInt32 teamLimitID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_CHECKTEAMLIMITCONDITIONBYAVATARLIST_OFFSET))(this, avatarList, teamLimitID);
		}

		::System::Boolean CheckTeamLimitCondition(::RPG::Client::TeamData* teamData, ::System::UInt32 teamLimitID)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_CHECKTEAMLIMITCONDITION_OFFSET))(this, teamData, teamLimitID);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetTeamLimitHintParam(::System::UInt32 teamLimitID)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETTEAMLIMITHINTPARAM_OFFSET))(this, teamLimitID);
		}

		::System::String* GetTeamLimitDesc(::System::UInt32 teamLimitID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETTEAMLIMITDESC_OFFSET))(this, teamLimitID);
		}

		::System::String* GetTeamLimitToast(::System::UInt32 teamLimitID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GETTEAMLIMITTOAST_OFFSET))(this, teamLimitID);
		}

		::RPG::Client::TeamData* CloneTeamDataFromExtraLineup(::Enum_3_63C076C405BE0674_3 extraLineupType)
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID, ::Enum_3_63C076C405BE0674_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_CLONETEAMDATAFROMEXTRALINEUP_OFFSET))(this, extraLineupType);
		}

		::System::Boolean IsCanChangeLineupLeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_ISCANCHANGELINEUPLEADER_OFFSET))(this);
		}

		::System::Boolean CheckTeamAssociationUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_CHECKTEAMASSOCIATIONUNLOCK_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetAllLineupDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDGETALLLINEUPDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetCurLineupDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDGETCURLINEUPDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSyncLineupNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDSYNCLINEUPNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdJoinLineupScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDJOINLINEUPSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdQuitLineupScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDQUITLINEUPSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSwapLineupScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDSWAPLINEUPSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdReplaceLineupScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDREPLACELINEUPSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetLineupAvatarDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDGETLINEUPAVATARDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChangeLineupLeaderScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDCHANGELINEUPLEADERSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdVirtualLineupDestroyNotify(::System::UInt16 cmd, ::System::Object* notifyObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDVIRTUALLINEUPDESTROYNOTIFY_OFFSET))(this, cmd, notifyObject);
		}

		::System::Void _DoDestoryVirtualLineup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__DODESTORYVIRTUALLINEUP_OFFSET))(this);
		}

		::System::Boolean _ShouldMergeDestroyingTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__SHOULDMERGEDESTROYINGTEAM_OFFSET))(this);
		}

		::System::Void _OnCmdExtraLineupDestroyNotify(::System::UInt16 cmd, ::System::Object* notifyObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDEXTRALINEUPDESTROYNOTIFY_OFFSET))(this, cmd, notifyObject);
		}

		::System::Void _OnCmdSwitchLineupIndexScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDSWITCHLINEUPINDEXSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSetLineupNameScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDSETLINEUPNAMESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnPlayerMapTeleport(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONPLAYERMAPTELEPORT_OFFSET))(this, param);
		}

		::System::Void _OnPlayerMpTeleportNoSwitchIn(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONPLAYERMPTELEPORTNOSWITCHIN_OFFSET))(this, param);
		}

		::System::Void _OnPlayerMpTeleportNoSwitchInWhite(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONPLAYERMPTELEPORTNOSWITCHINWHITE_OFFSET))(this, param);
		}

		::System::Void _OnMapRefreshAfterRelogin(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONMAPREFRESHAFTERRELOGIN_OFFSET))(this, param);
		}

		::System::UInt32 get_CurrentMainlineTeamIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GET_CURRENTMAINLINETEAMINDEX_OFFSET))(this);
		}

		::System::Int32 get_MainlineTeamCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GET_MAINLINETEAMCOUNT_OFFSET))(this);
		}

		::System::Void _JoinMemberToLocalEditTeam(::RPG::Client::TeamData* teamData, ::System::UInt32 avatarID, ::System::UInt32 slot)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__JOINMEMBERTOLOCALEDITTEAM_OFFSET))(this, teamData, avatarID, slot);
		}

		::System::Void _JoinMemberToPreSetTeam(::RPG::Client::TeamData* teamData, ::RPG::Client::IAvatarInfoProvider* avatar, ::System::UInt32 slot, ::RPG::Client::AssistData* assistData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::RPG::Client::IAvatarInfoProvider*, ::System::UInt32, ::RPG::Client::AssistData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__JOINMEMBERTOPRESETTEAM_OFFSET))(this, teamData, avatar, slot, assistData);
		}

		::System::Void _JoinMemberToTeamDefault(::RPG::Client::TeamData* teamData, ::System::UInt32 avatarID, ::System::UInt32 slot)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__JOINMEMBERTOTEAMDEFAULT_OFFSET))(this, teamData, avatarID, slot);
		}

		::System::Int32 _GetLeaderSlotAfterReplace(::RPG::Client::TeamData* teamData, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* avatars)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TeamData*, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__GETLEADERSLOTAFTERREPLACE_OFFSET))(this, teamData, avatars);
		}

		::System::Int32 _JoinVacantSlotWithExtraAvatars(::RPG::Client::TeamData* teamData, ::System::Collections::Generic::List_1<::System::UInt32>* extraAvatars, ::System::Int32 num)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TeamData*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__JOINVACANTSLOTWITHEXTRAAVATARS_OFFSET))(this, teamData, extraAvatars, num);
		}

		::System::Void _SwitchCurrentTeam(::Enum_3_63C076C405BE0674_3 extraLineupType, ::System::UInt32 index, ::System::Boolean withDiffNotify)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_3, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__SWITCHCURRENTTEAM_OFFSET))(this, extraLineupType, index, withDiffNotify);
		}

		::System::Boolean _IsCurrentTeam(::Class_1_14E02E1F6D70E487_2* lineupInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_14E02E1F6D70E487_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ISCURRENTTEAM_OFFSET))(this, lineupInfo);
		}

		::System::Boolean IsCurrentTeam(::Class_1_14E02E1F6D70E487_2* lineupInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_14E02E1F6D70E487_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_ISCURRENTTEAM_OFFSET))(this, lineupInfo);
		}

		::System::Void RefreshLineup(::Class_1_14E02E1F6D70E487_2* lineup, ::System::Boolean isCurrentTeam, ::System::Collections::Generic::IList_1<::Enum_3_71AA90D596A09AC8_11>* syncReasons, ::System::Boolean withDiffNotify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_2*, ::System::Boolean, ::System::Collections::Generic::IList_1<::Enum_3_71AA90D596A09AC8_11>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_REFRESHLINEUP_OFFSET))(this, lineup, isCurrentTeam, syncReasons, withDiffNotify);
		}

		::System::Void _OnCmdSyncServerSceneChangeNotify(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDSYNCSERVERSCENECHANGENOTIFY_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnCmdVirtualLineupTrialAvatarChangeScNotify(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONCMDVIRTUALLINEUPTRIALAVATARCHANGESCNOTIFY_OFFSET))(this, cmd, rsp);
		}

		::System::Void PauseTeamDataRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_PAUSETEAMDATAREFRESH_OFFSET))(this);
		}

		::System::Void ResumeTeamDataRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_RESUMETEAMDATAREFRESH_OFFSET))(this);
		}

		::System::Void _DiffTeamDataAndNotify(::RPG::Client::TeamData* oldTeamData, ::RPG::Client::TeamData* teamData, ::System::Boolean setSnapShotWhenSwitchScene)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::RPG::Client::TeamData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__DIFFTEAMDATAANDNOTIFY_OFFSET))(this, oldTeamData, teamData, setSnapShotWhenSwitchScene);
		}

		::System::Void _DetectMazeSkillMPRefresh(::RPG::Client::TeamData* oldTeamData, ::RPG::Client::TeamData* teamData, ::RPG::Client::TeamDataRefreshParam*& ntfRefreshParam)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::RPG::Client::TeamData*, ::RPG::Client::TeamDataRefreshParam*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__DETECTMAZESKILLMPREFRESH_OFFSET))(this, oldTeamData, teamData, ntfRefreshParam);
		}

		::System::Void _DetectCharacterHPRefresh(::RPG::Client::TeamData* oldTeamData, ::RPG::Client::TeamData* teamData, ::RPG::Client::TeamDataRefreshParam*& ntfRefreshParam)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::RPG::Client::TeamData*, ::RPG::Client::TeamDataRefreshParam*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__DETECTCHARACTERHPREFRESH_OFFSET))(this, oldTeamData, teamData, ntfRefreshParam);
		}

		::System::Void _UpdateTeamData(::RPG::Client::TeamData* teamData, ::Class_1_14E02E1F6D70E487_2* lineupInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::Class_1_14E02E1F6D70E487_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__UPDATETEAMDATA_OFFSET))(this, teamData, lineupInfo);
		}

		::RPG::Client::TeamData* _GetTeamData(::System::Boolean isVirtual, ::Enum_3_63C076C405BE0674_3 extraLineupType, ::System::UInt32 index, ::System::UInt32 storyLineID)
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID, ::System::Boolean, ::Enum_3_63C076C405BE0674_3, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__GETTEAMDATA_OFFSET))(this, isVirtual, extraLineupType, index, storyLineID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetCandidateMembers(::RPG::Client::TeamData* baseTeam, ::RPG::Client::TeamData* candidateTeam)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::Client::TeamData*, ::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__GETCANDIDATEMEMBERS_OFFSET))(this, baseTeam, candidateTeam);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetLackingMembers(::RPG::Client::TeamData* baseTeam, ::RPG::Client::TeamData* targetTeam)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::Client::TeamData*, ::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__GETLACKINGMEMBERS_OFFSET))(this, baseTeam, targetTeam);
		}

		::System::Boolean _IsTeamContainAvatar(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* avatars, ::System::UInt32 roleID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ISTEAMCONTAINAVATAR_OFFSET))(this, avatars, roleID);
		}

		::System::Boolean _CheckTeamLevel(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* avatars, ::System::UInt32 limitLevel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__CHECKTEAMLEVEL_OFFSET))(this, avatars, limitLevel);
		}

		::System::Boolean _CheckTeamAvatarCount(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* avatars, ::System::UInt32 count)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__CHECKTEAMAVATARCOUNT_OFFSET))(this, avatars, count);
		}

		::System::Boolean _CheckContainAnyHeroAvatar(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* avatars, ::Il2CppArray<::System::UInt32>* realAvatarIDList)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__CHECKCONTAINANYHEROAVATAR_OFFSET))(this, avatars, realAvatarIDList);
		}

		::System::Boolean _CheckContainMultiPathAvatar(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* avatars, ::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__CHECKCONTAINMULTIPATHAVATAR_OFFSET))(this, avatars, avatarID);
		}

		::System::Void _OnMapCreated(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONMAPCREATED_OFFSET))(this, arg);
		}

		::System::Void _OnStoryModeChange(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONSTORYMODECHANGE_OFFSET))(this, arg);
		}

		::System::Void _OnMazeToBattleTransition(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONMAZETOBATTLETRANSITION_OFFSET))(this, arg);
		}

		::System::Void _OnAdventurePhasePopupFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__ONADVENTUREPHASEPOPUPFINISH_OFFSET))(this, arg);
		}

		::System::Void _ProcessTeamSnapshotDataChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__PROCESSTEAMSNAPSHOTDATACHANGE_OFFSET))(this);
		}

		::System::Void _ReportCurrentMpMaxChange(::RPG::Client::TeamData* teamData, ::Class_1_14E02E1F6D70E487_2* lineupInfo, ::System::Boolean changedPermanent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*, ::Class_1_14E02E1F6D70E487_2*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__REPORTCURRENTMPMAXCHANGE_OFFSET))(this, teamData, lineupInfo, changedPermanent);
		}

		::System::Boolean _WillBeEmptyAfterQuit(::RPG::Client::TeamData* teamData, ::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__WILLBEEMPTYAFTERQUIT_OFFSET))(this, teamData, avatarID);
		}

		::System::Boolean get_IsExistLocalEditTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GET_ISEXISTLOCALEDITTEAM_OFFSET))(this);
		}

		::System::Boolean get_IsCurEditLocalTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GET_ISCUREDITLOCALTEAM_OFFSET))(this);
		}

		::System::Boolean get_IsCurShowLocalTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GET_ISCURSHOWLOCALTEAM_OFFSET))(this);
		}

		::System::Void set_IsCurShowLocalTeam(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_SET_ISCURSHOWLOCALTEAM_OFFSET))(this, value);
		}

		::System::Boolean get_IsClientOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GET_ISCLIENTONLY_OFFSET))(this);
		}

		::System::Void set_IsClientOnly(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_SET_ISCLIENTONLY_OFFSET))(this, value);
		}

		::RPG::Client::ITeamBuildCalculator* get_TeamBuildCalculator()
		{
			return ((::RPG::Client::ITeamBuildCalculator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GET_TEAMBUILDCALCULATOR_OFFSET))(this);
		}

		::System::UInt32 get_TeamAssociationUnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE_GET_TEAMASSOCIATIONUNLOCKID_OFFSET))(this);
		}

		::System::Void _ResumeTeamDataRefresh_b__90_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE__RESUMETEAMDATAREFRESH_B__90_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
