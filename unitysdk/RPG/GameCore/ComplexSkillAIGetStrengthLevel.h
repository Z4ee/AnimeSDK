#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAIGETSTRENGTHLEVEL_METHOD_3_2180C52B6118FF41_OFFSET UNITYSDK_OFFSET(0x1CFF2610)
#define RPG_GAMECORE_COMPLEXSKILLAIGETSTRENGTHLEVEL_METHOD_3_BE327CCC6FD0F52C_OFFSET UNITYSDK_OFFSET(0x1CFF2690)
#define RPG_GAMECORE_COMPLEXSKILLAIGETSTRENGTHLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF2680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIGetStrengthLevel_TypeDefinitionIndex = 15400;

	class ComplexSkillAIGetStrengthLevel : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIGETSTRENGTHLEVEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2180C52B6118FF41(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIGetStrengthLevel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIGetStrengthLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIGETSTRENGTHLEVEL_METHOD_3_2180C52B6118FF41_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BE327CCC6FD0F52C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIGetStrengthLevel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIGetStrengthLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIGETSTRENGTHLEVEL_METHOD_3_BE327CCC6FD0F52C_OFFSET))(a1, a2);
		}
	};
}
