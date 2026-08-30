#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_MATCHTHREE1V1AIPROPPRIORITYCONFIG_METHOD_2_974D471643D41906_OFFSET UNITYSDK_OFFSET(0x1D244D10)
#define RPG_GAMECORE_MATCH3_MATCHTHREE1V1AIPROPPRIORITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D244E40)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int MatchThree1v1AIPropPriorityConfig_TypeDefinitionIndex = 24668;

	class MatchThree1v1AIPropPriorityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MatchThreePropType PropType; // 0x10
		::System::UInt32 Priority; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREE1V1AIPROPPRIORITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_974D471643D41906(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::MatchThree1v1AIPropPriorityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::MatchThree1v1AIPropPriorityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREE1V1AIPROPPRIORITYCONFIG_METHOD_2_974D471643D41906_OFFSET))(a1, a2);
		}
	};
}
