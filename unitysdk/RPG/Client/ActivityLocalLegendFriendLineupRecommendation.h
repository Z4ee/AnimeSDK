#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_4.h"
#include "unitysdk/RPG/Client/LineupRecommendationReportActionType.h"
#include "unitysdk/RPG/Client/LineupRecommendationType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_0A34C21DBA32D0C7;
class Class_1_5FEFAED860528596_38;
class Class_1_CE90A3B454F32DFE;
class Class_1_D8C697E5EDE50B55;
namespace RPG::Client { class ActivityLocalLegendLevelData; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_CLEAR_OFFSET UNITYSDK_OFFSET(0x8F51F80)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_CREATE_OFFSET UNITYSDK_OFFSET(0x8F50F70)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETCOUNTOFSTARS_OFFSET UNITYSDK_OFFSET(0x8F51890)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARIDS_OFFSET UNITYSDK_OFFSET(0x8F515B0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARLEVELS_OFFSET UNITYSDK_OFFSET(0x8F51980)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARSKINIDS_OFFSET UNITYSDK_OFFSET(0x8F51B20)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPDETAILINFO_OFFSET UNITYSDK_OFFSET(0x8F51CC0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPPLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x8F513D0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETTITLE_OFFSET UNITYSDK_OFFSET(0x8F517F0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0x8F50F50)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_COUNTOFLINEUPS_OFFSET UNITYSDK_OFFSET(0x8F50EA0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_FRIENDRECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0x8F50E90)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x8F50F00)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_MAXTEAMCOUNT_OFFSET UNITYSDK_OFFSET(0x8F50EF0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_RECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0x8F50E80)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_REFRESH_OFFSET UNITYSDK_OFFSET(0x8F51180)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_REPORTACTION_OFFSET UNITYSDK_OFFSET(0x8F51F30)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_SET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0x8F50F60)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__CTOR_OFFSET UNITYSDK_OFFSET(0x8F510C0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__GETFRIENDRECOMMENDLINEUPDETAILSCRSP_OFFSET UNITYSDK_OFFSET(0x8F52290)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__GETLINEUPINFO_OFFSET UNITYSDK_OFFSET(0x8F51750)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__GETRECOMMENDINFO_OFFSET UNITYSDK_OFFSET(0x8F51510)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__ONGETFRIENDRECOMMENDLINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0x8F52020)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendFriendLineupRecommendation_TypeDefinitionIndex = 49937;

	class ActivityLocalLegendFriendLineupRecommendation : public ::System::Object
	{
	public:
		::RPG::Client::ActivityLocalLegendLevelData* _LevelData; // 0x10
		::System::Collections::Generic::List_1<::Class_1_CE90A3B454F32DFE*>* _RecommendInfos; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlayerBriefDisplayData*>* _FriendBriefDisplayDataDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*>* _FriendLineupDetailCache; // 0x28
		::System::Boolean _CanRefresh_k__BackingField; // 0x30

		::System::Void _ctor(::RPG::Client::ActivityLocalLegendLevelData* levelData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityLocalLegendLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__CTOR_OFFSET))(this, levelData);
		}

		::RPG::Client::LineupRecommendationType get_RecommendType()
		{
			return ((::RPG::Client::LineupRecommendationType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_RECOMMENDTYPE_OFFSET))(this);
		}

		::Enum_3_4608E37A1B3D374A_4 get_FriendRecommendType()
		{
			return ((::Enum_3_4608E37A1B3D374A_4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_FRIENDRECOMMENDTYPE_OFFSET))(this);
		}

		::System::Int32 get_CountOfLineups()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_COUNTOFLINEUPS_OFFSET))(this);
		}

		::System::Int32 get_MaxTeamCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_MAXTEAMCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_ISDATAREADY_OFFSET))(this);
		}

		::System::Boolean get_CanRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_CANREFRESH_OFFSET))(this);
		}

		::System::Void set_CanRefresh(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_SET_CANREFRESH_OFFSET))(this, value);
		}

		static ::RPG::Client::ActivityLocalLegendFriendLineupRecommendation* Create(::RPG::Client::ActivityLocalLegendLevelData* levelData)
		{
			return ((::RPG::Client::ActivityLocalLegendFriendLineupRecommendation*(*)(::RPG::Client::ActivityLocalLegendLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_CREATE_OFFSET))(levelData);
		}

		::RPG::Client::Promises::IPromise* Refresh()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_REFRESH_OFFSET))(this);
		}

		::RPG::Client::PlayerBriefDisplayData* GetLineupPlayerBriefDisplayData(::System::Int32 lineupIndex)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPPLAYERBRIEFDISPLAYDATA_OFFSET))(this, lineupIndex);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupAvatarIDs(::System::Int32 lineupIndex)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARIDS_OFFSET))(this, lineupIndex);
		}

		::RPG::Client::TextID GetTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETTITLE_OFFSET))(this);
		}

		::System::Int32 GetCountOfStars(::System::Int32 lineupIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETCOUNTOFSTARS_OFFSET))(this, lineupIndex);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupAvatarLevels(::System::Int32 lineupIndex)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARLEVELS_OFFSET))(this, lineupIndex);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupAvatarSkinIDs(::System::Int32 lineupIndex)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARSKINIDS_OFFSET))(this, lineupIndex);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*>* GetLineupDetailInfo(::System::UInt32 friendUID)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPDETAILINFO_OFFSET))(this, friendUID);
		}

		::System::Void ReportAction(::RPG::Client::LineupRecommendationReportActionType actionType, ::System::Boolean isShowOwnership)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LineupRecommendationReportActionType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_REPORTACTION_OFFSET))(this, actionType, isShowOwnership);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_CLEAR_OFFSET))(this);
		}

		::System::Void _OnGetFriendRecommendLineupScRsp(::Class_1_0A34C21DBA32D0C7* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A34C21DBA32D0C7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__ONGETFRIENDRECOMMENDLINEUPSCRSP_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*>* _GetFriendRecommendLineupDetailScRsp(::Class_1_D8C697E5EDE50B55* rsp)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*>*(*)(::PVOID, ::Class_1_D8C697E5EDE50B55*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__GETFRIENDRECOMMENDLINEUPDETAILSCRSP_OFFSET))(this, rsp);
		}

		::Class_1_CE90A3B454F32DFE* _GetRecommendInfo(::System::Int32 index)
		{
			return ((::Class_1_CE90A3B454F32DFE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__GETRECOMMENDINFO_OFFSET))(this, index);
		}

		::Class_1_5FEFAED860528596_38* _GetLineupInfo(::System::Int32 index)
		{
			return ((::Class_1_5FEFAED860528596_38*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__GETLINEUPINFO_OFFSET))(this, index);
		}
	};
}
