#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIMapper.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_COMPLEXSKILLAIMAPPERBINARY_METHOD_3_9C1396B76C4F8A68_OFFSET UNITYSDK_OFFSET(0x1CFF2AB0)
#define RPG_GAMECORE_COMPLEXSKILLAIMAPPERBINARY_METHOD_3_F4790E4C075AFB73_OFFSET UNITYSDK_OFFSET(0x1CFF2FD0)
#define RPG_GAMECORE_COMPLEXSKILLAIMAPPERBINARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF2AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAIMapperBinary_TypeDefinitionIndex = 15384;

	class ComplexSkillAIMapperBinary : public ::RPG::GameCore::ComplexSkillAIMapper
	{
	public:
		::RPG::GameCore::FixPoint FalseValue; // 0x10
		::RPG::GameCore::FixPoint TrueValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPERBINARY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F4790E4C075AFB73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIMapperBinary*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIMapperBinary*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPERBINARY_METHOD_3_F4790E4C075AFB73_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9C1396B76C4F8A68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAIMapperBinary* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAIMapperBinary*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAIMAPPERBINARY_METHOD_3_9C1396B76C4F8A68_OFFSET))(a1, a2);
		}
	};
}
