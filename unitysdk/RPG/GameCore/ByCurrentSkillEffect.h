#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCURRENTSKILLEFFECT_METHOD_4_30752953E6A2CF45_OFFSET UNITYSDK_OFFSET(0x187436F0)
#define RPG_GAMECORE_BYCURRENTSKILLEFFECT_METHOD_4_DBCFCA0ED9894A9E_OFFSET UNITYSDK_OFFSET(0x18743610)
#define RPG_GAMECORE_BYCURRENTSKILLEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18743690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCurrentSkillEffect_TypeDefinitionIndex = 21943;

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

		static ::System::Void Method_4_DBCFCA0ED9894A9E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentSkillEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentSkillEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLEFFECT_METHOD_4_DBCFCA0ED9894A9E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_30752953E6A2CF45(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCurrentSkillEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCurrentSkillEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCURRENTSKILLEFFECT_METHOD_4_30752953E6A2CF45_OFFSET))(a1, a2);
		}
	};
}
