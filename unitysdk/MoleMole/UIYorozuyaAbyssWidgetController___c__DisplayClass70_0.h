#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E081FCEC8F87505A;
class Class_2_0A55B5A82A61DAFA_2;
class Class_2_1824EF69C8E376A3;
namespace MoleMole { class UILineupSelectContext; }
namespace MoleMole { class UIRoleSelectPageContext; }
namespace MoleMole { class UIYorozuyaAbyssWidgetController; }

#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS70_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1514BAC0)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS70_0__GOTOBEGINBATTLE_B__0_OFFSET UNITYSDK_OFFSET(0x1514C470)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS70_0__GOTOBEGINBATTLE_B__1_OFFSET UNITYSDK_OFFSET(0x1514BAD0)
#define MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS70_0__GOTOBEGINBATTLE_B__3_OFFSET UNITYSDK_OFFSET(0x1514BDF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaAbyssWidgetController___c__DisplayClass70_0_TypeDefinitionIndex = 68605;

	class UIYorozuyaAbyssWidgetController___c__DisplayClass70_0 : public ::System::Object
	{
	public:
		::MoleMole::UIYorozuyaAbyssWidgetController* __4__this; // 0x10
		::MoleMole::UILineupSelectContext* selectedPageData; // 0x18
		::Class_2_0A55B5A82A61DAFA_2* selectedConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS70_0__CTOR_OFFSET))(this);
		}

		::MoleMole::UIRoleSelectPageContext* _GotoBeginBattle_b__1(::System::Int32 selectIndex, ::Il2CppArray<::Class_2_1824EF69C8E376A3*>* currentSelected)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::Class_2_1824EF69C8E376A3*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS70_0__GOTOBEGINBATTLE_B__1_OFFSET))(this, selectIndex, currentSelected);
		}

		::System::Void _GotoBeginBattle_b__3(::Class_1_E081FCEC8F87505A* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS70_0__GOTOBEGINBATTLE_B__3_OFFSET))(this, data);
		}

		::System::Void _GotoBeginBattle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAABYSSWIDGETCONTROLLER___C__DISPLAYCLASS70_0__GOTOBEGINBATTLE_B__0_OFFSET))(this);
		}
	};
}
