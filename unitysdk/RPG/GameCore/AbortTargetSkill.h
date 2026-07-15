#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ABORTTARGETSKILL_METHOD_3_0F2385E590A1AD7D_OFFSET UNITYSDK_OFFSET(0x1B9FA590)
#define RPG_GAMECORE_ABORTTARGETSKILL_METHOD_3_AB730E9B18CCC682_OFFSET UNITYSDK_OFFSET(0x1B9FA5D0)
#define RPG_GAMECORE_ABORTTARGETSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9FA5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbortTargetSkill_TypeDefinitionIndex = 20167;

	class AbortTargetSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean ResetToIdle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABORTTARGETSKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0F2385E590A1AD7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AbortTargetSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AbortTargetSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABORTTARGETSKILL_METHOD_3_0F2385E590A1AD7D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AB730E9B18CCC682(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AbortTargetSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AbortTargetSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABORTTARGETSKILL_METHOD_3_AB730E9B18CCC682_OFFSET))(a1, a2);
		}
	};
}
