#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class FailGuide; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFAILGUIDESERVICE_GETACTIVEFAILGUIDE_OFFSET UNITYSDK_OFFSET(0x9B54FA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFAILGUIDESERVICE_ISCATCHUPGUIDE_OFFSET UNITYSDK_OFFSET(0x9B55190)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFAILGUIDESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x9B54BE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFAILGUIDESERVICE__INITCHAIN_OFFSET UNITYSDK_OFFSET(0x9B54C50)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveFailGuideService_TypeDefinitionIndex = 69448;

	class IdleLiveFailGuideService : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveNode* _Node; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::FailGuide*>* _failGuideChain; // 0x18
		::System::UInt64 _TotalGotCrystalNum; // 0x20

		::System::Void _ctor(::System::UInt64 totalGotCrystalNum, ::RPG::Client::ActivityIdleLive::IdleLiveNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::RPG::Client::ActivityIdleLive::IdleLiveNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFAILGUIDESERVICE__CTOR_OFFSET))(this, totalGotCrystalNum, node);
		}

		::System::Void _InitChain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFAILGUIDESERVICE__INITCHAIN_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::FailGuide* GetActiveFailGuide()
		{
			return ((::RPG::Client::ActivityIdleLive::FailGuide*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFAILGUIDESERVICE_GETACTIVEFAILGUIDE_OFFSET))(this);
		}

		::System::Boolean IsCatchUpGuide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFAILGUIDESERVICE_ISCATCHUPGUIDE_OFFSET))(this);
		}
	};
}
