#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigHollowChessboardSystem; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS198_0__CTOR_OFFSET UNITYSDK_OFFSET(0x163851D0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS198_0__UPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x163851E0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS198_0__UPDATE_B__1_OFFSET UNITYSDK_OFFSET(0x16385220)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass198_0_TypeDefinitionIndex = 44944;

	class UIHollowMainPageController___c__DisplayClass198_0 : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigHollowChessboardSystem* config; // 0x10
		::MoleMole::UIHollowMainPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS198_0__CTOR_OFFSET))(this);
		}

		::System::Void _Update_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS198_0__UPDATE_B__0_OFFSET))(this);
		}

		::System::Void _Update_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS198_0__UPDATE_B__1_OFFSET))(this);
		}
	};
}
