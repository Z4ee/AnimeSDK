#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REMOVETEAMALLMAZESKILLBUFF_METHOD_3_30CBAAF044F121A2_OFFSET UNITYSDK_OFFSET(0x17599F10)
#define RPG_GAMECORE_REMOVETEAMALLMAZESKILLBUFF_METHOD_3_449031DBA099B562_OFFSET UNITYSDK_OFFSET(0x17599E80)
#define RPG_GAMECORE_REMOVETEAMALLMAZESKILLBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x17599EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveTeamAllMazeSkillBuff_TypeDefinitionIndex = 20433;

	class RemoveTeamAllMazeSkillBuff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVETEAMALLMAZESKILLBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_449031DBA099B562(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveTeamAllMazeSkillBuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveTeamAllMazeSkillBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVETEAMALLMAZESKILLBUFF_METHOD_3_449031DBA099B562_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_30CBAAF044F121A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveTeamAllMazeSkillBuff* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveTeamAllMazeSkillBuff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVETEAMALLMAZESKILLBUFF_METHOD_3_30CBAAF044F121A2_OFFSET))(a1, a2);
		}
	};
}
