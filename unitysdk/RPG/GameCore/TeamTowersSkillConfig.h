#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_68C34B5C1C40C2FF_1;
namespace RPG::GameCore { class LittleGameAbilityConfig; }

#define RPG_GAMECORE_TEAMTOWERSSKILLCONFIG_METHOD_2_EBDFC10948CEFEC4_OFFSET UNITYSDK_OFFSET(0x1D5C6A50)
#define RPG_GAMECORE_TEAMTOWERSSKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C6B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersSkillConfig_TypeDefinitionIndex = 21160;

	class TeamTowersSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameAbilityConfig* OnTrigger; // 0x10
		::Class_2_68C34B5C1C40C2FF_1* CompleteCondition; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSSKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EBDFC10948CEFEC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamTowersSkillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamTowersSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSSKILLCONFIG_METHOD_2_EBDFC10948CEFEC4_OFFSET))(a1, a2);
		}
	};
}
