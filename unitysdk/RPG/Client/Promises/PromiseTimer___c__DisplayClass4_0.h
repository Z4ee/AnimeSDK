#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Promises/TimeData.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PROMISES_PROMISETIMER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C65E660)
#define RPG_CLIENT_PROMISES_PROMISETIMER___C__DISPLAYCLASS4_0__WAITWHILE_B__0_OFFSET UNITYSDK_OFFSET(0x1C65EC20)

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int PromiseTimer___c__DisplayClass4_0_TypeDefinitionIndex = 9848;

	class PromiseTimer___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Func_2<::RPG::Client::Promises::TimeData, ::System::Boolean>* predicate; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISETIMER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _WaitWhile_b__0(::RPG::Client::Promises::TimeData a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Promises::TimeData))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISETIMER___C__DISPLAYCLASS4_0__WAITWHILE_B__0_OFFSET))(this, a1);
		}
	};
}
