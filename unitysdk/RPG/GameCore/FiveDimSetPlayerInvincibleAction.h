#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETPLAYERINVINCIBLEACTION_METHOD_4_3A4C693DCB6696CB_OFFSET UNITYSDK_OFFSET(0x1D6AC5F0)
#define RPG_GAMECORE_FIVEDIMSETPLAYERINVINCIBLEACTION_METHOD_4_553DA4476FEC506A_OFFSET UNITYSDK_OFFSET(0x1D6AC640)
#define RPG_GAMECORE_FIVEDIMSETPLAYERINVINCIBLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AC630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetPlayerInvincibleAction_TypeDefinitionIndex = 18708;

	class FiveDimSetPlayerInvincibleAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Single Duration; // 0x14
		::System::Boolean OverrideMaxSpeedMultiplier; // 0x18
		::System::Single MaxSpeedMultiplier; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERINVINCIBLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_3A4C693DCB6696CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERINVINCIBLEACTION_METHOD_4_3A4C693DCB6696CB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_553DA4476FEC506A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERINVINCIBLEACTION_METHOD_4_553DA4476FEC506A_OFFSET))(a1, a2);
		}
	};
}
