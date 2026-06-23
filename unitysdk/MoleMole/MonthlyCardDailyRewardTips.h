#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_4865323EE33E9248;

#define MOLEMOLE_MONTHLYCARDDAILYREWARDTIPS_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x17DDC510)
#define MOLEMOLE_MONTHLYCARDDAILYREWARDTIPS_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x17DDC500)
#define MOLEMOLE_MONTHLYCARDDAILYREWARDTIPS_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x17DDC600)
#define MOLEMOLE_MONTHLYCARDDAILYREWARDTIPS_SETPOPPRIORITY_OFFSET UNITYSDK_OFFSET(0x17DDC5B0)
#define MOLEMOLE_MONTHLYCARDDAILYREWARDTIPS__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDC5A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonthlyCardDailyRewardTips_TypeDefinitionIndex = 49893;

	class MonthlyCardDailyRewardTips : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Class_1_4865323EE33E9248* popData; // 0x28
		::System::Int32 popPriority; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHLYCARDDAILYREWARDTIPS__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHLYCARDDAILYREWARDTIPS_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHLYCARDDAILYREWARDTIPS_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Void SetPopPriority(::System::Int32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHLYCARDDAILYREWARDTIPS_SETPOPPRIORITY_OFFSET))(this, priority);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONTHLYCARDDAILYREWARDTIPS_ONPROCESS_OFFSET))(this);
		}
	};
}
