#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F3B35B60B7BAFCAF_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPersonalInfoEditPopWindowController; }

#define MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1613ADF0)
#define MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__DOUPDATESTRATEGY_B__0_OFFSET UNITYSDK_OFFSET(0x1613AE00)

namespace MoleMole
{
	inline static constexpr unsigned int UIPersonalInfoEditPopWindowController___c__DisplayClass11_0_TypeDefinitionIndex = 45487;

	class UIPersonalInfoEditPopWindowController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPersonalInfoEditPopWindowController* __4__this; // 0x10
		::System::Int32 oldModuleID; // 0x18
		::System::Int32 newModuleID; // 0x1C
		::Enum_3_F3B35B60B7BAFCAF_1 newIdentityType; // 0x20
		::Enum_3_F3B35B60B7BAFCAF_1 oldIdentityType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoUpdateStrategy_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERSONALINFOEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__DOUPDATESTRATEGY_B__0_OFFSET))(this);
		}
	};
}
