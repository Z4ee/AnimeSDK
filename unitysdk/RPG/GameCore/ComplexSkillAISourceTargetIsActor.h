#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCETARGETISACTOR_METHOD_3_2418074CE6BE2CFB_OFFSET UNITYSDK_OFFSET(0x1D9ACDD0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCETARGETISACTOR_METHOD_3_C4F72F24B66F8ADA_OFFSET UNITYSDK_OFFSET(0x1D9ACE70)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCETARGETISACTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9ACE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceTargetIsActor_TypeDefinitionIndex = 15379;

	class ComplexSkillAISourceTargetIsActor : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCETARGETISACTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2418074CE6BE2CFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceTargetIsActor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceTargetIsActor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCETARGETISACTOR_METHOD_3_2418074CE6BE2CFB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C4F72F24B66F8ADA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceTargetIsActor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceTargetIsActor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCETARGETISACTOR_METHOD_3_C4F72F24B66F8ADA_OFFSET))(a1, a2);
		}
	};
}
