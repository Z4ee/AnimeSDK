#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVENTURERESUMETEAMDATAREFRESH_METHOD_3_09578815B55F193F_OFFSET UNITYSDK_OFFSET(0x1CDF6950)
#define RPG_GAMECORE_ADVENTURERESUMETEAMDATAREFRESH_METHOD_3_BEDAB7B5CAE04002_OFFSET UNITYSDK_OFFSET(0x1CDF6A20)
#define RPG_GAMECORE_ADVENTURERESUMETEAMDATAREFRESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF6A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureResumeTeamDataRefresh_TypeDefinitionIndex = 20166;

	class AdventureResumeTeamDataRefresh : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURERESUMETEAMDATAREFRESH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_09578815B55F193F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureResumeTeamDataRefresh*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureResumeTeamDataRefresh*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURERESUMETEAMDATAREFRESH_METHOD_3_09578815B55F193F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BEDAB7B5CAE04002(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureResumeTeamDataRefresh* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureResumeTeamDataRefresh*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURERESUMETEAMDATAREFRESH_METHOD_3_BEDAB7B5CAE04002_OFFSET))(a1, a2);
		}
	};
}
