#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAISOURCEISSERVANTOWNER_METHOD_3_3B7512751E2FD838_OFFSET UNITYSDK_OFFSET(0x1882D630)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEISSERVANTOWNER_METHOD_3_7A2BE4F138ACB60A_OFFSET UNITYSDK_OFFSET(0x1882FB30)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCEISSERVANTOWNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1882D610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISourceIsServantOwner_TypeDefinitionIndex = 14713;

	class ComplexSkillAISourceIsServantOwner : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEISSERVANTOWNER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7A2BE4F138ACB60A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceIsServantOwner*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceIsServantOwner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEISSERVANTOWNER_METHOD_3_7A2BE4F138ACB60A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3B7512751E2FD838(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISourceIsServantOwner* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISourceIsServantOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCEISSERVANTOWNER_METHOD_3_3B7512751E2FD838_OFFSET))(a1, a2);
		}
	};
}
