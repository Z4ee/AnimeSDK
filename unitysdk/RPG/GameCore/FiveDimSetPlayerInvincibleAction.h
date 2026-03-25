#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETPLAYERINVINCIBLEACTION_METHOD_3_4E2B3088F670ECE6_OFFSET UNITYSDK_OFFSET(0x1720A180)
#define RPG_GAMECORE_FIVEDIMSETPLAYERINVINCIBLEACTION_METHOD_3_90551A1F8A4BF71C_OFFSET UNITYSDK_OFFSET(0x1720A110)
#define RPG_GAMECORE_FIVEDIMSETPLAYERINVINCIBLEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1720A160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetPlayerInvincibleAction_TypeDefinitionIndex = 17172;

	class FiveDimSetPlayerInvincibleAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Single Duration; // 0x14
		::System::Single MaxSpeedMultiplier; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERINVINCIBLEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_90551A1F8A4BF71C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERINVINCIBLEACTION_METHOD_3_90551A1F8A4BF71C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4E2B3088F670ECE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPlayerInvincibleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERINVINCIBLEACTION_METHOD_3_4E2B3088F670ECE6_OFFSET))(a1, a2);
		}
	};
}
