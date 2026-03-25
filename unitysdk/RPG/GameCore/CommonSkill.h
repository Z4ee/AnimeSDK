#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SkillAbilityConfig; }
namespace RPG::GameCore { class SkillConfig; }

#define RPG_GAMECORE_COMMONSKILL_METHOD_2_B7610CFABEEF3452_OFFSET UNITYSDK_OFFSET(0x17121460)
#define RPG_GAMECORE_COMMONSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x17121590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CommonSkill_TypeDefinitionIndex = 16656;

	class CommonSkill : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SkillID; // 0x10
		::RPG::GameCore::SkillConfig* Config; // 0x18
		::RPG::GameCore::SkillAbilityConfig* SkillAbility; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONSKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B7610CFABEEF3452(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CommonSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CommonSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMMONSKILL_METHOD_2_B7610CFABEEF3452_OFFSET))(a1, a2);
		}
	};
}
