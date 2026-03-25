#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_70697F531F566942;
namespace RPG::GameCore { class ComplexSkillAIFactorGroup; }

#define CLASS_1_360B0B06B1490F38_METHOD_1_4D60A580D6632E42_OFFSET UNITYSDK_OFFSET(0x1142F530)

inline static constexpr unsigned int Class_1_360B0B06B1490F38_TypeDefinitionIndex = 43431;

class Class_1_360B0B06B1490F38 : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint Method_1_4D60A580D6632E42(::RPG::GameCore::ComplexSkillAIFactorGroup* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIFactorGroup*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_360B0B06B1490F38_METHOD_1_4D60A580D6632E42_OFFSET))(a1, a2);
	}
};
