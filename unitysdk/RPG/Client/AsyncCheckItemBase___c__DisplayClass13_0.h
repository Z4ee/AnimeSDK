#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AsyncCheckItemBase; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define RPG_CLIENT_ASYNCCHECKITEMBASE___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B339970)
#define RPG_CLIENT_ASYNCCHECKITEMBASE___C__DISPLAYCLASS13_0__DOCHECKWITHPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0x1B339BF0)

namespace RPG::Client
{
	inline static constexpr unsigned int AsyncCheckItemBase___c__DisplayClass13_0_TypeDefinitionIndex = 60005;

	class AsyncCheckItemBase___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::Client::AsyncCheckItemBase* __4__this; // 0x10
		::RPG::Client::Promises::Promise_1<::System::Boolean>* resultPromise; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoCheckWithPromise_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASYNCCHECKITEMBASE___C__DISPLAYCLASS13_0__DOCHECKWITHPROMISE_B__0_OFFSET))(this);
		}
	};
}
