#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamRecommendData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC5EB910)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS4_0__GETRECOMMENDDATALISTSORTEDBYWEIGHT_B__0_OFFSET UNITYSDK_OFFSET(0xC5EBD40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS4_0__GETRECOMMENDDATALISTSORTEDBYWEIGHT_B__1_OFFSET UNITYSDK_OFFSET(0xC5EBED0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS4_0__GETRECOMMENDDATALISTSORTEDBYWEIGHT_B__2_OFFSET UNITYSDK_OFFSET(0xC5EBF80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS4_0__GETRECOMMENDDATALISTSORTEDBYWEIGHT_B__4_OFFSET UNITYSDK_OFFSET(0xC5EBD70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS4_0__GETRECOMMENDDATALISTSORTEDBYWEIGHT_B__5_OFFSET UNITYSDK_OFFSET(0xC5EBE20)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTeamRecommendInfo___c__DisplayClass4_0_TypeDefinitionIndex = 74790;

	class IdleLiveTeamRecommendInfo___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*, ::System::UInt64>* powerByData; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*, ::System::UInt32>* weightByData; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*>* allAvatarDatas; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRecommendDataListSortedByWeight_b__0(::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS4_0__GETRECOMMENDDATALISTSORTEDBYWEIGHT_B__0_OFFSET))(this, a1);
		}

		::System::UInt64 _GetRecommendDataListSortedByWeight_b__4(::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS4_0__GETRECOMMENDDATALISTSORTEDBYWEIGHT_B__4_OFFSET))(this, a1);
		}

		::System::UInt32 _GetRecommendDataListSortedByWeight_b__5(::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS4_0__GETRECOMMENDDATALISTSORTEDBYWEIGHT_B__5_OFFSET))(this, a1);
		}

		::System::UInt64 _GetRecommendDataListSortedByWeight_b__1(::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS4_0__GETRECOMMENDDATALISTSORTEDBYWEIGHT_B__1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetRecommendDataListSortedByWeight_b__2(::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMRECOMMENDINFO___C__DISPLAYCLASS4_0__GETRECOMMENDDATALISTSORTEDBYWEIGHT_B__2_OFFSET))(this, a1);
		}
	};
}
