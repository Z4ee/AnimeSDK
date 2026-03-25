#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ComplexSkillAIMapper; }
namespace RPG::GameCore { class ComplexSkillAIMapperBinary; }
namespace RPG::GameCore { class ComplexSkillAIMapperExpCurve; }
namespace RPG::GameCore { class ComplexSkillAIMapperMultiRange; }

#define CLASS_1_A2E2DFFDC831A4E5_METHOD_1_09696D37B20B1BDF_OFFSET UNITYSDK_OFFSET(0x1145A0A0)
#define CLASS_1_A2E2DFFDC831A4E5_METHOD_1_1EE496D13D2EB806_OFFSET UNITYSDK_OFFSET(0x11459EC0)
#define CLASS_1_A2E2DFFDC831A4E5_METHOD_1_26D5A8BB413EB00F_OFFSET UNITYSDK_OFFSET(0x1145A030)
#define CLASS_1_A2E2DFFDC831A4E5_METHOD_1_515EB86540DEEB6D_OFFSET UNITYSDK_OFFSET(0x1145A3C0)

inline static constexpr unsigned int Class_1_A2E2DFFDC831A4E5_TypeDefinitionIndex = 43433;

class Class_1_A2E2DFFDC831A4E5 : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint Method_1_1EE496D13D2EB806(::RPG::GameCore::ComplexSkillAIMapper* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIMapper*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_A2E2DFFDC831A4E5_METHOD_1_1EE496D13D2EB806_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_26D5A8BB413EB00F(::RPG::GameCore::ComplexSkillAIMapperBinary* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIMapperBinary*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_A2E2DFFDC831A4E5_METHOD_1_26D5A8BB413EB00F_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_09696D37B20B1BDF(::RPG::GameCore::ComplexSkillAIMapperMultiRange* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIMapperMultiRange*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_A2E2DFFDC831A4E5_METHOD_1_09696D37B20B1BDF_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_515EB86540DEEB6D(::RPG::GameCore::ComplexSkillAIMapperExpCurve* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIMapperExpCurve*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_A2E2DFFDC831A4E5_METHOD_1_515EB86540DEEB6D_OFFSET))(a1, a2);
	}
};
