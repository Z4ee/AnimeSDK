#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER___C__DISPLAYCLASS9_0__BINDONCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x17704CA0)
#define MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x177040C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDoubleEliteMonsterWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 63794;

	class UIDoubleEliteMonsterWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Action* onClick; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _BindOnClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER___C__DISPLAYCLASS9_0__BINDONCLICK_B__0_OFFSET))(this);
		}
	};
}
