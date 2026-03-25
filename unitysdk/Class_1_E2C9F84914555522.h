#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_70697F531F566942;
namespace RPG::GameCore { class ComplexSkillAIConfig; }

#define CLASS_1_E2C9F84914555522_METHOD_1_B02CA3C0F0C86AE9_OFFSET UNITYSDK_OFFSET(0x104BDE00)

inline static constexpr unsigned int Class_1_E2C9F84914555522_TypeDefinitionIndex = 43429;

class Class_1_E2C9F84914555522 : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint Method_1_B02CA3C0F0C86AE9(::RPG::GameCore::ComplexSkillAIConfig* a1, ::Class_1_70697F531F566942* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::ComplexSkillAIConfig*, ::Class_1_70697F531F566942*))((::PBYTE)hIl2Cpp + CLASS_1_E2C9F84914555522_METHOD_1_B02CA3C0F0C86AE9_OFFSET))(a1, a2);
	}
};
