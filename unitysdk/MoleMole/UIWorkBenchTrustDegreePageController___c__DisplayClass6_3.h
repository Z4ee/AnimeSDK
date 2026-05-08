#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_CEF0D076577A9E4E;

#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__DISPLAYCLASS6_3__CTOR_OFFSET UNITYSDK_OFFSET(0x10A1B730)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__DISPLAYCLASS6_3__ONUIOPEN_B__5_OFFSET UNITYSDK_OFFSET(0x10A1B740)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchTrustDegreePageController___c__DisplayClass6_3_TypeDefinitionIndex = 39297;

	class UIWorkBenchTrustDegreePageController___c__DisplayClass6_3 : public ::System::Object
	{
	public:
		::System::Int32 partnerID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__DISPLAYCLASS6_3__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUIOpen_b__5(::Class_2_CEF0D076577A9E4E* template_)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_CEF0D076577A9E4E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__DISPLAYCLASS6_3__ONUIOPEN_B__5_OFFSET))(this, template_);
		}
	};
}
