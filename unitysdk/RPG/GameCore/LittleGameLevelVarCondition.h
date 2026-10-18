#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMELEVELVARCONDITION_METHOD_2_86E3102E2AB59F41_OFFSET UNITYSDK_OFFSET(0x1D7E4280)
#define RPG_GAMECORE_LITTLEGAMELEVELVARCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E43C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelVarCondition_TypeDefinitionIndex = 18864;

	class LittleGameLevelVarCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CompareType Operation; // 0x10
		::System::Int16 Value; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_86E3102E2AB59F41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelVarCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelVarCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELVARCONDITION_METHOD_2_86E3102E2AB59F41_OFFSET))(a1, a2);
		}
	};
}
