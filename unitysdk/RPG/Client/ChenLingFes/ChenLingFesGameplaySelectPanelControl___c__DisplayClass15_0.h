#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingFes { class ChenLingFesGameplaySelectPanelControl; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSELECTPANELCONTROL___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCA9F470)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSELECTPANELCONTROL___C__DISPLAYCLASS15_0___ONTOGGLESELECTEXPANDED_B__0_OFFSET UNITYSDK_OFFSET(0xCAA06A0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplaySelectPanelControl___c__DisplayClass15_0_TypeDefinitionIndex = 81325;

	class ChenLingFesGameplaySelectPanelControl___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingFes::ChenLingFesGameplaySelectPanelControl* __4__this; // 0x10
		::System::Int32 switchVersion; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSELECTPANELCONTROL___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnToggleSelectExpanded_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYSELECTPANELCONTROL___C__DISPLAYCLASS15_0___ONTOGGLESELECTEXPANDED_B__0_OFFSET))(this);
		}
	};
}
