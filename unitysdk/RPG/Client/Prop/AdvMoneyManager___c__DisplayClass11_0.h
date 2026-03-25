#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C2E1FDEE094F4F72_2;
namespace RPG::Client::Prop { class AdvMoneyManager; }

#define RPG_CLIENT_PROP_ADVMONEYMANAGER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA005890)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER___C__DISPLAYCLASS11_0__LOGICTICK_B__0_OFFSET UNITYSDK_OFFSET(0xA0069D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AdvMoneyManager___c__DisplayClass11_0_TypeDefinitionIndex = 63643;

	class AdvMoneyManager___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::Class_1_C2E1FDEE094F4F72_2* money; // 0x10
		::RPG::Client::Prop::AdvMoneyManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _LogicTick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER___C__DISPLAYCLASS11_0__LOGICTICK_B__0_OFFSET))(this);
		}
	};
}
