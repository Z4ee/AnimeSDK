#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYCHECKHAVESKILL_METHOD_4_009A7D9655C93644_OFFSET UNITYSDK_OFFSET(0x18A97120)
#define RPG_GAMECORE_MARBLEBYCHECKHAVESKILL_METHOD_4_CB8C3CEC19B63116_OFFSET UNITYSDK_OFFSET(0x18A97040)
#define RPG_GAMECORE_MARBLEBYCHECKHAVESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x18A970D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByCheckHaveSkill_TypeDefinitionIndex = 15981;

	class MarbleByCheckHaveSkill : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x28
		::System::UInt32 SkillID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCHECKHAVESKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CB8C3CEC19B63116(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCheckHaveSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCheckHaveSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCHECKHAVESKILL_METHOD_4_CB8C3CEC19B63116_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_009A7D9655C93644(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCheckHaveSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCheckHaveSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCHECKHAVESKILL_METHOD_4_009A7D9655C93644_OFFSET))(a1, a2);
		}
	};
}
