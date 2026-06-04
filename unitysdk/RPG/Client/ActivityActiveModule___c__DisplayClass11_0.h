#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EFF6ABE3B36522D9;
namespace RPG::Client { class ActiveActivityData; }

#define RPG_CLIENT_ACTIVITYACTIVEMODULE___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB0831C0)
#define RPG_CLIENT_ACTIVITYACTIVEMODULE___C__DISPLAYCLASS11_0___SYNCACTIVITYDATA_B__0_OFFSET UNITYSDK_OFFSET(0xB083360)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityActiveModule___c__DisplayClass11_0_TypeDefinitionIndex = 57382;

	class ActivityActiveModule___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::Class_1_EFF6ABE3B36522D9* proto; // 0x10

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
