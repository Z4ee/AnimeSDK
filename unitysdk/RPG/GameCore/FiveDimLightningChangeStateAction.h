#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/FiveDimLightningStateType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMLIGHTNINGCHANGESTATEACTION_METHOD_4_7FCA48E0EB9C3FFA_OFFSET UNITYSDK_OFFSET(0x1D6C6FA0)
#define RPG_GAMECORE_FIVEDIMLIGHTNINGCHANGESTATEACTION_METHOD_4_E857D1AE02F341E1_OFFSET UNITYSDK_OFFSET(0x1D6C6FE0)
#define RPG_GAMECORE_FIVEDIMLIGHTNINGCHANGESTATEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C6FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLightningChangeStateAction_TypeDefinitionIndex = 18783;

	class FiveDimLightningChangeStateAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FiveDimLightningStateType LightningState; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLIGHTNINGCHANGESTATEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7FCA48E0EB9C3FFA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLightningChangeStateAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLightningChangeStateAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLIGHTNINGCHANGESTATEACTION_METHOD_4_7FCA48E0EB9C3FFA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E857D1AE02F341E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLightningChangeStateAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLightningChangeStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLIGHTNINGCHANGESTATEACTION_METHOD_4_E857D1AE02F341E1_OFFSET))(a1, a2);
		}
	};
}
