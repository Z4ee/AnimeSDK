#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_MATCHTHREE1V1AIPRIORITYRETAINCONFIG_METHOD_2_23627825466CED96_OFFSET UNITYSDK_OFFSET(0x1D244A50)
#define RPG_GAMECORE_MATCH3_MATCHTHREE1V1AIPRIORITYRETAINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D244BA0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int MatchThree1v1AIPriorityRetainConfig_TypeDefinitionIndex = 24664;

	class MatchThree1v1AIPriorityRetainConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 ScoreBehind; // 0x10
		::System::UInt32 Percentage; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREE1V1AIPRIORITYRETAINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_23627825466CED96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::MatchThree1v1AIPriorityRetainConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::MatchThree1v1AIPriorityRetainConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREE1V1AIPRIORITYRETAINCONFIG_METHOD_2_23627825466CED96_OFFSET))(a1, a2);
		}
	};
}
