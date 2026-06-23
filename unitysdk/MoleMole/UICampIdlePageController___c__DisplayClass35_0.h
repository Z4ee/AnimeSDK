#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E081FCEC8F87505A;
namespace MoleMole { class UILineupSelectContext; }

#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E6DE40)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS35_0__ONCLICKSTARTBATTLE_B__0_OFFSET UNITYSDK_OFFSET(0x15E6E240)
#define MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS35_0__ONCLICKSTARTBATTLE_B__1_OFFSET UNITYSDK_OFFSET(0x15E6DE50)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdlePageController___c__DisplayClass35_0_TypeDefinitionIndex = 86939;

	class UICampIdlePageController___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::MoleMole::UILineupSelectContext* context; // 0x10
		::System::Int32 questID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickStartBattle_b__1(::Class_1_E081FCEC8F87505A* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS35_0__ONCLICKSTARTBATTLE_B__1_OFFSET))(this, data);
		}

		::System::Void _OnClickStartBattle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEPAGECONTROLLER___C__DISPLAYCLASS35_0__ONCLICKSTARTBATTLE_B__0_OFFSET))(this);
		}
	};
}
