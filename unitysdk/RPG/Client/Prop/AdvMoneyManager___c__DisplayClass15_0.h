#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C2E1FDEE094F4F72;
namespace RPG::Client::Prop { class AdvMoneyManager; }

#define RPG_CLIENT_PROP_ADVMONEYMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDBCED20)
#define RPG_CLIENT_PROP_ADVMONEYMANAGER___C__DISPLAYCLASS15_0__LOGICTICK_B__0_OFFSET UNITYSDK_OFFSET(0xDBD0530)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AdvMoneyManager___c__DisplayClass15_0_TypeDefinitionIndex = 77721;

	class AdvMoneyManager___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::Class_1_C2E1FDEE094F4F72* money; // 0x10
		::RPG::Client::Prop::AdvMoneyManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _LogicTick_b__0(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADVMONEYMANAGER___C__DISPLAYCLASS15_0__LOGICTICK_B__0_OFFSET))(this, a1);
		}
	};
}
