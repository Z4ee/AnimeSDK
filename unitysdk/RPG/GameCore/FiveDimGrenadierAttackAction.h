#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMGRENADIERATTACKACTION_METHOD_4_94B83BDF7D0A3823_OFFSET UNITYSDK_OFFSET(0x1D6C2C20)
#define RPG_GAMECORE_FIVEDIMGRENADIERATTACKACTION_METHOD_4_D9851D1D8006D0A2_OFFSET UNITYSDK_OFFSET(0x1D6C2CA0)
#define RPG_GAMECORE_FIVEDIMGRENADIERATTACKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C2C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGrenadierAttackAction_TypeDefinitionIndex = 18784;

	class FiveDimGrenadierAttackAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERATTACKACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_94B83BDF7D0A3823(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGrenadierAttackAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGrenadierAttackAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERATTACKACTION_METHOD_4_94B83BDF7D0A3823_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D9851D1D8006D0A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimGrenadierAttackAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimGrenadierAttackAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGRENADIERATTACKACTION_METHOD_4_D9851D1D8006D0A2_OFFSET))(a1, a2);
		}
	};
}
