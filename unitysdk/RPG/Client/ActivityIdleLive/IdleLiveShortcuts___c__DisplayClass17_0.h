#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_29ADE9724E15BDC9;
namespace RPG::Client { class BaseGameFlow; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9B73600)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS___C__DISPLAYCLASS17_0___DOENTERGAMEFLOW_B__0_OFFSET UNITYSDK_OFFSET(0x9B737B0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveShortcuts___c__DisplayClass17_0_TypeDefinitionIndex = 69377;

	class IdleLiveShortcuts___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::Class_1_29ADE9724E15BDC9* gameFlowPrepareService; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void __DoEnterGameFlow_b__0(::RPG::Client::BaseGameFlow* gameflow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESHORTCUTS___C__DISPLAYCLASS17_0___DOENTERGAMEFLOW_B__0_OFFSET))(this, gameflow);
		}
	};
}
