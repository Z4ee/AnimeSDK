#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ACTIVITYIDLELIVE_THANKGIFTSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A1984B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_THANKGIFTSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A198190)
#define RPG_CLIENT_ACTIVITYIDLELIVE_THANKGIFTSERVICE__ONTHANKGIFT_OFFSET UNITYSDK_OFFSET(0x1A198220)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int ThankGiftService_TypeDefinitionIndex = 71755;

	class ThankGiftService : public ::System::Object
	{
	public:
		// static const ::System::Int32 _MAX_RECORD_GIFT_THANK_NUM = 0x8; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_THANKGIFTSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void _OnThankGift(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_THANKGIFTSERVICE__ONTHANKGIFT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_THANKGIFTSERVICE_DISPOSE_OFFSET))(this);
		}
	};
}
