#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMENABLEGRENADIERATTACKACTION_METHOD_4_BB7BD6D0719FACBB_OFFSET UNITYSDK_OFFSET(0x1D68D470)
#define RPG_GAMECORE_FIVEDIMENABLEGRENADIERATTACKACTION_METHOD_4_E741DFA5088C42BE_OFFSET UNITYSDK_OFFSET(0x1D68D550)
#define RPG_GAMECORE_FIVEDIMENABLEGRENADIERATTACKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68D540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEnableGrenadierAttackAction_TypeDefinitionIndex = 18790;

	class FiveDimEnableGrenadierAttackAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLEGRENADIERATTACKACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BB7BD6D0719FACBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEnableGrenadierAttackAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEnableGrenadierAttackAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLEGRENADIERATTACKACTION_METHOD_4_BB7BD6D0719FACBB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E741DFA5088C42BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEnableGrenadierAttackAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEnableGrenadierAttackAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENABLEGRENADIERATTACKACTION_METHOD_4_E741DFA5088C42BE_OFFSET))(a1, a2);
		}
	};
}
