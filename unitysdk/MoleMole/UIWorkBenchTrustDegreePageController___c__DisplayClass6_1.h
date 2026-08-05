#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWorkBenchTrustDegreePageController_PartnerCampTypeTemplateData; }

#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__DISPLAYCLASS6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12E4CB60)
#define MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__DISPLAYCLASS6_1__ONUIOPEN_B__3_OFFSET UNITYSDK_OFFSET(0x12E4CB70)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchTrustDegreePageController___c__DisplayClass6_1_TypeDefinitionIndex = 58036;

	class UIWorkBenchTrustDegreePageController___c__DisplayClass6_1 : public ::System::Object
	{
	public:
		::System::Int32 campType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__DISPLAYCLASS6_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUIOpen_b__3(::MoleMole::UIWorkBenchTrustDegreePageController_PartnerCampTypeTemplateData* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIWorkBenchTrustDegreePageController_PartnerCampTypeTemplateData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHTRUSTDEGREEPAGECONTROLLER___C__DISPLAYCLASS6_1__ONUIOPEN_B__3_OFFSET))(this, value);
		}
	};
}
