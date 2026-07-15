#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_17CE1D53A378B249;
namespace RPG::Client { class ChooseDeliveryEntry; }

#define RPG_CLIENT_CHOOSEDELIVERYMODULE___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADF14A0)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE___C__DISPLAYCLASS20_0___ONCHOOSEDELIVERYSCRSP_B__0_OFFSET UNITYSDK_OFFSET(0x1ADF1FB0)
#define RPG_CLIENT_CHOOSEDELIVERYMODULE___C__DISPLAYCLASS20_0___ONCHOOSEDELIVERYSCRSP_B__1_OFFSET UNITYSDK_OFFSET(0x1ADF1FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChooseDeliveryModule___c__DisplayClass20_0_TypeDefinitionIndex = 60733;

	class ChooseDeliveryModule___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::Class_1_17CE1D53A378B249* rsp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnChooseDeliveryScRsp_b__0(::RPG::Client::ChooseDeliveryEntry* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChooseDeliveryEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE___C__DISPLAYCLASS20_0___ONCHOOSEDELIVERYSCRSP_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __OnChooseDeliveryScRsp_b__1(::RPG::Client::ChooseDeliveryEntry* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChooseDeliveryEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYMODULE___C__DISPLAYCLASS20_0___ONCHOOSEDELIVERYSCRSP_B__1_OFFSET))(this, a1);
		}
	};
}
