#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityCameraV2PageController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYCAMERAV2PAGECONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x179E51E0)
#define MOLEMOLE_UIMAINCITYCAMERAV2PAGECONTROLLER___C__DISPLAYCLASS44_0__STATE_PHOTOMODE_END_B__0_OFFSET UNITYSDK_OFFSET(0x179E51F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityCameraV2PageController___c__DisplayClass44_0_TypeDefinitionIndex = 61216;

	class UIMainCityCameraV2PageController___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityCameraV2PageController* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAV2PAGECONTROLLER___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void _State_PhotoMode_End_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCAMERAV2PAGECONTROLLER___C__DISPLAYCLASS44_0__STATE_PHOTOMODE_END_B__0_OFFSET))(this);
		}
	};
}
