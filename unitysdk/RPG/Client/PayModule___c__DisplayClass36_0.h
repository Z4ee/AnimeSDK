#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PayProductResult.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PayModule; }
namespace RPG::Client { class Product; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAC44030)
#define RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS36_0__PAY_B__0_OFFSET UNITYSDK_OFFSET(0xAC45080)

namespace RPG::Client
{
	inline static constexpr unsigned int PayModule___c__DisplayClass36_0_TypeDefinitionIndex = 61194;

	class PayModule___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::RPG::Client::Product* product; // 0x10
		::System::Action_1<::RPG::Client::PayProductResult>* onGetPayProductResult; // 0x18
		::RPG::Client::PayModule* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _Pay_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS36_0__PAY_B__0_OFFSET))(this);
		}
	};
}
