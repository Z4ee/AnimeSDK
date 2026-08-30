#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_276321B6B122C69C_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IAvatarSkillCommonRowWrap; }

#define CLASS_1_9F645C28DAC8BE05_METHOD_1_94B9A4D6F1B76A5D_OFFSET UNITYSDK_OFFSET(0x17DF4870)

inline static constexpr unsigned int Class_1_9F645C28DAC8BE05_TypeDefinitionIndex = 62727;

class Class_1_9F645C28DAC8BE05 : public ::System::Object
{
public:
	static ::RPG::GameCore::IAvatarSkillCommonRowWrap* Method_1_94B9A4D6F1B76A5D(::Struct_2_276321B6B122C69C_1 a1)
	{
		return ((::RPG::GameCore::IAvatarSkillCommonRowWrap*(*)(::Struct_2_276321B6B122C69C_1))((::PBYTE)hIl2Cpp + CLASS_1_9F645C28DAC8BE05_METHOD_1_94B9A4D6F1B76A5D_OFFSET))(a1);
	}
};
