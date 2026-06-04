#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PayProductResult.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PayModule; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC3554E0)
#define RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS63_0___DOPAYPRODUCT_B__0_OFFSET UNITYSDK_OFFSET(0xC355B60)

namespace RPG::Client
{
	inline static constexpr unsigned int PayModule___c__DisplayClass63_0_TypeDefinitionIndex = 62120;

	class PayModule___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::PayProductResult>* onGetPayProductResult; // 0x10
		::RPG::Client::PayModule* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
		}

		::System::Void __DoPayProduct_b__0(::RPG::Client::PayProductResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PayProductResult))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAYMODULE___C__DISPLAYCLASS63_0___DOPAYPRODUCT_B__0_OFFSET))(this, a1);
		}
	};
}
