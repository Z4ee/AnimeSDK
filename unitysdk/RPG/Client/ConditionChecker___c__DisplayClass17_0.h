#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ConditionChecker; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CONDITIONCHECKER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x941A2E0)
#define RPG_CLIENT_CONDITIONCHECKER___C__DISPLAYCLASS17_0__DOCHECKWITHPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0x941A370)

namespace RPG::Client
{
	inline static constexpr unsigned int ConditionChecker___c__DisplayClass17_0_TypeDefinitionIndex = 48516;

	class ConditionChecker___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::RPG::Client::ConditionChecker* __4__this; // 0x10
		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::System::Boolean>*>* checkResultPromise; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoCheckWithPromise_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONDITIONCHECKER___C__DISPLAYCLASS17_0__DOCHECKWITHPROMISE_B__0_OFFSET))(this);
		}
	};
}
