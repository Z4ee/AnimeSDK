#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillAutoLockType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class ComplexSkillAIConfig; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillExtensionComplexSkillAIConfig; }

#define STRUCT_2_165AEDBFDC2B5511_METHOD_2_6CCF7D2CA5164C7C_OFFSET UNITYSDK_OFFSET(0x15B19ED0)
#define STRUCT_2_165AEDBFDC2B5511_METHOD_2_947E47DF64C960C1_OFFSET UNITYSDK_OFFSET(0x15B19FB0)

inline static constexpr unsigned int Struct_2_165AEDBFDC2B5511_TypeDefinitionIndex = 55112;

struct alignas(8) Struct_2_165AEDBFDC2B5511
{
	::System::Boolean Field_2_0; // 0x10
	::RPG::GameCore::SkillAutoLockType Field_2_1; // 0x14
	::RPG::GameCore::ComplexSkillAIConfig* Field_2_2; // 0x18
	::RPG::GameCore::ComplexSkillAIConfig* Field_2_3; // 0x20
	::RPG::GameCore::ComplexSkillAIConfig* Field_2_4; // 0x28
	::System::Int32 Field_2_5; // 0x30

	static ::Struct_2_165AEDBFDC2B5511 Method_2_6CCF7D2CA5164C7C(::RPG::GameCore::SkillConfig* a1)
	{
		return ((::Struct_2_165AEDBFDC2B5511(*)(::RPG::GameCore::SkillConfig*))((::PBYTE)hIl2Cpp + STRUCT_2_165AEDBFDC2B5511_METHOD_2_6CCF7D2CA5164C7C_OFFSET))(a1);
	}

	static ::Struct_2_165AEDBFDC2B5511 Method_2_947E47DF64C960C1(::RPG::GameCore::SkillExtensionComplexSkillAIConfig* a1, ::RPG::GameCore::SkillConfig* a2)
	{
		return ((::Struct_2_165AEDBFDC2B5511(*)(::RPG::GameCore::SkillExtensionComplexSkillAIConfig*, ::RPG::GameCore::SkillConfig*))((::PBYTE)hIl2Cpp + STRUCT_2_165AEDBFDC2B5511_METHOD_2_947E47DF64C960C1_OFFSET))(a1, a2);
	}
};
