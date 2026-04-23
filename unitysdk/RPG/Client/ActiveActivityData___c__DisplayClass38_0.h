#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActiveActivityBenefitData; }

#define RPG_CLIENT_ACTIVEACTIVITYDATA___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9AA1390)
#define RPG_CLIENT_ACTIVEACTIVITYDATA___C__DISPLAYCLASS38_0__SYNCFROM_B__0_OFFSET UNITYSDK_OFFSET(0x9AA15D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActiveActivityData___c__DisplayClass38_0_TypeDefinitionIndex = 56602;

	class ActiveActivityData___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::System::UInt32 takenRewardID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SyncFrom_b__0(::RPG::Client::ActiveActivityBenefitData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActiveActivityBenefitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYDATA___C__DISPLAYCLASS38_0__SYNCFROM_B__0_OFFSET))(this, x);
		}
	};
}
