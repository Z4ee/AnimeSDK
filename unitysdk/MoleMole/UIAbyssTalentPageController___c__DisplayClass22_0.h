#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssTalentPointController; }

#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x173CA4A0)
#define MOLEMOLE_UIABYSSTALENTPAGECONTROLLER___C__DISPLAYCLASS22_0__ONTALENTACTIVEHANDLE_B__1_OFFSET UNITYSDK_OFFSET(0x173CA4B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssTalentPageController___c__DisplayClass22_0_TypeDefinitionIndex = 45004;

	class UIAbyssTalentPageController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MoleMole::UIAbyssTalentPointController*> item; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnTalentActiveHandle_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSTALENTPAGECONTROLLER___C__DISPLAYCLASS22_0__ONTALENTACTIVEHANDLE_B__1_OFFSET))(this);
		}
	};
}
