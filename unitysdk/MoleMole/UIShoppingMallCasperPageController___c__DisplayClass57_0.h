#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A0999DD62F5BF03;

#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA5450)
#define MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__DISPLAYCLASS57_0__FINDTABDATA_B__0_OFFSET UNITYSDK_OFFSET(0x16AA5460)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallCasperPageController___c__DisplayClass57_0_TypeDefinitionIndex = 50609;

	class UIShoppingMallCasperPageController___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::System::Int32 shopTabID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindTabData_b__0(::Class_1_7A0999DD62F5BF03* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7A0999DD62F5BF03*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLCASPERPAGECONTROLLER___C__DISPLAYCLASS57_0__FINDTABDATA_B__0_OFFSET))(this, x);
		}
	};
}
