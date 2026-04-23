#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenWorkData; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE___C__DISPLAYCLASS11_0__CHECKWORKDATASELECTED_B__0_OFFSET UNITYSDK_OFFSET(0x9AFD0F0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9AFCF00)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenRoutine___c__DisplayClass11_0_TypeDefinitionIndex = 69662;

	class ActivityHipplenRoutine___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CheckWorkDataSelected_b__0(::RPG::Client::ActivityHipplen::ActivityHipplenWorkData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENROUTINE___C__DISPLAYCLASS11_0__CHECKWORKDATASELECTED_B__0_OFFSET))(this, x);
		}
	};
}
