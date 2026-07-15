#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_1.h"
#include "unitysdk/RPG/Client/LineupRecommendationReportActionType.h"
#include "unitysdk/RPG/Client/LineupRecommendationType.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/Struct_2_01F3B7B140C09CEE.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_23;
class Class_1_5EBF6005039A39B5;
class Class_1_A7A42CB240A0440F_1;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class SingleChallengeRecommendLineup; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1878EBA0)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1878ECA0)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GETLINEUPDETAILINFO_OFFSET UNITYSDK_OFFSET(0x1878F000)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GETRECOMMENDLINEUP_OFFSET UNITYSDK_OFFSET(0x1878EF70)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0x1878EB20)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GET_CHALLENGEID_OFFSET UNITYSDK_OFFSET(0x1878EA40)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GET_COUNTOFLINEUPS_OFFSET UNITYSDK_OFFSET(0x1878EB40)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GET_FRIENDRECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0x1878EAB0)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1878EA50)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x1878EB00)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GET_RECOMMENDTYPE_OFFSET UNITYSDK_OFFSET(0x1878EA60)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x1878EDA0)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_REPORTACTION_OFFSET UNITYSDK_OFFSET(0x1878F200)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_SET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0x1878EB30)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_SET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x1878EB10)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA__CREATERECOMMENDCHALLENGELINEUPSINFO_OFFSET UNITYSDK_OFFSET(0x1878F270)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1878EB90)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA__GETFRIENDRECOMMENDLINEUPDETAILSCRSP_OFFSET UNITYSDK_OFFSET(0x18790490)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA__GETNAMEBYUID_OFFSET UNITYSDK_OFFSET(0x18790360)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA__ONGETRECOMMENDCHALLENGELINEUPS_OFFSET UNITYSDK_OFFSET(0x1878FAD0)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA__SYNCRECOMMENDLINEUP_OFFSET UNITYSDK_OFFSET(0x187901F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeFriendRecommendLineupData_TypeDefinitionIndex = 60348;

	class ChallengeFriendRecommendLineupData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>* _FriendLineupDetailCache; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::SingleChallengeRecommendLineup*>* _RecommendLineups; // 0x18
		::System::Boolean _IsDataReady_k__BackingField; // 0x20
		::System::Boolean _CanRefresh_k__BackingField; // 0x21
		::RPG::GameCore::ChallengeGroupType _GroupType_k__BackingField; // 0x24
		::System::UInt32 _ChallengeID_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::ChallengeGroupType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA__CTOR_OFFSET))(this, a1, a2);
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

		::Enum_3_71AA90D596A09AC8_1 get_FriendRecommendType()
		{
			return ((::Enum_3_71AA90D596A09AC8_1(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GET_FRIENDRECOMMENDTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GET_ISDATAREADY_OFFSET))(this);
		}

		::System::Void set_IsDataReady(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_SET_ISDATAREADY_OFFSET))(this, a1);
		}

		::System::Boolean get_CanRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GET_CANREFRESH_OFFSET))(this);
		}

		::System::Void set_CanRefresh(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_SET_CANREFRESH_OFFSET))(this, a1);
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

		::RPG::Client::SingleChallengeRecommendLineup* GetRecommendLineup(::System::Int32 a1)
		{
			return ((::RPG::Client::SingleChallengeRecommendLineup*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GETRECOMMENDLINEUP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>* GetLineupDetailInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_GETLINEUPDETAILINFO_OFFSET))(this, a1);
		}

		::System::Void ReportAction(::RPG::Client::LineupRecommendationReportActionType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LineupRecommendationReportActionType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA_REPORTACTION_OFFSET))(this, a1, a2);
		}

		::Struct_2_01F3B7B140C09CEE _CreateRecommendChallengeLineupsInfo(::Class_1_A7A42CB240A0440F_1* a1)
		{
			return ((::Struct_2_01F3B7B140C09CEE(*)(::PVOID, ::Class_1_A7A42CB240A0440F_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA__CREATERECOMMENDCHALLENGELINEUPSINFO_OFFSET))(this, a1);
		}

		::System::Void _OnGetRecommendChallengeLineups(::Struct_2_01F3B7B140C09CEE a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_01F3B7B140C09CEE))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA__ONGETRECOMMENDCHALLENGELINEUPS_OFFSET))(this, a1);
		}

		::System::String* _GetNameByUID(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA__GETNAMEBYUID_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>* _GetFriendRecommendLineupDetailScRsp(::Class_1_5EBF6005039A39B5* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>*(*)(::PVOID, ::Class_1_5EBF6005039A39B5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA__GETFRIENDRECOMMENDLINEUPDETAILSCRSP_OFFSET))(this, a1);
		}

		::System::Void _SyncRecommendLineup(::System::Int32 a1, ::Class_1_21DCD4640D389503_23* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_21DCD4640D389503_23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA__SYNCRECOMMENDLINEUP_OFFSET))(this, a1, a2);
		}
	};
}
