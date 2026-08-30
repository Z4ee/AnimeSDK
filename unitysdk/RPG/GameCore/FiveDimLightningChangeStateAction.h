#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/FiveDimLightningStateType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMLIGHTNINGCHANGESTATEACTION_METHOD_3_15098C46CEC614E3_OFFSET UNITYSDK_OFFSET(0x1D868520)
#define RPG_GAMECORE_FIVEDIMLIGHTNINGCHANGESTATEACTION_METHOD_3_370E27C9EAE8EFB0_OFFSET UNITYSDK_OFFSET(0x1D868560)
#define RPG_GAMECORE_FIVEDIMLIGHTNINGCHANGESTATEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D868550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLightningChangeStateAction_TypeDefinitionIndex = 18573;

	class FiveDimLightningChangeStateAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FiveDimLightningStateType LightningState; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLIGHTNINGCHANGESTATEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_15098C46CEC614E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLightningChangeStateAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLightningChangeStateAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLIGHTNINGCHANGESTATEACTION_METHOD_3_15098C46CEC614E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_370E27C9EAE8EFB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLightningChangeStateAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLightningChangeStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLIGHTNINGCHANGESTATEACTION_METHOD_3_370E27C9EAE8EFB0_OFFSET))(a1, a2);
		}
	};
}
