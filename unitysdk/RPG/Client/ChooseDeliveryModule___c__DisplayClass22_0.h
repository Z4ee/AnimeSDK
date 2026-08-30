#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChooseDeliveryEntry; }
namespace RPG::Client { class ChooseDeliveryModule; }

#define RPG_CLIENT_CHOOSEDELIVERYMODULE___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBFAF00)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE___C__DISPLAYCLASS22_0___TRYENQUEUETOAST_B__0_OFFSET UNITYSDK_OFFSET(0x1BBFBAC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChooseDeliveryModule___c__DisplayClass22_0_TypeDefinitionIndex = 63588;

	class ChooseDeliveryModule___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChooseDeliveryModule* __4__this; // 0x10
		::RPG::Client::ChooseDeliveryEntry* entry; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void __TryEnqueueToast_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE___C__DISPLAYCLASS22_0___TRYENQUEUETOAST_B__0_OFFSET))(this);
		}
	};
}
