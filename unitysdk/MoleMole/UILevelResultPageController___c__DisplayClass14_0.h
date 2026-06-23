#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1692A510)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER___C__DISPLAYCLASS14_0__PLAYEXIT_B__0_OFFSET UNITYSDK_OFFSET(0x1692A520)
#define MOLEMOLE_UILEVELRESULTPAGECONTROLLER___C__DISPLAYCLASS14_0__PLAYEXIT_B__1_OFFSET UNITYSDK_OFFSET(0x1692A530)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultPageController___c__DisplayClass14_0_TypeDefinitionIndex = 47049;

	class UILevelResultPageController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayExit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER___C__DISPLAYCLASS14_0__PLAYEXIT_B__0_OFFSET))(this);
		}

		::System::Void _PlayExit_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTPAGECONTROLLER___C__DISPLAYCLASS14_0__PLAYEXIT_B__1_OFFSET))(this);
		}
	};
}
