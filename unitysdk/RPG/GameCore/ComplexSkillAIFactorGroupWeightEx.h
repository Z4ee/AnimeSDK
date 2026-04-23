#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIFactorGroupWeight.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ValueEvaluatorConfig; }

#define RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUPWEIGHTEX_METHOD_3_C10618C21B6B46D8_OFFSET UNITYSDK_OFFSET(0x18829D50)
#define RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUPWEIGHTEX_METHOD_3_F261655D2C7A8441_OFFSET UNITYSDK_OFFSET(0x18829BB0)
#define RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUPWEIGHTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x18829BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIFactorGroupWeightEx_TypeDefinitionIndex = 16779;

	class ComplexSkillAIFactorGroupWeightEx : public ::RPG::GameCore::ComplexSkillAIFactorGroupWeight
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* Value; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUPWEIGHTEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C10618C21B6B46D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIFactorGroupWeightEx*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIFactorGroupWeightEx*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUPWEIGHTEX_METHOD_3_C10618C21B6B46D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F261655D2C7A8441(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIFactorGroupWeightEx* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIFactorGroupWeightEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUPWEIGHTEX_METHOD_3_F261655D2C7A8441_OFFSET))(a1, a2);
		}
	};
}
