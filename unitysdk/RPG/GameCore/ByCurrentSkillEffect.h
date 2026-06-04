#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCURRENTSKILLEFFECT_METHOD_4_1885C0D3E9C1F6BC_OFFSET UNITYSDK_OFFSET(0x195435A0)
#define RPG_GAMECORE_BYCURRENTSKILLEFFECT_METHOD_4_30752953E6A2CF45_OFFSET UNITYSDK_OFFSET(0x19543280)
#define RPG_GAMECORE_BYCURRENTSKILLEFFECT_METHOD_4_6F917D84140AAC1C_OFFSET UNITYSDK_OFFSET(0x195431A0)
#define RPG_GAMECORE_BYCURRENTSKILLEFFECT_METHOD_4_8093675DC3989416_OFFSET UNITYSDK_OFFSET(0x19543520)
#define RPG_GAMECORE_BYCURRENTSKILLEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19543220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentSkillEffect_TypeDefinitionIndex = 21766;

	class ByCurrentSkillEffect : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::SkillEffect SkillEffect; // 0x20
		::Il2CppArray<::RPG::GameCore::SkillEffect>* SkillEffectList; // 0x28
		::System::Boolean IncludeInsertAbility; // 0x30
		::System::Boolean AccessClientActiveSkill; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6F917D84140AAC1C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentSkillEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentSkillEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLEFFECT_METHOD_4_6F917D84140AAC1C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_30752953E6A2CF45(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentSkillEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLEFFECT_METHOD_4_30752953E6A2CF45_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8093675DC3989416(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillEffect*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLEFFECT_METHOD_4_8093675DC3989416_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1885C0D3E9C1F6BC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCurrentSkillEffect* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCurrentSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLEFFECT_METHOD_4_1885C0D3E9C1F6BC_OFFSET))(a1, a2);
		}
	};
}
