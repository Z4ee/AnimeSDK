#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6D99A03C58ED2B6E_5;

#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__DISPLAYCLASS6_2__CTOR_OFFSET UNITYSDK_OFFSET(0x12E4CB90)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__DISPLAYCLASS6_2__ONUIOPEN_B__4_OFFSET UNITYSDK_OFFSET(0x12E4CBA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchTrustDegreePageController___c__DisplayClass6_2_TypeDefinitionIndex = 58038;

	class UIWorkBenchTrustDegreePageController___c__DisplayClass6_2 : public ::System::Object
	{
	public:
		::System::Int32 campId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__DISPLAYCLASS6_2__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUIOpen_b__4(::Class_2_6D99A03C58ED2B6E_5* template_)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_6D99A03C58ED2B6E_5*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__DISPLAYCLASS6_2__ONUIOPEN_B__4_OFFSET))(this, template_);
		}
	};
}
