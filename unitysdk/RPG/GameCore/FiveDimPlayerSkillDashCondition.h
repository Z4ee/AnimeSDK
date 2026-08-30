#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventCondition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMPLAYERSKILLDASHCONDITION_METHOD_3_4CEB5F141090F0B9_OFFSET UNITYSDK_OFFSET(0x1D8721E0)
#define RPG_GAMECORE_FIVEDIMPLAYERSKILLDASHCONDITION_METHOD_3_C2537DA869F3B264_OFFSET UNITYSDK_OFFSET(0x1D872160)
#define RPG_GAMECORE_FIVEDIMPLAYERSKILLDASHCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8721D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPlayerSkillDashCondition_TypeDefinitionIndex = 18590;

	class FiveDimPlayerSkillDashCondition : public ::RPG::GameCore::FiveDimBaseEventCondition
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLDASHCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C2537DA869F3B264(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayerSkillDashCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayerSkillDashCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLDASHCONDITION_METHOD_3_C2537DA869F3B264_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4CEB5F141090F0B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimPlayerSkillDashCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimPlayerSkillDashCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPLAYERSKILLDASHCONDITION_METHOD_3_4CEB5F141090F0B9_OFFSET))(a1, a2);
		}
	};
}
