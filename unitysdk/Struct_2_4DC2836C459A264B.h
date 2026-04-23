#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillAutoLockType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class ComplexSkillAIConfig; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillExtensionComplexSkillAIConfig; }

#define STRUCT_2_4DC2836C459A264B_METHOD_2_3D64C539C6ACE026_OFFSET UNITYSDK_OFFSET(0x1175BCF0)
#define STRUCT_2_4DC2836C459A264B_METHOD_2_773B07A1B47F5033_OFFSET UNITYSDK_OFFSET(0x1175BE60)

inline static constexpr unsigned int Struct_2_4DC2836C459A264B_TypeDefinitionIndex = 53179;

struct alignas(8) Struct_2_4DC2836C459A264B
{
	::System::Boolean Field_2_0; // 0x10
	::RPG::GameCore::SkillAutoLockType Field_2_1; // 0x14
	::RPG::GameCore::ComplexSkillAIConfig* Field_2_2; // 0x18
	::RPG::GameCore::ComplexSkillAIConfig* Field_2_3; // 0x20
	::RPG::GameCore::ComplexSkillAIConfig* Field_2_4; // 0x28
	::System::Int32 Field_2_5; // 0x30

	static ::Struct_2_4DC2836C459A264B Method_2_3D64C539C6ACE026(::RPG::GameCore::SkillConfig* a1)
	{
		return ((::Struct_2_4DC2836C459A264B(*)(::RPG::GameCore::SkillConfig*))((::PBYTE)hIl2Cpp + STRUCT_2_4DC2836C459A264B_METHOD_2_3D64C539C6ACE026_OFFSET))(a1);
	}

	static ::Struct_2_4DC2836C459A264B Method_2_773B07A1B47F5033(::RPG::GameCore::SkillExtensionComplexSkillAIConfig* a1, ::RPG::GameCore::SkillConfig* a2)
	{
		return ((::Struct_2_4DC2836C459A264B(*)(::RPG::GameCore::SkillExtensionComplexSkillAIConfig*, ::RPG::GameCore::SkillConfig*))((::PBYTE)hIl2Cpp + STRUCT_2_4DC2836C459A264B_METHOD_2_773B07A1B47F5033_OFFSET))(a1, a2);
	}
};
