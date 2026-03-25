#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE___C__DISPLAYCLASS12_0__CHECKWORKDATAFINISH_B__0_OFFSET UNITYSDK_OFFSET(0x8F2B850)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8F2B7C0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenRoutine___c__DisplayClass12_0_TypeDefinitionIndex = 61753;

	class ActivityHipplenRoutine___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CheckWorkDataFinish_b__0(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE___C__DISPLAYCLASS12_0__CHECKWORKDATAFINISH_B__0_OFFSET))(this, x);
		}
	};
}
