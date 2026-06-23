#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_7C378C8BB7097B16;

#define MOLEMOLE_DAILYQUESTSCHEDULEPLANCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x158D6020)

namespace MoleMole
{
	inline static constexpr unsigned int DailyQuestSchedulePlanContext_TypeDefinitionIndex = 44638;

	class DailyQuestSchedulePlanContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_7C378C8BB7097B16* Quest; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DAILYQUESTSCHEDULEPLANCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
