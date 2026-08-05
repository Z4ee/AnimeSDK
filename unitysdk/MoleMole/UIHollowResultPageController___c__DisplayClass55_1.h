#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowResultPageController___c__DisplayClass55_0; }

#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS55_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17C04620)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS55_1__REFRESHLEVELTXTVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x17C04630)
#define MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS55_1__REFRESHLEVELTXTVIEW_B__2_OFFSET UNITYSDK_OFFSET(0x17C046E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowResultPageController___c__DisplayClass55_1_TypeDefinitionIndex = 41917;

	class UIHollowResultPageController___c__DisplayClass55_1 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowResultPageController___c__DisplayClass55_0* CS___8__locals1; // 0x10
		::System::Single timer; // 0x18
		::System::Single realExpProgressDuration; // 0x1C
		::System::Single prvExpRatio; // 0x20
		::System::Single remainExpRatio; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS55_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS55_1__REFRESHLEVELTXTVIEW_B__1_OFFSET))(this);
		}

		::System::Void _RefreshLevelTxtView_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWRESULTPAGECONTROLLER___C__DISPLAYCLASS55_1__REFRESHLEVELTXTVIEW_B__2_OFFSET))(this);
		}
	};
}
