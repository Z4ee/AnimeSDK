#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIPostProcess.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSPRECHECKFAIL_METHOD_3_06AC007CD38B0092_OFFSET UNITYSDK_OFFSET(0x1966BF00)
#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSPRECHECKFAIL_METHOD_3_BCF3AD68C05DD2FD_OFFSET UNITYSDK_OFFSET(0x1966BB50)
#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSPRECHECKFAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1966BB40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIPostProcessPreCheckFail_TypeDefinitionIndex = 14793;

	class ComplexSkillAIPostProcessPreCheckFail : public ::RPG::GameCore::ComplexSkillAIPostProcess
	{
	public:
		::RPG::GameCore::ComplexSkillAIValueCompareType CompareType; // 0x10
		::RPG::GameCore::FixPoint CompareValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSPRECHECKFAIL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_06AC007CD38B0092(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIPostProcessPreCheckFail*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIPostProcessPreCheckFail*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSPRECHECKFAIL_METHOD_3_06AC007CD38B0092_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BCF3AD68C05DD2FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIPostProcessPreCheckFail* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIPostProcessPreCheckFail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSPRECHECKFAIL_METHOD_3_BCF3AD68C05DD2FD_OFFSET))(a1, a2);
		}
	};
}
