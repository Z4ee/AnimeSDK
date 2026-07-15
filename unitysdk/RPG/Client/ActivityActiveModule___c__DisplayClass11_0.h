#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3714832A39691304_1;
namespace RPG::Client { class ActiveActivityData; }

#define RPG_CLIENT_ACTIVITYACTIVEMODULE___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x194A7C30)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE___C__DISPLAYCLASS11_0___SYNCACTIVITYDATA_B__0_OFFSET UNITYSDK_OFFSET(0x194A7D10)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityActiveModule___c__DisplayClass11_0_TypeDefinitionIndex = 58644;

	class ActivityActiveModule___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::Class_1_3714832A39691304_1* proto; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncActivityData_b__0(::RPG::Client::ActiveActivityData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActiveActivityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYACTIVEMODULE___C__DISPLAYCLASS11_0___SYNCACTIVITYDATA_B__0_OFFSET))(this, a1);
		}
	};
}
