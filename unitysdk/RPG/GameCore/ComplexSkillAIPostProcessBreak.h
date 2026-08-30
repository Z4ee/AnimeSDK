#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIPostProcess.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSBREAK_METHOD_3_E5B90EF1E2DADED9_OFFSET UNITYSDK_OFFSET(0x1CFF3170)
#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSBREAK_METHOD_3_E7E9A69000161838_OFFSET UNITYSDK_OFFSET(0x1CFF38C0)
#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSBREAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF3160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIPostProcessBreak_TypeDefinitionIndex = 15390;

	class ComplexSkillAIPostProcessBreak : public ::RPG::GameCore::ComplexSkillAIPostProcess
	{
	public:
		::System::Boolean UseFinalScore; // 0x10
		::RPG::GameCore::ComplexSkillAIValueCompareType CompareType; // 0x14
		::RPG::GameCore::FixPoint CompareValue; // 0x18
		::System::Boolean IsOverrideFinalScore; // 0x20
		::RPG::GameCore::FixPoint FinalScore; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSBREAK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E7E9A69000161838(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIPostProcessBreak*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIPostProcessBreak*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSBREAK_METHOD_3_E7E9A69000161838_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E5B90EF1E2DADED9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIPostProcessBreak* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIPostProcessBreak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSBREAK_METHOD_3_E5B90EF1E2DADED9_OFFSET))(a1, a2);
		}
	};
}
