#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ComplexSkillAIMapper; }
namespace RPG::GameCore { class ComplexSkillAIMapperBinary; }
namespace RPG::GameCore { class ComplexSkillAIMapperExpCurve; }
namespace RPG::GameCore { class ComplexSkillAIMapperMultiRange; }

#define CLASS_1_8914B3FB1906DCCE_METHOD_1_19FA126D1D83E9F2_OFFSET UNITYSDK_OFFSET(0xD7E61A0)
#define CLASS_1_8914B3FB1906DCCE_METHOD_1_5AA2D0F0A355E4DD_OFFSET UNITYSDK_OFFSET(0xD7E6A50)
#define CLASS_1_8914B3FB1906DCCE_METHOD_1_A7AD6A2DE5F3A001_OFFSET UNITYSDK_OFFSET(0xD7E62A0)
#define CLASS_1_8914B3FB1906DCCE_METHOD_1_BB7F4FE0C8D4BF06_OFFSET UNITYSDK_OFFSET(0xD7E5F10)

inline static constexpr unsigned int Class_1_8914B3FB1906DCCE_TypeDefinitionIndex = 54564;

class Class_1_8914B3FB1906DCCE : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint Method_1_BB7F4FE0C8D4BF06(::RPG::GameCore::ComplexSkillAIMapper* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIMapper*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_8914B3FB1906DCCE_METHOD_1_BB7F4FE0C8D4BF06_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_19FA126D1D83E9F2(::RPG::GameCore::ComplexSkillAIMapperBinary* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIMapperBinary*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_8914B3FB1906DCCE_METHOD_1_19FA126D1D83E9F2_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_A7AD6A2DE5F3A001(::RPG::GameCore::ComplexSkillAIMapperMultiRange* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIMapperMultiRange*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_8914B3FB1906DCCE_METHOD_1_A7AD6A2DE5F3A001_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_5AA2D0F0A355E4DD(::RPG::GameCore::ComplexSkillAIMapperExpCurve* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIMapperExpCurve*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_8914B3FB1906DCCE_METHOD_1_5AA2D0F0A355E4DD_OFFSET))(a1, a2);
	}
};
