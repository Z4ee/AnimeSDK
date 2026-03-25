#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_USESEQUENCEDSKILL_METHOD_3_620339A18E2A5DC0_OFFSET UNITYSDK_OFFSET(0x178E83B0)
#define RPG_GAMECORE_USESEQUENCEDSKILL_METHOD_3_6B76359F7C4F6A4C_OFFSET UNITYSDK_OFFSET(0x178E84C0)
#define RPG_GAMECORE_USESEQUENCEDSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x178E8490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UseSequencedSkill_TypeDefinitionIndex = 20629;

	class UseSequencedSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESEQUENCEDSKILL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_620339A18E2A5DC0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UseSequencedSkill*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UseSequencedSkill*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESEQUENCEDSKILL_METHOD_3_620339A18E2A5DC0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6B76359F7C4F6A4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UseSequencedSkill* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UseSequencedSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USESEQUENCEDSKILL_METHOD_3_6B76359F7C4F6A4C_OFFSET))(a1, a2);
		}
	};
}
