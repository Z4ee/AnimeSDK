#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_USESKILLBYCOMPLEXSKILLAI_METHOD_3_806169594FEA87E0_OFFSET UNITYSDK_OFFSET(0x1D6251D0)
#define RPG_GAMECORE_USESKILLBYCOMPLEXSKILLAI_METHOD_3_B08344D80718BAA3_OFFSET UNITYSDK_OFFSET(0x1D625180)
#define RPG_GAMECORE_USESKILLBYCOMPLEXSKILLAI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6251C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UseSkillByComplexSkillAI_TypeDefinitionIndex = 22188;

	class UseSkillByComplexSkillAI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean RecoverySkillCD; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESKILLBYCOMPLEXSKILLAI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B08344D80718BAA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UseSkillByComplexSkillAI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UseSkillByComplexSkillAI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESKILLBYCOMPLEXSKILLAI_METHOD_3_B08344D80718BAA3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_806169594FEA87E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UseSkillByComplexSkillAI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UseSkillByComplexSkillAI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESKILLBYCOMPLEXSKILLAI_METHOD_3_806169594FEA87E0_OFFSET))(a1, a2);
		}
	};
}
