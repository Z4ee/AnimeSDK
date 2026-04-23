#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ABORTTARGETSKILL_METHOD_3_28440225569EE360_OFFSET UNITYSDK_OFFSET(0x185F5B90)
#define RPG_GAMECORE_ABORTTARGETSKILL_METHOD_3_AB730E9B18CCC682_OFFSET UNITYSDK_OFFSET(0x185F5C10)
#define RPG_GAMECORE_ABORTTARGETSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x185F5BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbortTargetSkill_TypeDefinitionIndex = 19944;

	class AbortTargetSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean ResetToIdle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABORTTARGETSKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_28440225569EE360(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AbortTargetSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AbortTargetSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABORTTARGETSKILL_METHOD_3_28440225569EE360_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AB730E9B18CCC682(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AbortTargetSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AbortTargetSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABORTTARGETSKILL_METHOD_3_AB730E9B18CCC682_OFFSET))(a1, a2);
		}
	};
}
