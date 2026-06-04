#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConvinceTrickSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONVINCEWAITTRICKSKILL_METHOD_3_2031568F2A557D30_OFFSET UNITYSDK_OFFSET(0x1967EB70)
#define RPG_GAMECORE_CONVINCEWAITTRICKSKILL_METHOD_3_F505DAFDB4639523_OFFSET UNITYSDK_OFFSET(0x1967EBF0)
#define RPG_GAMECORE_CONVINCEWAITTRICKSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1967EBC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceWaitTrickSkill_TypeDefinitionIndex = 20623;

	class ConvinceWaitTrickSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ConvinceTrickSkillType TrickSkillType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEWAITTRICKSKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2031568F2A557D30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceWaitTrickSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceWaitTrickSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEWAITTRICKSKILL_METHOD_3_2031568F2A557D30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F505DAFDB4639523(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceWaitTrickSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceWaitTrickSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEWAITTRICKSKILL_METHOD_3_F505DAFDB4639523_OFFSET))(a1, a2);
		}
	};
}
