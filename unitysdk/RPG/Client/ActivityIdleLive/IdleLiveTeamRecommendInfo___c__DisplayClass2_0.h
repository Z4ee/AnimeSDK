#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamRecommendData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9B823A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS2_0__GETCANSHOWRECOMMENDDATALISTCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x9B82580)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTeamRecommendInfo___c__DisplayClass2_0_TypeDefinitionIndex = 69145;

	class IdleLiveTeamRecommendInfo___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*>* allAvatarDatas; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCanShowRecommendDataListCount_b__0(::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS2_0__GETCANSHOWRECOMMENDDATALISTCOUNT_B__0_OFFSET))(this, data);
		}
	};
}
