#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C2E1FDEE094F4F72;
namespace RPG::Client::Prop { class AdvMoneyManager; }

#define RPG_CLIENT_PROP_ADVMONEYMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAD82940)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER___C__DISPLAYCLASS15_0__LOGICTICK_B__0_OFFSET UNITYSDK_OFFSET(0xAD841A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AdvMoneyManager___c__DisplayClass15_0_TypeDefinitionIndex = 71689;

	class AdvMoneyManager___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::AdvMoneyManager* __4__this; // 0x10
		::Class_1_C2E1FDEE094F4F72* money; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _LogicTick_b__0(::System::Int32 effectMask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER___C__DISPLAYCLASS15_0__LOGICTICK_B__0_OFFSET))(this, effectMask);
		}
	};
}
