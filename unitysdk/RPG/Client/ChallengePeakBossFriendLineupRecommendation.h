#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_1.h"
#include "unitysdk/RPG/Client/LineupRecommendationReportActionType.h"
#include "unitysdk/RPG/Client/LineupRecommendationType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_496DDD2F6FDC28F1;
class Class_1_5EBF6005039A39B5;
class Class_1_7EC7BEDEDBFDF418;
class Class_1_A7A42CB240A0440F_1;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ChallengePeakBoss; }
namespace RPG::Client { class ChallengePeakGroup; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_CLEAR_OFFSET UNITYSDK_OFFSET(0x191DFEB0)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_CREATE_OFFSET UNITYSDK_OFFSET(0x191DF9D0)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETCOUNTOFSTARS_OFFSET UNITYSDK_OFFSET(0x191E0250)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARIDS_OFFSET UNITYSDK_OFFSET(0x191E03B0)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARLEVELS_OFFSET UNITYSDK_OFFSET(0x191E05A0)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARSKINIDS_OFFSET UNITYSDK_OFFSET(0x191E0790)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPBUFFID_OFFSET UNITYSDK_OFFSET(0x191E00D0)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPDETAILINFO_OFFSET UNITYSDK_OFFSET(0x191E0B20)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPMEDALICONPATH_OFFSET UNITYSDK_OFFSET(0x191E0990)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPPLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x191DFF50)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETTITLE_OFFSET UNITYSDK_OFFSET(0x191E0D40)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0x191DF9B0)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GET_COUNTOFLINEUPS_OFFSET UNITYSDK_OFFSET(0x191DF890)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GET_FRIENDRECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0x191DF840)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x191DF770)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x191DF930)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GET_MAXTEAMCOUNT_OFFSET UNITYSDK_OFFSET(0x191DF8E0)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GET_RECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0x191DF7F0)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_REFRESH_OFFSET UNITYSDK_OFFSET(0x191DFCD0)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_REPORTACTION_OFFSET UNITYSDK_OFFSET(0x191E0DF0)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_SET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0x191DF9C0)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION__CTOR_OFFSET UNITYSDK_OFFSET(0x191DFC00)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION__GETFRIENDRECOMMENDLINEUPDETAILSCRSP_OFFSET UNITYSDK_OFFSET(0x191E11A0)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION__GETLINEUPINFO_OFFSET UNITYSDK_OFFSET(0x191E01B0)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION__GETRECOMMENDINFO_OFFSET UNITYSDK_OFFSET(0x191E0040)
#define RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION__ONGETFRIENDRECOMMENDLINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0x191E0EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakBossFriendLineupRecommendation_TypeDefinitionIndex = 60421;

	class ChallengePeakBossFriendLineupRecommendation : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>* _FriendLineupDetailCache; // 0x10
		::System::Collections::Generic::List_1<::Class_1_496DDD2F6FDC28F1*>* _RecommendInfos; // 0x18
		::RPG::Client::ChallengePeakGroup* _Group; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlayerBriefDisplayData*>* _FriendBriefDisplayDataDict; // 0x28
		::RPG::Client::ChallengePeakBoss* _Boss; // 0x30
		::System::Boolean _CanRefresh_k__BackingField; // 0x38

		::System::Void _ctor(::RPG::Client::ChallengePeakGroup* a1, ::RPG::Client::ChallengePeakBoss* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakGroup*, ::RPG::Client::ChallengePeakBoss*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GET_GROUPID_OFFSET))(this);
		}

		::RPG::Client::LineupRecommendationType get_RecommendType()
		{
			return ((::RPG::Client::LineupRecommendationType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GET_RECOMMENDTYPE_OFFSET))(this);
		}

		::Enum_3_71AA90D596A09AC8_1 get_FriendRecommendType()
		{
			return ((::Enum_3_71AA90D596A09AC8_1(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GET_FRIENDRECOMMENDTYPE_OFFSET))(this);
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

		::System::Void set_CanRefresh(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_SET_CANREFRESH_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChallengePeakBossFriendLineupRecommendation* Create(::RPG::Client::ChallengePeakGroup* a1)
		{
			return ((::RPG::Client::ChallengePeakBossFriendLineupRecommendation*(*)(::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_CREATE_OFFSET))(a1);
		}

		::RPG::Client::Promises::IPromise* Refresh()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_REFRESH_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_CLEAR_OFFSET))(this);
		}

		::RPG::Client::PlayerBriefDisplayData* GetLineupPlayerBriefDisplayData(::System::Int32 a1)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPPLAYERBRIEFDISPLAYDATA_OFFSET))(this, a1);
		}

		::System::UInt32 GetLineupBuffID(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPBUFFID_OFFSET))(this, a1);
		}

		::System::Int32 GetCountOfStars(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETCOUNTOFSTARS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupAvatarIDs(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupAvatarLevels(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARLEVELS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupAvatarSkinIDs(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPAVATARSKINIDS_OFFSET))(this, a1, a2);
		}

		::System::String* GetLineupMedalIconPath(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPMEDALICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>* GetLineupDetailInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETLINEUPDETAILINFO_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_GETTITLE_OFFSET))(this);
		}

		::System::Void ReportAction(::RPG::Client::LineupRecommendationReportActionType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LineupRecommendationReportActionType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION_REPORTACTION_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetFriendRecommendLineupScRsp(::Class_1_A7A42CB240A0440F_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A7A42CB240A0440F_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION__ONGETFRIENDRECOMMENDLINEUPSCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>* _GetFriendRecommendLineupDetailScRsp(::Class_1_5EBF6005039A39B5* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>*(*)(::PVOID, ::Class_1_5EBF6005039A39B5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION__GETFRIENDRECOMMENDLINEUPDETAILSCRSP_OFFSET))(this, a1);
		}

		::Class_1_496DDD2F6FDC28F1* _GetRecommendInfo(::System::Int32 a1)
		{
			return ((::Class_1_496DDD2F6FDC28F1*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION__GETRECOMMENDINFO_OFFSET))(this, a1);
		}

		::Class_1_7EC7BEDEDBFDF418* _GetLineupInfo(::System::Int32 a1)
		{
			return ((::Class_1_7EC7BEDEDBFDF418*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKBOSSFRIENDLINEUPRECOMMENDATION__GETLINEUPINFO_OFFSET))(this, a1);
		}
	};
}
