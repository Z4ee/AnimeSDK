#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_3.h"
#include "unitysdk/RPG/Client/LineupRecommendationReportActionType.h"
#include "unitysdk/RPG/Client/LineupRecommendationType.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/Struct_2_01F3B7B140C09CEE.h"
#include "unitysdk/System/Object.h"

class Class_1_242D518D0751301D;
class Class_1_66CE06A7071B3CE3;
class Class_1_FB0633E85BD6CF8E_6;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class SingleChallengeRecommendLineup; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x9F2B840)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F2B910)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GETLINEUPDETAILINFO_OFFSET UNITYSDK_OFFSET(0x9F2BC00)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GETRECOMMENDLINEUP_OFFSET UNITYSDK_OFFSET(0x9F2BB60)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0x9F2B7C0)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GET_CHALLENGEID_OFFSET UNITYSDK_OFFSET(0x9F2B760)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GET_COUNTOFLINEUPS_OFFSET UNITYSDK_OFFSET(0x9F2B7E0)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GET_FRIENDRECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0x9F2B790)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x9F2B770)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x9F2B7A0)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GET_RECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0x9F2B780)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x9F2B9F0)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_REPORTACTION_OFFSET UNITYSDK_OFFSET(0x9F2BDF0)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_SET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0x9F2B7D0)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_SET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x9F2B7B0)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA__CREATERECOMMENDCHALLENGELINEUPSINFO_OFFSET UNITYSDK_OFFSET(0x9F2BE60)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F2B830)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA__GETFRIENDRECOMMENDLINEUPDETAILSCRSP_OFFSET UNITYSDK_OFFSET(0x9F2CD40)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA__GETNAMEBYUID_OFFSET UNITYSDK_OFFSET(0x9F2CC00)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA__ONGETRECOMMENDCHALLENGELINEUPS_OFFSET UNITYSDK_OFFSET(0x9F2C630)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA__SYNCRECOMMENDLINEUP_OFFSET UNITYSDK_OFFSET(0x9F2CB10)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeFriendRecommendLineupData_TypeDefinitionIndex = 58148;

	class ChallengeFriendRecommendLineupData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*>* _FriendLineupDetailCache; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::SingleChallengeRecommendLineup*>* _RecommendLineups; // 0x18
		::System::UInt32 _ChallengeID_k__BackingField; // 0x20
		::System::Boolean _CanRefresh_k__BackingField; // 0x24
		::System::Boolean _IsDataReady_k__BackingField; // 0x25
		::RPG::GameCore::ChallengeGroupType _GroupType_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 id, ::RPG::GameCore::ChallengeGroupType groupType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA__CTOR_OFFSET))(this, id, groupType);
		}

		::System::UInt32 get_ChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GET_CHALLENGEID_OFFSET))(this);
		}

		::RPG::GameCore::ChallengeGroupType get_GroupType()
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GET_GROUPTYPE_OFFSET))(this);
		}

		::RPG::Client::LineupRecommendationType get_RecommendType()
		{
			return ((::RPG::Client::LineupRecommendationType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GET_RECOMMENDTYPE_OFFSET))(this);
		}

		::Enum_3_4608E37A1B3D374A_3 get_FriendRecommendType()
		{
			return ((::Enum_3_4608E37A1B3D374A_3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GET_FRIENDRECOMMENDTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GET_ISDATAREADY_OFFSET))(this);
		}

		::System::Void set_IsDataReady(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_SET_ISDATAREADY_OFFSET))(this, value);
		}

		::System::Boolean get_CanRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GET_CANREFRESH_OFFSET))(this);
		}

		::System::Void set_CanRefresh(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_SET_CANREFRESH_OFFSET))(this, value);
		}

		::System::Int32 get_CountOfLineups()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GET_COUNTOFLINEUPS_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* Refresh()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_REFRESH_OFFSET))(this);
		}

		::RPG::Client::SingleChallengeRecommendLineup* GetRecommendLineup(::System::Int32 index)
		{
			return ((::RPG::Client::SingleChallengeRecommendLineup*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GETRECOMMENDLINEUP_OFFSET))(this, index);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*>* GetLineupDetailInfo(::System::UInt32 friendUID)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GETLINEUPDETAILINFO_OFFSET))(this, friendUID);
		}

		::System::Void ReportAction(::RPG::Client::LineupRecommendationReportActionType actionType, ::System::Boolean isShowOwnership)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LineupRecommendationReportActionType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_REPORTACTION_OFFSET))(this, actionType, isShowOwnership);
		}

		::Struct_2_01F3B7B140C09CEE _CreateRecommendChallengeLineupsInfo(::Class_1_242D518D0751301D* rsp)
		{
			return ((::Struct_2_01F3B7B140C09CEE(*)(::PVOID, ::Class_1_242D518D0751301D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA__CREATERECOMMENDCHALLENGELINEUPSINFO_OFFSET))(this, rsp);
		}

		::System::Void _OnGetRecommendChallengeLineups(::Struct_2_01F3B7B140C09CEE info)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_01F3B7B140C09CEE))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA__ONGETRECOMMENDCHALLENGELINEUPS_OFFSET))(this, info);
		}

		::System::String* _GetNameByUID(::System::UInt32 uid)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA__GETNAMEBYUID_OFFSET))(this, uid);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*>* _GetFriendRecommendLineupDetailScRsp(::Class_1_66CE06A7071B3CE3* rsp)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*>*(*)(::PVOID, ::Class_1_66CE06A7071B3CE3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA__GETFRIENDRECOMMENDLINEUPDETAILSCRSP_OFFSET))(this, rsp);
		}

		::System::Void _SyncRecommendLineup(::System::Int32 index, ::Class_1_FB0633E85BD6CF8E_6* info)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_FB0633E85BD6CF8E_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA__SYNCRECOMMENDLINEUP_OFFSET))(this, index, info);
		}
	};
}
