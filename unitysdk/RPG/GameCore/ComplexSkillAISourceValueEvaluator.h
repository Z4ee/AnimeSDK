#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEEVALUATOR_METHOD_3_25769AF53D71B78B_OFFSET UNITYSDK_OFFSET(0x1D9AD090)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEEVALUATOR_METHOD_3_544E0DDE55A4D6FF_OFFSET UNITYSDK_OFFSET(0x1D9AD160)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AD150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceValueEvaluator_TypeDefinitionIndex = 15347;

	class ComplexSkillAISourceValueEvaluator : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEEVALUATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_25769AF53D71B78B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceValueEvaluator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceValueEvaluator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEEVALUATOR_METHOD_3_25769AF53D71B78B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_544E0DDE55A4D6FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceValueEvaluator* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceValueEvaluator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEVALUEEVALUATOR_METHOD_3_544E0DDE55A4D6FF_OFFSET))(a1, a2);
		}
	};
}
