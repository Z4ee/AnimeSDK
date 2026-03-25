#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_4.h"
#include "unitysdk/RPG/Client/LineupRecommendationReportActionType.h"
#include "unitysdk/RPG/Client/LineupRecommendationType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_0A34C21DBA32D0C7;
class Class_1_CE90A3B454F32DFE;
class Class_1_D8C697E5EDE50B55;
class Class_1_DE49214D160C3B72_4;
class Class_1_E7C4009BCC22497A_29;
namespace RPG::Client { class ChallengePeakGroup; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_CLEAR_OFFSET UNITYSDK_OFFSET(0x92EAFA0)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_CREATE_OFFSET UNITYSDK_OFFSET(0x92E55D0)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GETCOUNTOFSTARS_OFFSET UNITYSDK_OFFSET(0x92EB590)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARIDS_OFFSET UNITYSDK_OFFSET(0x92EB1F0)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARLEVELS_OFFSET UNITYSDK_OFFSET(0x92EB600)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARSKINIDS_OFFSET UNITYSDK_OFFSET(0x92EB710)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GETLINEUPDETAILINFO_OFFSET UNITYSDK_OFFSET(0x92EB820)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GETLINEUPPLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x92EB010)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GETMONSTERICONPATH_OFFSET UNITYSDK_OFFSET(0x92EB420)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GETTITLE_OFFSET UNITYSDK_OFFSET(0x92EB4E0)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0x92EAD30)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GET_COUNTOFLINEUPS_OFFSET UNITYSDK_OFFSET(0x92EAC80)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GET_FRIENDRECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0x92EAC70)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x92EAC30)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x92EACE0)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GET_MAXTEAMCOUNT_OFFSET UNITYSDK_OFFSET(0x92EACD0)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GET_RECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0x92EAC60)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_REFRESH_OFFSET UNITYSDK_OFFSET(0x92EAE10)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_REPORTACTION_OFFSET UNITYSDK_OFFSET(0x92EBA30)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_SET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0x92EAD40)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION__CTOR_OFFSET UNITYSDK_OFFSET(0x92EAD50)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION__GETFRIENDRECOMMENDLINEUPDETAILSCRSP_OFFSET UNITYSDK_OFFSET(0x92EBD60)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION__GETLINEUPINFO_OFFSET UNITYSDK_OFFSET(0x92EC2A0)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION__GETRECOMMENDINFO_OFFSET UNITYSDK_OFFSET(0x92EB150)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION__GETTEAMINFO_OFFSET UNITYSDK_OFFSET(0x92EB300)
#define RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION__ONGETFRIENDRECOMMENDLINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0x92EBAF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakNormalFriendLineupRecommendation_TypeDefinitionIndex = 51298;

	class ChallengePeakNormalFriendLineupRecommendation : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*>* _FriendLineupDetailCache; // 0x10
		::RPG::Client::ChallengePeakGroup* _Group; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlayerBriefDisplayData*>* _FriendBriefDisplayDataDict; // 0x20
		::System::Collections::Generic::List_1<::Class_1_CE90A3B454F32DFE*>* _RecommendInfos; // 0x28
		::System::Boolean _CanRefresh_k__BackingField; // 0x30

		::System::Void _ctor(::RPG::Client::ChallengePeakGroup* group)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION__CTOR_OFFSET))(this, group);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GET_GROUPID_OFFSET))(this);
		}

		::RPG::Client::LineupRecommendationType get_RecommendType()
		{
			return ((::RPG::Client::LineupRecommendationType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GET_RECOMMENDTYPE_OFFSET))(this);
		}

		::Enum_3_4608E37A1B3D374A_4 get_FriendRecommendType()
		{
			return ((::Enum_3_4608E37A1B3D374A_4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GET_FRIENDRECOMMENDTYPE_OFFSET))(this);
		}

		::System::Int32 get_CountOfLineups()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GET_COUNTOFLINEUPS_OFFSET))(this);
		}

		::System::Int32 get_MaxTeamCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GET_MAXTEAMCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GET_ISDATAREADY_OFFSET))(this);
		}

		::System::Boolean get_CanRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GET_CANREFRESH_OFFSET))(this);
		}

		::System::Void set_CanRefresh(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_SET_CANREFRESH_OFFSET))(this, value);
		}

		static ::RPG::Client::ChallengePeakNormalFriendLineupRecommendation* Create(::RPG::Client::ChallengePeakGroup* group)
		{
			return ((::RPG::Client::ChallengePeakNormalFriendLineupRecommendation*(*)(::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_CREATE_OFFSET))(group);
		}

		::RPG::Client::Promises::IPromise* Refresh()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_REFRESH_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_CLEAR_OFFSET))(this);
		}

		::RPG::Client::PlayerBriefDisplayData* GetLineupPlayerBriefDisplayData(::System::Int32 lineupIndex)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GETLINEUPPLAYERBRIEFDISPLAYDATA_OFFSET))(this, lineupIndex);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupAvatarIDs(::System::Int32 lineupIndex, ::System::Int32 teamIndex)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARIDS_OFFSET))(this, lineupIndex, teamIndex);
		}

		::System::String* GetMonsterIconPath(::System::Int32 teamIndex)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GETMONSTERICONPATH_OFFSET))(this, teamIndex);
		}

		::RPG::Client::TextID GetTitle(::System::Int32 teamIndex)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GETTITLE_OFFSET))(this, teamIndex);
		}

		::System::Int32 GetCountOfStars(::System::Int32 lineupIndex, ::System::Int32 teamIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GETCOUNTOFSTARS_OFFSET))(this, lineupIndex, teamIndex);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupAvatarLevels(::System::Int32 lineupIndex, ::System::Int32 teamIndex)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARLEVELS_OFFSET))(this, lineupIndex, teamIndex);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupAvatarSkinIDs(::System::Int32 lineupIndex, ::System::Int32 teamIndex)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARSKINIDS_OFFSET))(this, lineupIndex, teamIndex);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*>* GetLineupDetailInfo(::System::UInt32 friendUID)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_GETLINEUPDETAILINFO_OFFSET))(this, friendUID);
		}

		::System::Void ReportAction(::RPG::Client::LineupRecommendationReportActionType actionType, ::System::Boolean isShowOwnership)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LineupRecommendationReportActionType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION_REPORTACTION_OFFSET))(this, actionType, isShowOwnership);
		}

		::System::Void _OnGetFriendRecommendLineupScRsp(::Class_1_0A34C21DBA32D0C7* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A34C21DBA32D0C7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION__ONGETFRIENDRECOMMENDLINEUPSCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*>* _GetFriendRecommendLineupDetailScRsp(::Class_1_D8C697E5EDE50B55* rsp)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*>*(*)(::PVOID, ::Class_1_D8C697E5EDE50B55*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION__GETFRIENDRECOMMENDLINEUPDETAILSCRSP_OFFSET))(this, rsp);
		}

		::Class_1_CE90A3B454F32DFE* _GetRecommendInfo(::System::Int32 index)
		{
			return ((::Class_1_CE90A3B454F32DFE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION__GETRECOMMENDINFO_OFFSET))(this, index);
		}

		::Class_1_E7C4009BCC22497A_29* _GetLineupInfo(::System::Int32 index)
		{
			return ((::Class_1_E7C4009BCC22497A_29*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION__GETLINEUPINFO_OFFSET))(this, index);
		}

		::Class_1_DE49214D160C3B72_4* _GetTeamInfo(::System::Int32 lineupIndex, ::System::Int32 teamIndex)
		{
			return ((::Class_1_DE49214D160C3B72_4*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKNORMALFRIENDLINEUPRECOMMENDATION__GETTEAMINFO_OFFSET))(this, lineupIndex, teamIndex);
		}
	};
}
