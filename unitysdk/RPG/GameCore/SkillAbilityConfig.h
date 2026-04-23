#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SKILLABILITYCONFIG_METHOD_2_2D6E1F92B1FBF606_OFFSET UNITYSDK_OFFSET(0x18E6F4F0)
#define RPG_GAMECORE_SKILLABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18E6F610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillAbilityConfig_TypeDefinitionIndex = 14810;

	class SkillAbilityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Skill; // 0x10
		::Il2CppArray<::System::String*>* AbilityList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2D6E1F92B1FBF606(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SkillAbilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SkillAbilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLABILITYCONFIG_METHOD_2_2D6E1F92B1FBF606_OFFSET))(a1, a2);
		}
	};
}
