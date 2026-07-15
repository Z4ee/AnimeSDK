#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameAbilityConfig; }
namespace RPG::GameCore { class PixAirCastCondition; }

#define RPG_GAMECORE_PIXAIRSKILLCONFIG_METHOD_2_C05AFE965700612A_OFFSET UNITYSDK_OFFSET(0x1B4CE740)
#define RPG_GAMECORE_PIXAIRSKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CE890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirSkillConfig_TypeDefinitionIndex = 15608;

	class PixAirSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameAbilityConfig* Ability; // 0x10
		::RPG::GameCore::PixAirCastCondition* CastCondition; // 0x18
		::System::Boolean InnerCoolDown; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRSKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C05AFE965700612A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirSkillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRSKILLCONFIG_METHOD_2_C05AFE965700612A_OFFSET))(a1, a2);
		}
	};
}
