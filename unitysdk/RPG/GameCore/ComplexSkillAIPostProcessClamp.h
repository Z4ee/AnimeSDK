#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIPostProcess.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSCLAMP_METHOD_3_34DCE66C636C1B89_OFFSET UNITYSDK_OFFSET(0x171246E0)
#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSCLAMP_METHOD_3_AC880BC480729C4A_OFFSET UNITYSDK_OFFSET(0x171241F0)
#define RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSCLAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x171241E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIPostProcessClamp_TypeDefinitionIndex = 14256;

	class ComplexSkillAIPostProcessClamp : public ::RPG::GameCore::ComplexSkillAIPostProcess
	{
	public:
		::RPG::GameCore::FixPoint minValue; // 0x10
		::RPG::GameCore::FixPoint maxValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSCLAMP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_34DCE66C636C1B89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIPostProcessClamp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIPostProcessClamp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSCLAMP_METHOD_3_34DCE66C636C1B89_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AC880BC480729C4A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIPostProcessClamp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIPostProcessClamp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIPOSTPROCESSCLAMP_METHOD_3_AC880BC480729C4A_OFFSET))(a1, a2);
		}
	};
}
