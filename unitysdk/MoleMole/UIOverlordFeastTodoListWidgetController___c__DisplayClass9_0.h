#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIOverlordFeastTodoListWidgetController; }

#define MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14D99310)
#define MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER___C__DISPLAYCLASS9_0__SETQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x14D99320)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastTodoListWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 53836;

	class UIOverlordFeastTodoListWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIOverlordFeastTodoListWidgetController* __4__this; // 0x10
		::System::Int32 tabIndex; // 0x18
		::System::Int32 questID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetQuest_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTTODOLISTWIDGETCONTROLLER___C__DISPLAYCLASS9_0__SETQUEST_B__0_OFFSET))(this);
		}
	};
}
