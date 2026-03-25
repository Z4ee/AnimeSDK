#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Promises/TimeData.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PROMISES_PROMISETIMER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18348EE0)
#define RPG_CLIENT_PROMISES_PROMISETIMER___C__DISPLAYCLASS3_0__WAITFOR_B__0_OFFSET UNITYSDK_OFFSET(0x18349570)

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int PromiseTimer___c__DisplayClass3_0_TypeDefinitionIndex = 9605;

	class PromiseTimer___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Single seconds; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISETIMER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _WaitFor_b__0(::RPG::Client::Promises::TimeData t)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Promises::TimeData))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISETIMER___C__DISPLAYCLASS3_0__WAITFOR_B__0_OFFSET))(this, t);
		}
	};
}
