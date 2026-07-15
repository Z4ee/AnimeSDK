#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_ROGUEMAGICMODULE___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19A0BF80)
#define RPG_CLIENT_ROGUEMAGICMODULE___C__DISPLAYCLASS20_0___SHOWCONFIRMSETTLEDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x19A10EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicModule___c__DisplayClass20_0_TypeDefinitionIndex = 64410;

	class RogueMagicModule___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void __ShowConfirmSettleDialog_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE___C__DISPLAYCLASS20_0___SHOWCONFIRMSETTLEDIALOG_B__0_OFFSET))(this);
		}
	};
}
