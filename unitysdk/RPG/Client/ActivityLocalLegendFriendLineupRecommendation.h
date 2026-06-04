#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_1.h"
#include "unitysdk/RPG/Client/LineupRecommendationReportActionType.h"
#include "unitysdk/RPG/Client/LineupRecommendationType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_242D518D0751301D;
class Class_1_455008579EB95638_38;
class Class_1_496DDD2F6FDC28F1;
class Class_1_66CE06A7071B3CE3;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ActivityLocalLegendLevelData; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_CLEAR_OFFSET UNITYSDK_OFFSET(0xB197600)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_CREATE_OFFSET UNITYSDK_OFFSET(0xB196570)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETCOUNTOFSTARS_OFFSET UNITYSDK_OFFSET(0xB196E90)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARIDS_OFFSET UNITYSDK_OFFSET(0xB196B60)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARLEVELS_OFFSET UNITYSDK_OFFSET(0xB196F80)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARSKINIDS_OFFSET UNITYSDK_OFFSET(0xB197170)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPDETAILINFO_OFFSET UNITYSDK_OFFSET(0xB197360)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPPLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xB1969E0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETTITLE_OFFSET UNITYSDK_OFFSET(0xB196DF0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0xB196550)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_COUNTOFLINEUPS_OFFSET UNITYSDK_OFFSET(0xB1964A0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_FRIENDRECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0xB196490)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0xB196500)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_MAXTEAMCOUNT_OFFSET UNITYSDK_OFFSET(0xB1964F0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_RECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0xB196480)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_REFRESH_OFFSET UNITYSDK_OFFSET(0xB196780)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_REPORTACTION_OFFSET UNITYSDK_OFFSET(0xB1975B0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_SET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0xB196560)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__CTOR_OFFSET UNITYSDK_OFFSET(0xB1966C0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__GETFRIENDRECOMMENDLINEUPDETAILSCRSP_OFFSET UNITYSDK_OFFSET(0xB197990)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__GETLINEUPINFO_OFFSET UNITYSDK_OFFSET(0xB196D50)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__GETRECOMMENDINFO_OFFSET UNITYSDK_OFFSET(0xB196AD0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__ONGETFRIENDRECOMMENDLINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xB197690)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendFriendLineupRecommendation_TypeDefinitionIndex = 57560;

	class ActivityLocalLegendFriendLineupRecommendation : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_496DDD2F6FDC28F1*>* _RecommendInfos; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>* _FriendLineupDetailCache; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlayerBriefDisplayData*>* _FriendBriefDisplayDataDict; // 0x20
		::RPG::Client::ActivityLocalLegendLevelData* _LevelData; // 0x28
		::System::Boolean _CanRefresh_k__BackingField; // 0x30

		::System::Void _ctor(::RPG::Client::ActivityLocalLegendLevelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityLocalLegendLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LineupRecommendationType get_RecommendType()
		{
			return ((::RPG::Client::LineupRecommendationType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_RECOMMENDTYPE_OFFSET))(this);
		}

		::Enum_3_71AA90D596A09AC8_1 get_FriendRecommendType()
		{
			return ((::Enum_3_71AA90D596A09AC8_1(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GET_FRIENDRECOMMENDTYPE_OFFSET))(this);
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

		::System::Void set_CanRefresh(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_SET_CANREFRESH_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityLocalLegendFriendLineupRecommendation* Create(::RPG::Client::ActivityLocalLegendLevelData* a1)
		{
			return ((::RPG::Client::ActivityLocalLegendFriendLineupRecommendation*(*)(::RPG::Client::ActivityLocalLegendLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_CREATE_OFFSET))(a1);
		}

		::RPG::Client::Promises::IPromise* Refresh()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_REFRESH_OFFSET))(this);
		}

		::RPG::Client::PlayerBriefDisplayData* GetLineupPlayerBriefDisplayData(::System::Int32 a1)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPPLAYERBRIEFDISPLAYDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupAvatarIDs(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARIDS_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETTITLE_OFFSET))(this);
		}

		::System::Int32 GetCountOfStars(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETCOUNTOFSTARS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupAvatarLevels(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARLEVELS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupAvatarSkinIDs(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARSKINIDS_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>* GetLineupDetailInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_GETLINEUPDETAILINFO_OFFSET))(this, a1);
		}

		::System::Void ReportAction(::RPG::Client::LineupRecommendationReportActionType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LineupRecommendationReportActionType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_REPORTACTION_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION_CLEAR_OFFSET))(this);
		}

		::System::Void _OnGetFriendRecommendLineupScRsp(::Class_1_242D518D0751301D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_242D518D0751301D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__ONGETFRIENDRECOMMENDLINEUPSCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>* _GetFriendRecommendLineupDetailScRsp(::Class_1_66CE06A7071B3CE3* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>*(*)(::PVOID, ::Class_1_66CE06A7071B3CE3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__GETFRIENDRECOMMENDLINEUPDETAILSCRSP_OFFSET))(this, a1);
		}

		::Class_1_496DDD2F6FDC28F1* _GetRecommendInfo(::System::Int32 a1)
		{
			return ((::Class_1_496DDD2F6FDC28F1*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__GETRECOMMENDINFO_OFFSET))(this, a1);
		}

		::Class_1_455008579EB95638_38* _GetLineupInfo(::System::Int32 a1)
		{
			return ((::Class_1_455008579EB95638_38*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDFRIENDLINEUPRECOMMENDATION__GETLINEUPINFO_OFFSET))(this, a1);
		}
	};
}
