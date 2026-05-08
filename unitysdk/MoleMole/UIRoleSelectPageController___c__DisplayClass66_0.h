#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1457DA50)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS66_0__ONSHOW_B__0_OFFSET UNITYSDK_OFFSET(0x1457DA60)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController___c__DisplayClass66_0_TypeDefinitionIndex = 39218;

	class UIRoleSelectPageController___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::Class_2_1824EF69C8E376A3* robot; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnShow_b__0(::Class_2_1824EF69C8E376A3* match)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS66_0__ONSHOW_B__0_OFFSET))(this, match);
		}
	};
}
