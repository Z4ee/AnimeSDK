#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtSkillConditionMask.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_333F5245BE633597_METHOD_1_99F64D2AFD4CAAD3_OFFSET UNITYSDK_OFFSET(0x18A63DE0)

inline static constexpr unsigned int Class_1_333F5245BE633597_TypeDefinitionIndex = 54268;

class Class_1_333F5245BE633597 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_99F64D2AFD4CAAD3(::RPG::GameCore::RtSkillConditionMask a1, ::RPG::GameCore::RtSkillConditionMask a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::RtSkillConditionMask, ::RPG::GameCore::RtSkillConditionMask))((::PBYTE)hIl2Cpp + CLASS_1_333F5245BE633597_METHOD_1_99F64D2AFD4CAAD3_OFFSET))(a1, a2);
	}
};
