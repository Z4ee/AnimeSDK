#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProtoScript/HollowShopType.h"
#include "unitysdk/System/Object.h"

class Class_1_0B54DAB695AF5065;
namespace MoleMole { class UIHollowShopWidgetChildWindowController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS68_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1961B070)
#define MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS68_0___BUY_B__0_OFFSET UNITYSDK_OFFSET(0x1961B080)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowShopWidgetChildWindowController___c__DisplayClass68_0_TypeDefinitionIndex = 65878;

	class UIHollowShopWidgetChildWindowController___c__DisplayClass68_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::UIHollowShopWidgetChildWindowController* __4__this; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_0B54DAB695AF5065*>* dics; // 0x20
		::System::Int32 uid; // 0x28
		::ProtoScript::HollowShopType shopType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS68_0__CTOR_OFFSET))(this);
		}

		::System::Void __Buy_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS68_0___BUY_B__0_OFFSET))(this);
		}
	};
}
