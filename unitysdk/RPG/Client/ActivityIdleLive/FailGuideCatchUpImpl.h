#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDECATCHUPIMPL_GETFAILHINTTEXT_OFFSET UNITYSDK_OFFSET(0x1B908070)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDECATCHUPIMPL_HASTRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x1B908170)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDECATCHUPIMPL_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B9081B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDECATCHUPIMPL_SHOULDTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B908120)
#define RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDECATCHUPIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B908060)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int FailGuideCatchUpImpl_TypeDefinitionIndex = 75080;

	class FailGuideCatchUpImpl : public ::System::Object
	{
	public:
		::System::UInt64 _TotalGotCrystalNum; // 0x10
		::System::UInt64 _RecommendGotCrystalNum; // 0x18

		::System::Void _ctor(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDECATCHUPIMPL__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID GetFailHintText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDECATCHUPIMPL_GETFAILHINTTEXT_OFFSET))(this);
		}

		::System::Boolean ShouldTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDECATCHUPIMPL_SHOULDTRIGGER_OFFSET))(this);
		}

		::System::Boolean HasTriggerAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDECATCHUPIMPL_HASTRIGGERACTION_OFFSET))(this);
		}

		::System::Void OnTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_FAILGUIDECATCHUPIMPL_ONTRIGGER_OFFSET))(this);
		}
	};
}
