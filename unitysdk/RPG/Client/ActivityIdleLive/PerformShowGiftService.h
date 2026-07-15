#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IInteractionProvider; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A189D30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE_HAVENEWINTERACTION_OFFSET UNITYSDK_OFFSET(0x1A189920)
#define RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE_POPINTERACTIONID_OFFSET UNITYSDK_OFFSET(0x1A189A70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE_SETENABLE_OFFSET UNITYSDK_OFFSET(0x1A189BC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE_UPDATEINTERACTIONS_OFFSET UNITYSDK_OFFSET(0x1A1897B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A189670)
#define RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE__ONPERFORMGIFTADDED_OFFSET UNITYSDK_OFFSET(0x1A1896F0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int PerformShowGiftService_TypeDefinitionIndex = 71719;

	class PerformShowGiftService : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IInteractionProvider* _InteractionProvider; // 0x10

		::System::Void _ctor(::RPG::Client::ActivityIdleLive::IInteractionProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IInteractionProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _OnPerformGiftAdded(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE__ONPERFORMGIFTADDED_OFFSET))(this, a1);
		}

		::System::Boolean HaveNewInteraction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE_HAVENEWINTERACTION_OFFSET))(this);
		}

		::System::UInt32 PopInteractionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE_POPINTERACTIONID_OFFSET))(this);
		}

		::System::Void UpdateInteractions(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE_UPDATEINTERACTIONS_OFFSET))(this, a1);
		}

		::System::Void SetEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE_SETENABLE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE_DISPOSE_OFFSET))(this);
		}
	};
}
