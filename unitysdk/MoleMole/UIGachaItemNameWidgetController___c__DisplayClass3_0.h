#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGachaItemNameWidgetContext; }

#define MOLEMOLE_UIGACHAITEMNAMEWIDGETCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16A8EF10)
#define MOLEMOLE_UIGACHAITEMNAMEWIDGETCONTROLLER___C__DISPLAYCLASS3_0__ONSHOW_B__0_OFFSET UNITYSDK_OFFSET(0x16A8EF20)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaItemNameWidgetController___c__DisplayClass3_0_TypeDefinitionIndex = 68597;

	class UIGachaItemNameWidgetController___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGachaItemNameWidgetContext* context; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMNAMEWIDGETCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnShow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAITEMNAMEWIDGETCONTROLLER___C__DISPLAYCLASS3_0__ONSHOW_B__0_OFFSET))(this);
		}
	};
}
