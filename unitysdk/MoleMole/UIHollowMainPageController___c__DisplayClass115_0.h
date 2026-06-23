#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_A6F8D19602712D95;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigChessboardPlayStartPerform; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS115_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1697C210)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS115_0__SHOWSTARTPERFORMANCE_B__0_OFFSET UNITYSDK_OFFSET(0x1697C220)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS115_0__SHOWSTARTPERFORMANCE_B__2_OFFSET UNITYSDK_OFFSET(0x1697C4A0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS115_0__SHOWSTARTPERFORMANCE_B__3_OFFSET UNITYSDK_OFFSET(0x1697C450)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass115_0_TypeDefinitionIndex = 78280;

	class UIHollowMainPageController___c__DisplayClass115_0 : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigChessboardPlayStartPerform* config; // 0x10
		::MoleMole::UIHollowMainPageController* __4__this; // 0x18
		::Class_5_A6F8D19602712D95* pieceCtrl; // 0x20
		::System::Action* endCB; // 0x28
		::System::Action* __9__3; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS115_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowStartPerformance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS115_0__SHOWSTARTPERFORMANCE_B__0_OFFSET))(this);
		}

		::System::Void _ShowStartPerformance_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS115_0__SHOWSTARTPERFORMANCE_B__3_OFFSET))(this);
		}

		::System::Void _ShowStartPerformance_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS115_0__SHOWSTARTPERFORMANCE_B__2_OFFSET))(this);
		}
	};
}
