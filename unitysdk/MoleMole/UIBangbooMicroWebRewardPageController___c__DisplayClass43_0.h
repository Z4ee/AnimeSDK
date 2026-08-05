#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangbooMicroWebRewardPageController; }

#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1956CE70)
#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS43_0__ONEXPPHASE1COMPLETE_B__0_OFFSET UNITYSDK_OFFSET(0x1956CE80)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebRewardPageController___c__DisplayClass43_0_TypeDefinitionIndex = 73646;

	class UIBangbooMicroWebRewardPageController___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangbooMicroWebRewardPageController* __4__this; // 0x10
		::System::Int32 newExp; // 0x18
		::System::Int32 newLevel; // 0x1C
		::System::Boolean reachMaxLevel; // 0x20
		::System::Single newRatio; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnExpPhase1Complete_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS43_0__ONEXPPHASE1COMPLETE_B__0_OFFSET))(this);
		}
	};
}
