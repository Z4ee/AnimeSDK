#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarInfo; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamRecommendData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO_GETCANSHOWRECOMMENDDATALISTCOUNT_OFFSET UNITYSDK_OFFSET(0x9B82170)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO_GETRECOMMENDDATALISTBYTAGLIST_OFFSET UNITYSDK_OFFSET(0x9B81590)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO_GETRECOMMENDDATALISTSORTEDBYWEIGHT_OFFSET UNITYSDK_OFFSET(0x9B7D330)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9B813B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9B823F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO__HASMATCHEDTAGONCAPTAIN_OFFSET UNITYSDK_OFFSET(0x9B81BD0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTeamRecommendInfo_TypeDefinitionIndex = 69143;

	class IdleLiveTeamRecommendInfo : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* _AvatarInfo; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*>* _RecommendDataList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* avatarInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO_INIT_OFFSET))(this, avatarInfo);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*>* GetRecommendDataListByTagList(::System::Collections::Generic::List_1<::RPG::GameCore::ILBattleAvatarTag>* tagList, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* teamInfo)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ILBattleAvatarTag>*, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO_GETRECOMMENDDATALISTBYTAGLIST_OFFSET))(this, tagList, teamInfo);
		}

		::System::Int32 GetCanShowRecommendDataListCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO_GETCANSHOWRECOMMENDDATALISTCOUNT_OFFSET))(this);
		}

		::System::Boolean _HasMatchedTagOnCaptain(::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData* data, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*>* allAvatarDatas, ::System::Collections::Generic::List_1<::RPG::GameCore::ILBattleAvatarTag>* tagList)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::ILBattleAvatarTag>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO__HASMATCHEDTAGONCAPTAIN_OFFSET))(this, data, allAvatarDatas, tagList);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*>* GetRecommendDataListSortedByWeight(::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* teamInfo)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO_GETRECOMMENDDATALISTSORTEDBYWEIGHT_OFFSET))(this, teamInfo);
		}
	};
}
