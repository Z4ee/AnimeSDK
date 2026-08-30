#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConditionChecker; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define RPG_CLIENT_CONDITIONCHECKER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A290130)
#define RPG_CLIENT_CONDITIONCHECKER___C__DISPLAYCLASS7_0__DOASYNCCHECK_B__0_OFFSET UNITYSDK_OFFSET(0x1A291550)

namespace RPG::Client
{
	inline static constexpr unsigned int ConditionChecker___c__DisplayClass7_0_TypeDefinitionIndex = 60037;

	class ConditionChecker___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::System::Boolean>* asyncCheckResultPromise; // 0x10
		::RPG::Client::ConditionChecker* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoAsyncCheck_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER___C__DISPLAYCLASS7_0__DOASYNCCHECK_B__0_OFFSET))(this);
		}
	};
}
