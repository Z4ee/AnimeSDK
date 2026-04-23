#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IInteractionProvider; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9BDCBA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE_HAVENEWINTERACTION_OFFSET UNITYSDK_OFFSET(0x9BDC880)
#define RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE_POPINTERACTIONID_OFFSET UNITYSDK_OFFSET(0x9BDC980)
#define RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE_SETENABLE_OFFSET UNITYSDK_OFFSET(0x9BDCA80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE_UPDATEINTERACTIONS_OFFSET UNITYSDK_OFFSET(0x9BDC760)
#define RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x9BDC630)
#define RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE__ONPERFORMGIFTADDED_OFFSET UNITYSDK_OFFSET(0x9BDC6A0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int PerformShowGiftService_TypeDefinitionIndex = 69384;

	class PerformShowGiftService : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IInteractionProvider* _InteractionProvider; // 0x10

		::System::Void _ctor(::RPG::Client::ActivityIdleLive::IInteractionProvider* provider)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IInteractionProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE__CTOR_OFFSET))(this, provider);
		}

		::System::Void _OnPerformGiftAdded(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE__ONPERFORMGIFTADDED_OFFSET))(this, param);
		}

		::System::Boolean HaveNewInteraction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE_HAVENEWINTERACTION_OFFSET))(this);
		}

		::System::UInt32 PopInteractionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE_POPINTERACTIONID_OFFSET))(this);
		}

		::System::Void UpdateInteractions(::System::UInt32 interactionId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE_UPDATEINTERACTIONS_OFFSET))(this, interactionId);
		}

		::System::Void SetEnable(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE_SETENABLE_OFFSET))(this, isEnable);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_PERFORMSHOWGIFTSERVICE_DISPOSE_OFFSET))(this);
		}
	};
}
