#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConditionChecker; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CONDITIONCHECKER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA0C82C0)
#define RPG_CLIENT_CONDITIONCHECKER___C__DISPLAYCLASS19_0__DOCHECKWITHPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0xA0C8350)

namespace RPG::Client
{
	inline static constexpr unsigned int ConditionChecker___c__DisplayClass19_0_TypeDefinitionIndex = 55265;

	class ConditionChecker___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::System::Boolean>*>* checkResultPromise; // 0x10
		::RPG::Client::ConditionChecker* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoCheckWithPromise_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER___C__DISPLAYCLASS19_0__DOCHECKWITHPROMISE_B__0_OFFSET))(this);
		}
	};
}
