#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ADVENTURESKILLTRIGGERABILITY_METHOD_3_0A3C2CE0B882C601_OFFSET UNITYSDK_OFFSET(0x19454160)
#define RPG_GAMECORE_ADVENTURESKILLTRIGGERABILITY_METHOD_3_EB6CA605AB7D0DA8_OFFSET UNITYSDK_OFFSET(0x194540E0)
#define RPG_GAMECORE_ADVENTURESKILLTRIGGERABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19454130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureSkillTriggerAbility_TypeDefinitionIndex = 19093;

	class AdventureSkillTriggerAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AbilityName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLTRIGGERABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EB6CA605AB7D0DA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureSkillTriggerAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureSkillTriggerAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLTRIGGERABILITY_METHOD_3_EB6CA605AB7D0DA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0A3C2CE0B882C601(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureSkillTriggerAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureSkillTriggerAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURESKILLTRIGGERABILITY_METHOD_3_0A3C2CE0B882C601_OFFSET))(a1, a2);
		}
	};
}
