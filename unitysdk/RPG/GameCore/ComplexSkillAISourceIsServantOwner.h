#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEISSERVANTOWNER_METHOD_3_3B7512751E2FD838_OFFSET UNITYSDK_OFFSET(0x1BC27610)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEISSERVANTOWNER_METHOD_3_8C07C7261C383C1D_OFFSET UNITYSDK_OFFSET(0x1BC27570)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEISSERVANTOWNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC27600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceIsServantOwner_TypeDefinitionIndex = 14938;

	class ComplexSkillAISourceIsServantOwner : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEISSERVANTOWNER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8C07C7261C383C1D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceIsServantOwner*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceIsServantOwner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEISSERVANTOWNER_METHOD_3_8C07C7261C383C1D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3B7512751E2FD838(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceIsServantOwner* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceIsServantOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEISSERVANTOWNER_METHOD_3_3B7512751E2FD838_OFFSET))(a1, a2);
		}
	};
}
