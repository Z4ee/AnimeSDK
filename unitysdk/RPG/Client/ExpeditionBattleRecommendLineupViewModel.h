#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LineupRecommendationReportActionType.h"
#include "unitysdk/System/Object.h"

class Class_1_65EC9CACFF41765E;
class Class_1_79CDF1654A8D2474;
class Class_1_B2C6C1C7059BA141;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ExpeditionBattleDisplayAvatar; }
namespace RPG::Client { class ExpeditionBattleLineupRouteInfo; }
namespace RPG::Client { class ExpeditionBattleMap; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B893190)
#define RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_GETLINEUPDETAILINFO_OFFSET UNITYSDK_OFFSET(0x1B893BF0)
#define RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_GETLINEUPPLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1B8934C0)
#define RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_GETLINEUPRANKSTATENAME_OFFSET UNITYSDK_OFFSET(0x1B8944F0)
#define RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_GETLINEUPROUTEINFOBYSORTEDINDEX_OFFSET UNITYSDK_OFFSET(0x1B8942B0)
#define RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_GETLINEUPROUTEINFO_OFFSET UNITYSDK_OFFSET(0x1B893920)
#define RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_GETLINEUPSTARCOUNT_OFFSET UNITYSDK_OFFSET(0x1B894420)
#define RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_GETRECOMMENDAVATARITEMS_OFFSET UNITYSDK_OFFSET(0x1B893CD0)
#define RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_GETRECOMMENDMYOWNEDAVATARITEMS_OFFSET UNITYSDK_OFFSET(0x1B894590)
#define RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_GET_CANREFRESH_OFFSET UNITYSDK_OFFSET(0x1B8930D0)
#define RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_GET_COUNTOFLINEUPS_OFFSET UNITYSDK_OFFSET(0x1B892F10)
#define RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x1B893050)
#define RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_GET_ROUTECOUNT_OFFSET UNITYSDK_OFFSET(0x1B893130)
#define RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_REFRESH_OFFSET UNITYSDK_OFFSET(0x1B893380)
#define RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_REPORTACTION_OFFSET UNITYSDK_OFFSET(0x1B893C50)
#define RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_SORTRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0x1B893460)
#define RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8932F0)
#define RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL__ISVALIDSORTEDINDEX_OFFSET UNITYSDK_OFFSET(0x1B893630)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleRecommendLineupViewModel_TypeDefinitionIndex = 64012;

	class ExpeditionBattleRecommendLineupViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* _SortedIndices; // 0x10
		::RPG::Client::ExpeditionBattleMap* _Map; // 0x18
		::Class_1_B2C6C1C7059BA141* _Recommendation; // 0x20
		::Class_1_79CDF1654A8D2474* _RecommendAvatarService; // 0x28
		::System::UInt32 _MapID; // 0x30

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::ExpeditionBattleMap* a2, ::Class_1_79CDF1654A8D2474* a3, ::Class_1_B2C6C1C7059BA141* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::ExpeditionBattleMap*, ::Class_1_79CDF1654A8D2474*, ::Class_1_B2C6C1C7059BA141*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 get_CountOfLineups()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_GET_COUNTOFLINEUPS_OFFSET))(this);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_GET_ISDATAREADY_OFFSET))(this);
		}

		::System::Boolean get_CanRefresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_GET_CANREFRESH_OFFSET))(this);
		}

		::System::Int32 get_RouteCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_GET_ROUTECOUNT_OFFSET))(this);
		}

		static ::RPG::Client::ExpeditionBattleRecommendLineupViewModel* Create(::System::UInt32 a1, ::Class_1_65EC9CACFF41765E* a2, ::Class_1_79CDF1654A8D2474* a3, ::Class_1_B2C6C1C7059BA141* a4)
		{
			return ((::RPG::Client::ExpeditionBattleRecommendLineupViewModel*(*)(::System::UInt32, ::Class_1_65EC9CACFF41765E*, ::Class_1_79CDF1654A8D2474*, ::Class_1_B2C6C1C7059BA141*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise* Refresh()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_REFRESH_OFFSET))(this);
		}

		::System::Void SortRecommendation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_SORTRECOMMENDATION_OFFSET))(this);
		}

		::RPG::Client::PlayerBriefDisplayData* GetLineupPlayerBriefDisplayData(::System::Int32 a1)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_GETLINEUPPLAYERBRIEFDISPLAYDATA_OFFSET))(this, a1);
		}

		::System::Boolean _IsValidSortedIndex(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL__ISVALIDSORTEDINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleLineupRouteInfo* GetLineupRouteInfo(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::ExpeditionBattleLineupRouteInfo*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_GETLINEUPROUTEINFO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>* GetLineupDetailInfo(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_GETLINEUPDETAILINFO_OFFSET))(this, a1);
		}

		::System::Void ReportAction(::RPG::Client::LineupRecommendationReportActionType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LineupRecommendationReportActionType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_REPORTACTION_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleDisplayAvatar*>* GetRecommendAvatarItems(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleDisplayAvatar*>*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_GETRECOMMENDAVATARITEMS_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ExpeditionBattleLineupRouteInfo* GetLineupRouteInfoBySortedIndex(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::ExpeditionBattleLineupRouteInfo*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_GETLINEUPROUTEINFOBYSORTEDINDEX_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetLineupStarCount(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_GETLINEUPSTARCOUNT_OFFSET))(this, a1);
		}

		::System::String* GetLineupRankStateName(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_GETLINEUPRANKSTATENAME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleDisplayAvatar*>* GetRecommendMyOwnedAvatarItems(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ExpeditionBattleDisplayAvatar*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLERECOMMENDLINEUPVIEWMODEL_GETRECOMMENDMYOWNEDAVATARITEMS_OFFSET))(this, a1, a2);
		}
	};
}
