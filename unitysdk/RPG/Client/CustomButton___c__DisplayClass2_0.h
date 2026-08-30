#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CustomButton; }
namespace System { class Action; }

#define RPG_CLIENT_CUSTOMBUTTON___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x192D2B40)
#define RPG_CLIENT_CUSTOMBUTTON___C__DISPLAYCLASS2_0__SUBSCRIBECLICKEVENTLISTENER_G__ONCLICK_0_OFFSET UNITYSDK_OFFSET(0x192D3520)
#define RPG_CLIENT_CUSTOMBUTTON___C__DISPLAYCLASS2_0__SUBSCRIBECLICKEVENTLISTENER_G__UNSUBSCRIBE_1_OFFSET UNITYSDK_OFFSET(0x192D35D0)

namespace RPG::Client
{
	inline static constexpr unsigned int CustomButton___c__DisplayClass2_0_TypeDefinitionIndex = 72447;

	class CustomButton___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::CustomButton* __4__this; // 0x10
		::System::Action* call; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _SubscribeClickEventListener_g__OnClick_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON___C__DISPLAYCLASS2_0__SUBSCRIBECLICKEVENTLISTENER_G__ONCLICK_0_OFFSET))(this);
		}

		::System::Void _SubscribeClickEventListener_g__Unsubscribe_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMBUTTON___C__DISPLAYCLASS2_0__SUBSCRIBECLICKEVENTLISTENER_G__UNSUBSCRIBE_1_OFFSET))(this);
		}
	};
}
