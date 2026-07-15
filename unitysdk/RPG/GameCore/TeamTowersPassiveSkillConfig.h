#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_4_F441CE80F00840D2;

#define RPG_GAMECORE_TEAMTOWERSPASSIVESKILLCONFIG_METHOD_2_B5055CB4063367A2_OFFSET UNITYSDK_OFFSET(0x1C149130)
#define RPG_GAMECORE_TEAMTOWERSPASSIVESKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C149200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersPassiveSkillConfig_TypeDefinitionIndex = 20609;

	class TeamTowersPassiveSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Class_4_F441CE80F00840D2* OnReachHeightLine; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSPASSIVESKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B5055CB4063367A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamTowersPassiveSkillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamTowersPassiveSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSPASSIVESKILLCONFIG_METHOD_2_B5055CB4063367A2_OFFSET))(a1, a2);
		}
	};
}
