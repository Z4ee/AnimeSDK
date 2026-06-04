#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYCHECKHAVESKILL_METHOD_4_25A7EA78B4F9552F_OFFSET UNITYSDK_OFFSET(0x198CA300)
#define RPG_GAMECORE_MARBLEBYCHECKHAVESKILL_METHOD_4_634E753EB13FA442_OFFSET UNITYSDK_OFFSET(0x198CA220)
#define RPG_GAMECORE_MARBLEBYCHECKHAVESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x198CA2B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByCheckHaveSkill_TypeDefinitionIndex = 16031;

	class MarbleByCheckHaveSkill : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x28
		::System::UInt32 SkillID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCHECKHAVESKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_634E753EB13FA442(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCheckHaveSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCheckHaveSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCHECKHAVESKILL_METHOD_4_634E753EB13FA442_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_25A7EA78B4F9552F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCheckHaveSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCheckHaveSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCHECKHAVESKILL_METHOD_4_25A7EA78B4F9552F_OFFSET))(a1, a2);
		}
	};
}
