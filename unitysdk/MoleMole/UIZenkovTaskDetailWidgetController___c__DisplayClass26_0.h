#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_175;
namespace MoleMole { class UIZenkovTaskDetailWidgetController; }

#define MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS26_0__CREATETASKDETAILITEMTIPCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x162F2220)
#define MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162F2210)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTaskDetailWidgetController___c__DisplayClass26_0_TypeDefinitionIndex = 87643;

	class UIZenkovTaskDetailWidgetController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovTaskDetailWidgetController* __4__this; // 0x10
		::System::Int32 itemId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateTaskDetailItemTipCallback_b__0(::Class_0_16E4307DCC419505_175* c)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTASKDETAILWIDGETCONTROLLER___C__DISPLAYCLASS26_0__CREATETASKDETAILITEMTIPCALLBACK_B__0_OFFSET))(this, c);
		}
	};
}
