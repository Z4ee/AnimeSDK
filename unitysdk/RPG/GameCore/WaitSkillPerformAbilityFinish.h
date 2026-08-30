#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITSKILLPERFORMABILITYFINISH_METHOD_3_D7A604E2D55CB2FB_OFFSET UNITYSDK_OFFSET(0x1DEC2170)
#define RPG_GAMECORE_WAITSKILLPERFORMABILITYFINISH_METHOD_3_F9CE2F29AAAE78FE_OFFSET UNITYSDK_OFFSET(0x1DEC20A0)
#define RPG_GAMECORE_WAITSKILLPERFORMABILITYFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC2160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitSkillPerformAbilityFinish_TypeDefinitionIndex = 22433;

	class WaitSkillPerformAbilityFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSKILLPERFORMABILITYFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F9CE2F29AAAE78FE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitSkillPerformAbilityFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitSkillPerformAbilityFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSKILLPERFORMABILITYFINISH_METHOD_3_F9CE2F29AAAE78FE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D7A604E2D55CB2FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitSkillPerformAbilityFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitSkillPerformAbilityFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSKILLPERFORMABILITYFINISH_METHOD_3_D7A604E2D55CB2FB_OFFSET))(a1, a2);
		}
	};
}
