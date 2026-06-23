#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIRidusGotBooPageController_KeyPosition.h"
#include "unitysdk/System/Object.h"

class Class_1_5E46A14259E19455;

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS50_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14C838F0)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS50_1__UPDATEFEVERSCORE_B__1_OFFSET UNITYSDK_OFFSET(0x14C83900)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS50_1__UPDATEFEVERSCORE_B__2_OFFSET UNITYSDK_OFFSET(0x14C83930)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController___c__DisplayClass50_1_TypeDefinitionIndex = 40693;

	class UIRidusGotBooPageController___c__DisplayClass50_1 : public ::System::Object
	{
	public:
		::Class_1_5E46A14259E19455* keyPress; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS50_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateFeverScore_b__1(::Class_1_5E46A14259E19455* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_5E46A14259E19455*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS50_1__UPDATEFEVERSCORE_B__1_OFFSET))(this, x);
		}

		::System::Boolean _UpdateFeverScore_b__2(::MoleMole::UIRidusGotBooPageController_KeyPosition x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIRidusGotBooPageController_KeyPosition))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS50_1__UPDATEFEVERSCORE_B__2_OFFSET))(this, x);
		}
	};
}
