#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureTriggerAttack.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AETHERDIVIDETRIGGERATTACK_METHOD_4_1EE9BB2804C8B954_OFFSET UNITYSDK_OFFSET(0x16F6B440)
#define RPG_GAMECORE_AETHERDIVIDETRIGGERATTACK_METHOD_4_FC74CF860EB0C530_OFFSET UNITYSDK_OFFSET(0x16F5C080)
#define RPG_GAMECORE_AETHERDIVIDETRIGGERATTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x16F5C010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideTriggerAttack_TypeDefinitionIndex = 18491;

	class AetherDivideTriggerAttack : public ::RPG::GameCore::AdventureTriggerAttack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDETRIGGERATTACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1EE9BB2804C8B954(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AetherDivideTriggerAttack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideTriggerAttack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDETRIGGERATTACK_METHOD_4_1EE9BB2804C8B954_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FC74CF860EB0C530(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AetherDivideTriggerAttack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideTriggerAttack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDETRIGGERATTACK_METHOD_4_FC74CF860EB0C530_OFFSET))(a1, a2);
		}
	};
}
