#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSWITCHSPLINEMOVEDIRECTIONACTION_METHOD_4_60638D7D2C562E1A_OFFSET UNITYSDK_OFFSET(0x1D6E0DE0)
#define RPG_GAMECORE_FIVEDIMSWITCHSPLINEMOVEDIRECTIONACTION_METHOD_4_7E1DA6BA9DB8203B_OFFSET UNITYSDK_OFFSET(0x1D6E0D60)
#define RPG_GAMECORE_FIVEDIMSWITCHSPLINEMOVEDIRECTIONACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E0DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSwitchSplineMoveDirectionAction_TypeDefinitionIndex = 18660;

	class FiveDimSwitchSplineMoveDirectionAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSWITCHSPLINEMOVEDIRECTIONACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7E1DA6BA9DB8203B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSwitchSplineMoveDirectionAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSwitchSplineMoveDirectionAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSWITCHSPLINEMOVEDIRECTIONACTION_METHOD_4_7E1DA6BA9DB8203B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_60638D7D2C562E1A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSwitchSplineMoveDirectionAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSwitchSplineMoveDirectionAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSWITCHSPLINEMOVEDIRECTIONACTION_METHOD_4_60638D7D2C562E1A_OFFSET))(a1, a2);
		}
	};
}
