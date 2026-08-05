#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssS2TalentItemWidgetController; }

#define MOLEMOLE_UIABYSSS2TALENTPAGECONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1386FAA0)
#define MOLEMOLE_UIABYSSS2TALENTPAGECONTROLLER___C__DISPLAYCLASS42_0__ONTALENTACTIVEHANDLE_B__1_OFFSET UNITYSDK_OFFSET(0x1386FAB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2TalentPageController___c__DisplayClass42_0_TypeDefinitionIndex = 78628;

	class UIAbyssS2TalentPageController___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MoleMole::UIAbyssS2TalentItemWidgetController*> item; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TALENTPAGECONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnTalentActiveHandle_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2TALENTPAGECONTROLLER___C__DISPLAYCLASS42_0__ONTALENTACTIVEHANDLE_B__1_OFFSET))(this);
		}
	};
}
