#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7807B2B04302CD7B;
class Class_1_C1067BB4CC216C9A;

#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS101_0__CTOR_OFFSET UNITYSDK_OFFSET(0x191F4380)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS101_0__ONSELECTSOUVENIREND_B__0_OFFSET UNITYSDK_OFFSET(0x191FB0D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageController___c__DisplayClass101_0_TypeDefinitionIndex = 87263;

	class UIActivityHotpotInGamePageController___c__DisplayClass101_0 : public ::System::Object
	{
	public:
		::Class_1_C1067BB4CC216C9A* souvenir; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS101_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnSelectSouvenirEnd_b__0(::Class_1_7807B2B04302CD7B* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_7807B2B04302CD7B*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS101_0__ONSELECTSOUVENIREND_B__0_OFFSET))(this, x);
		}
	};
}
