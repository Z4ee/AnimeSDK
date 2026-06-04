#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAICombineType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ComplexSkillAIFactor; }

#define RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUP_METHOD_2_79348BA9B6A1295A_OFFSET UNITYSDK_OFFSET(0x1966A420)
#define RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1966A5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIFactorGroup_TypeDefinitionIndex = 14796;

	class ComplexSkillAIFactorGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ComplexSkillAICombineType CombineOperator; // 0x10
		::Il2CppArray<::RPG::GameCore::ComplexSkillAIFactor*>* Factors; // 0x18
		::System::Boolean IsBpGroup; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_79348BA9B6A1295A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIFactorGroup*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIFactorGroup*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIFACTORGROUP_METHOD_2_79348BA9B6A1295A_OFFSET))(a1, a2);
		}
	};
}
