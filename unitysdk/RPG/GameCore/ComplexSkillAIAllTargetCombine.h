#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIListCombineType.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAIALLTARGETCOMBINE_METHOD_3_18629EE4D0FF3625_OFFSET UNITYSDK_OFFSET(0x1D5CCA90)
#define RPG_GAMECORE_COMPLEXSKILLAIALLTARGETCOMBINE_METHOD_3_8845FB3A1EC18CCA_OFFSET UNITYSDK_OFFSET(0x1D5CCAC0)
#define RPG_GAMECORE_COMPLEXSKILLAIALLTARGETCOMBINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5CCC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIAllTargetCombine_TypeDefinitionIndex = 15540;

	class ComplexSkillAIAllTargetCombine : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::RPG::GameCore::ComplexSkillAISource* Evaluator; // 0x10
		::RPG::GameCore::ComplexSkillAIListCombineType ListCombineType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIALLTARGETCOMBINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_18629EE4D0FF3625(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIAllTargetCombine*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIAllTargetCombine*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIALLTARGETCOMBINE_METHOD_3_18629EE4D0FF3625_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8845FB3A1EC18CCA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIAllTargetCombine* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIAllTargetCombine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIALLTARGETCOMBINE_METHOD_3_8845FB3A1EC18CCA_OFFSET))(a1, a2);
		}
	};
}
