#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AdventureSkillConfig; }
namespace RPG::GameCore { class SkillAbilityConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SUMMONUNITSKILLCONFIG_METHOD_2_344801290C4D7A61_OFFSET UNITYSDK_OFFSET(0x1CB13D20)
#define RPG_GAMECORE_SUMMONUNITSKILLCONFIG_RPG_GAMECORE_IADVENTURECHARACTERSKILLCONFIG_GET_ABILITYLIST_OFFSET UNITYSDK_OFFSET(0x1CB15960)
#define RPG_GAMECORE_SUMMONUNITSKILLCONFIG_RPG_GAMECORE_IADVENTURECHARACTERSKILLCONFIG_GET_SKILLABILITYLIST_OFFSET UNITYSDK_OFFSET(0x1CB15950)
#define RPG_GAMECORE_SUMMONUNITSKILLCONFIG_RPG_GAMECORE_IADVENTURECHARACTERSKILLCONFIG_GET_SKILLLIST_OFFSET UNITYSDK_OFFSET(0x1CB15940)
#define RPG_GAMECORE_SUMMONUNITSKILLCONFIG_RPG_GAMECORE_IADVENTURECHARACTERSKILLCONFIG_GET_USETYPEAHEADSKILLINPUT_OFFSET UNITYSDK_OFFSET(0x1CB15930)
#define RPG_GAMECORE_SUMMONUNITSKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB15920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitSkillConfig_TypeDefinitionIndex = 17386;

	class SummonUnitSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AdventureSkillConfig*>* SkillList; // 0x10
		::Il2CppArray<::RPG::GameCore::SkillAbilityConfig*>* SkillAbilityList; // 0x18
		::Il2CppArray<::System::String*>* AbilityList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITSKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_344801290C4D7A61(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SummonUnitSkillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SummonUnitSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITSKILLCONFIG_METHOD_2_344801290C4D7A61_OFFSET))(a1, a2);
		}

		::System::Boolean RPG_GameCore_IAdventureCharacterSkillConfig_get_UseTypeAheadSkillInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITSKILLCONFIG_RPG_GAMECORE_IADVENTURECHARACTERSKILLCONFIG_GET_USETYPEAHEADSKILLINPUT_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AdventureSkillConfig*>* RPG_GameCore_IAdventureCharacterSkillConfig_get_SkillList()
		{
			return ((::Il2CppArray<::RPG::GameCore::AdventureSkillConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITSKILLCONFIG_RPG_GAMECORE_IADVENTURECHARACTERSKILLCONFIG_GET_SKILLLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::SkillAbilityConfig*>* RPG_GameCore_IAdventureCharacterSkillConfig_get_SkillAbilityList()
		{
			return ((::Il2CppArray<::RPG::GameCore::SkillAbilityConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITSKILLCONFIG_RPG_GAMECORE_IADVENTURECHARACTERSKILLCONFIG_GET_SKILLABILITYLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* RPG_GameCore_IAdventureCharacterSkillConfig_get_AbilityList()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITSKILLCONFIG_RPG_GAMECORE_IADVENTURECHARACTERSKILLCONFIG_GET_ABILITYLIST_OFFSET))(this);
		}
	};
}
