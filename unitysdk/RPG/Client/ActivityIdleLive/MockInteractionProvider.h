#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ACTIVITYIDLELIVE_MOCKINTERACTIONPROVIDER_CREATE_OFFSET UNITYSDK_OFFSET(0xC5F8490)
#define RPG_CLIENT_ACTIVITYIDLELIVE_MOCKINTERACTIONPROVIDER_HAVENEWINTERACTION_OFFSET UNITYSDK_OFFSET(0xC5F8510)
#define RPG_CLIENT_ACTIVITYIDLELIVE_MOCKINTERACTIONPROVIDER_POPINTERACTIONID_OFFSET UNITYSDK_OFFSET(0xC5F8550)
#define RPG_CLIENT_ACTIVITYIDLELIVE_MOCKINTERACTIONPROVIDER_SETENABLE_OFFSET UNITYSDK_OFFSET(0xC5F85F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_MOCKINTERACTIONPROVIDER_UPDATEINTERACTIONS_OFFSET UNITYSDK_OFFSET(0xC5F85A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_MOCKINTERACTIONPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xC5F8500)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int MockInteractionProvider_TypeDefinitionIndex = 75029;

	class MockInteractionProvider : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_MOCKINTERACTIONPROVIDER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::MockInteractionProvider* Create()
		{
			return ((::RPG::Client::ActivityIdleLive::MockInteractionProvider*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_MOCKINTERACTIONPROVIDER_CREATE_OFFSET))();
		}

		::System::Boolean HaveNewInteraction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_MOCKINTERACTIONPROVIDER_HAVENEWINTERACTION_OFFSET))(this);
		}

		::System::UInt32 PopInteractionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_MOCKINTERACTIONPROVIDER_POPINTERACTIONID_OFFSET))(this);
		}

		::System::Void UpdateInteractions(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_MOCKINTERACTIONPROVIDER_UPDATEINTERACTIONS_OFFSET))(this, a1);
		}

		::System::Void SetEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_MOCKINTERACTIONPROVIDER_SETENABLE_OFFSET))(this, a1);
		}
	};
}
