#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_4.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class IAvatarSkillCommonRowWrap; }

#define CLASS_1_0D1F2E442F94B633_METHOD_1_E2903559EF2FBF1C_OFFSET UNITYSDK_OFFSET(0x87E6C60)

inline static constexpr unsigned int Class_1_0D1F2E442F94B633_TypeDefinitionIndex = 50911;

class Class_1_0D1F2E442F94B633 : public ::System::Object
{
public:
	static ::RPG::GameCore::IAvatarSkillCommonRowWrap* Method_1_E2903559EF2FBF1C(::Struct_2_019938BC9C50B169_4 a1)
	{
		return ((::RPG::GameCore::IAvatarSkillCommonRowWrap*(*)(::Struct_2_019938BC9C50B169_4))((::PBYTE)hIl2Cpp + CLASS_1_0D1F2E442F94B633_METHOD_1_E2903559EF2FBF1C_OFFSET))(a1);
	}
};
