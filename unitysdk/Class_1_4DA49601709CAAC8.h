#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtSkillPropertyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RtSkillConfig; }

#define CLASS_1_4DA49601709CAAC8_METHOD_1_D944A018FFCA0A20_OFFSET UNITYSDK_OFFSET(0x13FFC660)

inline static constexpr unsigned int Class_1_4DA49601709CAAC8_TypeDefinitionIndex = 50506;

class Class_1_4DA49601709CAAC8 : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint Method_1_D944A018FFCA0A20(::RPG::GameCore::RtSkillConfig* a1, ::RPG::GameCore::RtSkillPropertyType a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::RtSkillConfig*, ::RPG::GameCore::RtSkillPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_4DA49601709CAAC8_METHOD_1_D944A018FFCA0A20_OFFSET))(a1, a2);
	}
};
