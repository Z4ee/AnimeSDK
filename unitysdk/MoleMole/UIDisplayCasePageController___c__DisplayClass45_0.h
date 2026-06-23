#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_38EE0169AA9CE03E;
class Class_1_6D1045A276B3030B;

#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17A61DD0)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS45_0__TRYSELECTVM_B__0_OFFSET UNITYSDK_OFFSET(0x17A61DE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCasePageController___c__DisplayClass45_0_TypeDefinitionIndex = 61272;

	class UIDisplayCasePageController___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::Class_1_38EE0169AA9CE03E* target; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _TrySelectVM_b__0(::Class_1_6D1045A276B3030B* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_6D1045A276B3030B*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS45_0__TRYSELECTVM_B__0_OFFSET))(this, a);
		}
	};
}
