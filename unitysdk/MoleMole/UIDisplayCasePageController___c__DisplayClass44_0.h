#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_38DE07FB580FE5E9;

#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183D9990)
#define MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS44_0__TRYSELECTVM_B__0_OFFSET UNITYSDK_OFFSET(0x183D99A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCasePageController___c__DisplayClass44_0_TypeDefinitionIndex = 44115;

	class UIDisplayCasePageController___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::System::Int32 itemId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _TrySelectVM_b__0(::Class_1_38DE07FB580FE5E9* i)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_38DE07FB580FE5E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPAGECONTROLLER___C__DISPLAYCLASS44_0__TRYSELECTVM_B__0_OFFSET))(this, i);
		}
	};
}
