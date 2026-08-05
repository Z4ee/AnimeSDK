#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B3706231660ADCDD_2;
class Class_2_F5737224A0253470;
namespace MoleMole { class UIHollowMainPageController; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS160_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE5D810)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS160_0__ONPUNISHOVERLOAD_G__AFTERPERFORM_1_OFFSET UNITYSDK_OFFSET(0x1AE84A50)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS160_0__ONPUNISHOVERLOAD_G__BEFOREPERFORM_0_OFFSET UNITYSDK_OFFSET(0x1AE5DA70)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass160_0_TypeDefinitionIndex = 73676;

	class UIHollowMainPageController___c__DisplayClass160_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowMainPageController* __4__this; // 0x10
		::Class_2_F5737224A0253470* hollowModel; // 0x18
		::Class_1_B3706231660ADCDD_2* data; // 0x20
		::System::Int32 curseCount; // 0x28
		::System::Boolean maxState; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS160_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnPunishOverload_g__BeforePerform_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS160_0__ONPUNISHOVERLOAD_G__BEFOREPERFORM_0_OFFSET))(this);
		}

		::System::Void _OnPunishOverload_g__AfterPerform_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS160_0__ONPUNISHOVERLOAD_G__AFTERPERFORM_1_OFFSET))(this);
		}
	};
}
