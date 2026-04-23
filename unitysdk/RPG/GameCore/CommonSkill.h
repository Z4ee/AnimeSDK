#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElationConfig; }
namespace RPG::GameCore { class SkillAbilityConfig; }
namespace RPG::GameCore { class SkillConfig; }

#define RPG_GAMECORE_COMMONSKILL_METHOD_2_6661381D32AC6F5B_OFFSET UNITYSDK_OFFSET(0x18827B40)
#define RPG_GAMECORE_COMMONSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x18827C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CommonSkill_TypeDefinitionIndex = 17248;

	class CommonSkill : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SkillID; // 0x10
		::RPG::GameCore::SkillConfig* Config; // 0x18
		::RPG::GameCore::SkillAbilityConfig* SkillAbility; // 0x20
		::RPG::GameCore::ElationConfig* ElationConfig; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONSKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_6661381D32AC6F5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CommonSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CommonSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONSKILL_METHOD_2_6661381D32AC6F5B_OFFSET))(a1, a2);
		}
	};
}
