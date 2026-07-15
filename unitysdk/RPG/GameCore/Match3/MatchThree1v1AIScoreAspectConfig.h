#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/Match3/MatchThree1v1AIScoreApsect.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_MATCHTHREE1V1AISCOREASPECTCONFIG_METHOD_2_B3C2C61961A7052E_OFFSET UNITYSDK_OFFSET(0x1BD29EA0)
#define RPG_GAMECORE_MATCH3_MATCHTHREE1V1AISCOREASPECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD2A020)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int MatchThree1v1AIScoreAspectConfig_TypeDefinitionIndex = 24078;

	class MatchThree1v1AIScoreAspectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::Match3::MatchThree1v1AIScoreApsect Aspect; // 0x10
		::System::UInt32 Priority; // 0x14
		::System::Single Weight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREE1V1AISCOREASPECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B3C2C61961A7052E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::MatchThree1v1AIScoreAspectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::MatchThree1v1AIScoreAspectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCHTHREE1V1AISCOREASPECTCONFIG_METHOD_2_B3C2C61961A7052E_OFFSET))(a1, a2);
		}
	};
}
