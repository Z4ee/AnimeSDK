#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureTriggerAttack.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AETHERDIVIDETRIGGERATTACK_METHOD_4_99AF1A8AE3653ACB_OFFSET UNITYSDK_OFFSET(0x194556E0)
#define RPG_GAMECORE_AETHERDIVIDETRIGGERATTACK_METHOD_4_F2F81C45D1283741_OFFSET UNITYSDK_OFFSET(0x194636C0)
#define RPG_GAMECORE_AETHERDIVIDETRIGGERATTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19455670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideTriggerAttack_TypeDefinitionIndex = 19073;

	class AetherDivideTriggerAttack : public ::RPG::GameCore::AdventureTriggerAttack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDETRIGGERATTACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F2F81C45D1283741(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AetherDivideTriggerAttack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideTriggerAttack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDETRIGGERATTACK_METHOD_4_F2F81C45D1283741_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_99AF1A8AE3653ACB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AetherDivideTriggerAttack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideTriggerAttack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDETRIGGERATTACK_METHOD_4_99AF1A8AE3653ACB_OFFSET))(a1, a2);
		}
	};
}
