#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVTRIGGERSKILL_METHOD_3_10A52346A22F4FB0_OFFSET UNITYSDK_OFFSET(0x16F46090)
#define RPG_GAMECORE_ADVTRIGGERSKILL_METHOD_3_5B9C1487254F8CBF_OFFSET UNITYSDK_OFFSET(0x16F46010)
#define RPG_GAMECORE_ADVTRIGGERSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x16F46060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvTriggerSkill_TypeDefinitionIndex = 18840;

	class AdvTriggerSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SkillName; // 0x18
		::RPG::GameCore::TargetEvaluator* Caster; // 0x20
		::RPG::GameCore::TargetEvaluator* Target; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGERSKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5B9C1487254F8CBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvTriggerSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvTriggerSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGERSKILL_METHOD_3_5B9C1487254F8CBF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_10A52346A22F4FB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvTriggerSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvTriggerSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGERSKILL_METHOD_3_10A52346A22F4FB0_OFFSET))(a1, a2);
		}
	};
}
