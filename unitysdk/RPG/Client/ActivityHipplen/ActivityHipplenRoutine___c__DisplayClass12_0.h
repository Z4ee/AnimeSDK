#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE___C__DISPLAYCLASS12_0__CHECKWORKDATAFINISH_B__0_OFFSET UNITYSDK_OFFSET(0xC556970)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC5568E0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenRoutine___c__DisplayClass12_0_TypeDefinitionIndex = 75305;

	class ActivityHipplenRoutine___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CheckWorkDataFinish_b__0(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE___C__DISPLAYCLASS12_0__CHECKWORKDATAFINISH_B__0_OFFSET))(this, a1);
		}
	};
}
