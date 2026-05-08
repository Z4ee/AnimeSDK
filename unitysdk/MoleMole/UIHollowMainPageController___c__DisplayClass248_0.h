#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS248_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15A3BA20)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS248_0__SETSYSTEMCLICKSTATE_B__0_OFFSET UNITYSDK_OFFSET(0x15A3BA30)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass248_0_TypeDefinitionIndex = 44947;

	class UIHollowMainPageController___c__DisplayClass248_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowMainPageController* __4__this; // 0x10
		::System::Action* clickAction; // 0x18
		::System::Boolean openMask; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS248_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetSystemClickState_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS248_0__SETSYSTEMCLICKSTATE_B__0_OFFSET))(this);
		}
	};
}
