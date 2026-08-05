#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_38DE07FB580FE5E9;
class Class_1_6E06DF87808F0190;

#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183D99F0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS45_0__TRYSELECTVM_B__0_OFFSET UNITYSDK_OFFSET(0x183D9A00)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCasePageController___c__DisplayClass45_0_TypeDefinitionIndex = 44113;

	class UIDisplayCasePageController___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::Class_1_6E06DF87808F0190* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _TrySelectVM_b__0(::Class_1_38DE07FB580FE5E9* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_38DE07FB580FE5E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS45_0__TRYSELECTVM_B__0_OFFSET))(this, a);
		}
	};
}
