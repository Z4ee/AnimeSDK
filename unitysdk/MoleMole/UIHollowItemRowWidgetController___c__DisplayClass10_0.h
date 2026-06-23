#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__BINDCLICKCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x169111F0)
#define MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x169111E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowItemRowWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 70227;

	class UIHollowItemRowWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _BindClickCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWITEMROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__BINDCLICKCALLBACK_B__0_OFFSET))(this);
		}
	};
}
