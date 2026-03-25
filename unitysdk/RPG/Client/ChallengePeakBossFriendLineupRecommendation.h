#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_4.h"
#include "unitysdk/RPG/Client/LineupRecommendationReportActionType.h"
#include "unitysdk/RPG/Client/LineupRecommendationType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_0A34C21DBA32D0C7;
class Class_1_2AE9EADEAA87F763_1;
class Class_1_CE90A3B454F32DFE;
class Class_1_D8C697E5EDE50B55;
namespace RPG::Client { class ChallengePeakBoss; }
namespace RPG::Client { class ChallengePeakGroup; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_CLEAR_OFFSET UNITYSDK_OFFSET(0x92DEDE0)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_CREATE_OFFSET UNITYSDK_OFFSET(0x92DE950)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETCOUNTOFSTARS_OFFSET UNITYSDK_OFFSET(0x92DF1B0)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARIDS_OFFSET UNITYSDK_OFFSET(0x92DF310)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARLEVELS_OFFSET UNITYSDK_OFFSET(0x92DF4B0)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARSKINIDS_OFFSET UNITYSDK_OFFSET(0x92DF650)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPBUFFID_OFFSET UNITYSDK_OFFSET(0x92DF030)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPDETAILINFO_OFFSET UNITYSDK_OFFSET(0x92DF9E0)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPMEDALICONPATH_OFFSET UNITYSDK_OFFSET(0x92DF800)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPPLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x92DEE50)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETTITLE_OFFSET UNITYSDK_OFFSET(0x92DFBF0)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0x92DE930)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GET_COUNTOFLINEUPS_OFFSET UNITYSDK_OFFSET(0x92DE880)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GET_FRIENDRECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0x92DE870)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x92DE830)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x92DE8E0)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GET_MAXTEAMCOUNT_OFFSET UNITYSDK_OFFSET(0x92DE8D0)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GET_RECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0x92DE860)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_REFRESH_OFFSET UNITYSDK_OFFSET(0x92DEC50)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_REPORTACTION_OFFSET UNITYSDK_OFFSET(0x92DFC60)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_SET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0x92DE940)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION__CTOR_OFFSET UNITYSDK_OFFSET(0x92DEB80)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION__GETFRIENDRECOMMENDLINEUPDETAILSCRSP_OFFSET UNITYSDK_OFFSET(0x92DFF90)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION__GETLINEUPINFO_OFFSET UNITYSDK_OFFSET(0x92DF110)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION__GETRECOMMENDINFO_OFFSET UNITYSDK_OFFSET(0x92DEF90)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION__ONGETFRIENDRECOMMENDLINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0x92DFD20)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakBossFriendLineupRecommendation_TypeDefinitionIndex = 51296;

	class ChallengePeakBossFriendLineupRecommendation : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_CE90A3B454F32DFE*>* _RecommendInfos; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlayerBriefDisplayData*>* _FriendBriefDisplayDataDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*>* _FriendLineupDetailCache; // 0x20
		::RPG::Client::ChallengePeakGroup* _Group; // 0x28
		::RPG::Client::ChallengePeakBoss* _Boss; // 0x30
		::System::Boolean _CanRefresh_k__BackingField; // 0x38

		::System::Void _ctor(::RPG::Client::ChallengePeakGroup* group, ::RPG::Client::ChallengePeakBoss* boss)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakGroup*, ::RPG::Client::ChallengePeakBoss*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION__CTOR_OFFSET))(this, group, boss);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GET_GROUPID_OFFSET))(this);
		}

		::RPG::Client::LineupRecommendationType get_RecommendType()
		{
			return ((::RPG::Client::LineupRecommendationType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GET_RECOMMENDTYPE_OFFSET))(this);
		}

		::Enum_3_4608E37A1B3D374A_4 get_FriendRecommendType()
		{
			return ((::Enum_3_4608E37A1B3D374A_4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GET_FRIENDRECOMMENDTYPE_OFFSET))(this);
		}

		::System::Int32 get_CountOfLineups()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GET_COUNTOFLINEUPS_OFFSET))(this);
		}

		::System::Int32 get_MaxTeamCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GET_MAXTEAMCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GET_ISDATAREADY_OFFSET))(this);
		}

		::System::Boolean get_CanRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GET_CANREFRESH_OFFSET))(this);
		}

		::System::Void set_CanRefresh(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_SET_CANREFRESH_OFFSET))(this, value);
		}

		static ::RPG::Client::ChallengePeakBossFriendLineupRecommendation* Create(::RPG::Client::ChallengePeakGroup* group)
		{
			return ((::RPG::Client::ChallengePeakBossFriendLineupRecommendation*(*)(::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_CREATE_OFFSET))(group);
		}

		::RPG::Client::Promises::IPromise* Refresh()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_REFRESH_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_CLEAR_OFFSET))(this);
		}

		::RPG::Client::PlayerBriefDisplayData* GetLineupPlayerBriefDisplayData(::System::Int32 lineupIndex)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPPLAYERBRIEFDISPLAYDATA_OFFSET))(this, lineupIndex);
		}

		::System::UInt32 GetLineupBuffID(::System::Int32 lineupIndex)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPBUFFID_OFFSET))(this, lineupIndex);
		}

		::System::Int32 GetCountOfStars(::System::Int32 lineupIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETCOUNTOFSTARS_OFFSET))(this, lineupIndex);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupAvatarIDs(::System::Int32 lineupIndex)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARIDS_OFFSET))(this, lineupIndex);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupAvatarLevels(::System::Int32 lineupIndex)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARLEVELS_OFFSET))(this, lineupIndex);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupAvatarSkinIDs(::System::Int32 lineupIndex, ::System::Int32 teamIndex)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARSKINIDS_OFFSET))(this, lineupIndex, teamIndex);
		}

		::System::String* GetLineupMedalIconPath(::System::Int32 lineupIndex)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPMEDALICONPATH_OFFSET))(this, lineupIndex);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*>* GetLineupDetailInfo(::System::UInt32 friendUID)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPDETAILINFO_OFFSET))(this, friendUID);
		}

		::RPG::Client::TextID GetTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETTITLE_OFFSET))(this);
		}

		::System::Void ReportAction(::RPG::Client::LineupRecommendationReportActionType actionType, ::System::Boolean isShowOwnership)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LineupRecommendationReportActionType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_REPORTACTION_OFFSET))(this, actionType, isShowOwnership);
		}

		::System::Void _OnGetFriendRecommendLineupScRsp(::Class_1_0A34C21DBA32D0C7* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A34C21DBA32D0C7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION__ONGETFRIENDRECOMMENDLINEUPSCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*>* _GetFriendRecommendLineupDetailScRsp(::Class_1_D8C697E5EDE50B55* rsp)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*>*(*)(::PVOID, ::Class_1_D8C697E5EDE50B55*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION__GETFRIENDRECOMMENDLINEUPDETAILSCRSP_OFFSET))(this, rsp);
		}

		::Class_1_CE90A3B454F32DFE* _GetRecommendInfo(::System::Int32 index)
		{
			return ((::Class_1_CE90A3B454F32DFE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION__GETRECOMMENDINFO_OFFSET))(this, index);
		}

		::Class_1_2AE9EADEAA87F763_1* _GetLineupInfo(::System::Int32 index)
		{
			return ((::Class_1_2AE9EADEAA87F763_1*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION__GETLINEUPINFO_OFFSET))(this, index);
		}
	};
}
