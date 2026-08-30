#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEADDSKILL_METHOD_3_05591B011D32BA82_OFFSET UNITYSDK_OFFSET(0x1D4A2E40)
#define RPG_GAMECORE_MARBLEADDSKILL_METHOD_3_D6B72F5689342704_OFFSET UNITYSDK_OFFSET(0x1D4A2DE0)
#define RPG_GAMECORE_MARBLEADDSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A2E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleAddSkill_TypeDefinitionIndex = 16676;

	class MarbleAddSkill : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::UInt32 SkillId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D6B72F5689342704(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAddSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAddSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSKILL_METHOD_3_D6B72F5689342704_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_05591B011D32BA82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleAddSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleAddSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEADDSKILL_METHOD_3_05591B011D32BA82_OFFSET))(a1, a2);
		}
	};
}
