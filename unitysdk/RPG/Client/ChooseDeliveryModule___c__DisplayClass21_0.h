#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChooseDeliveryEntry; }

#define RPG_CLIENT_CHOOSEDELIVERYMODULE___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBFAEF0)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE___C__DISPLAYCLASS21_0___DOPENDNOTICE_B__0_OFFSET UNITYSDK_OFFSET(0x1BBFBA90)

namespace RPG::Client
{
	inline static constexpr unsigned int ChooseDeliveryModule___c__DisplayClass21_0_TypeDefinitionIndex = 63587;

	class ChooseDeliveryModule___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChooseDeliveryEntry* entry; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __DoPendNotice_b__0(::RPG::Client::ChooseDeliveryEntry* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChooseDeliveryEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE___C__DISPLAYCLASS21_0___DOPENDNOTICE_B__0_OFFSET))(this, a1);
		}
	};
}
