#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client::Prop { class AdjustContainer_ContainerController; }

#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE299C0)
#define RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER___C__DISPLAYCLASS8_0___TRYMOVECONTAINER_B__0_OFFSET UNITYSDK_OFFSET(0x1AE2B090)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int AdjustContainer_ContainerController___c__DisplayClass8_0_TypeDefinitionIndex = 77726;

	class AdjustContainer_ContainerController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::AdjustContainer_ContainerController* __4__this; // 0x10
		::RPG::Client::AdventurePhase* pADP; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void __TryMoveContainer_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ADJUSTCONTAINER_CONTAINERCONTROLLER___C__DISPLAYCLASS8_0___TRYMOVECONTAINER_B__0_OFFSET))(this);
		}
	};
}
