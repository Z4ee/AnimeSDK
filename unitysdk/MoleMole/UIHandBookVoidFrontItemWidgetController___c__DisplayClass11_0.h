#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIHANDBOOKVOIDFRONTITEMWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17DAEED0)
#define MOLEMOLE_UIHANDBOOKVOIDFRONTITEMWIDGETCONTROLLER___C__DISPLAYCLASS11_0__ONCLICKJUMP_B__0_OFFSET UNITYSDK_OFFSET(0x17DAEEE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookVoidFrontItemWidgetController___c__DisplayClass11_0_TypeDefinitionIndex = 73918;

	class UIHandBookVoidFrontItemWidgetController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTITEMWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickJump_b__0(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKVOIDFRONTITEMWIDGETCONTROLLER___C__DISPLAYCLASS11_0__ONCLICKJUMP_B__0_OFFSET))(this, success);
		}
	};
}
