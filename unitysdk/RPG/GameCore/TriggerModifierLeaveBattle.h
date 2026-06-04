#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERMODIFIERLEAVEBATTLE_METHOD_3_43D10300CFF52705_OFFSET UNITYSDK_OFFSET(0x19E18740)
#define RPG_GAMECORE_TRIGGERMODIFIERLEAVEBATTLE_METHOD_3_ABC97753413447B1_OFFSET UNITYSDK_OFFSET(0x19E18630)
#define RPG_GAMECORE_TRIGGERMODIFIERLEAVEBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E18710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerModifierLeaveBattle_TypeDefinitionIndex = 22171;

	class TriggerModifierLeaveBattle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODIFIERLEAVEBATTLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_ABC97753413447B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerModifierLeaveBattle*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerModifierLeaveBattle*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODIFIERLEAVEBATTLE_METHOD_3_ABC97753413447B1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_43D10300CFF52705(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerModifierLeaveBattle* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerModifierLeaveBattle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODIFIERLEAVEBATTLE_METHOD_3_43D10300CFF52705_OFFSET))(a1, a2);
		}
	};
}
