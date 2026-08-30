#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongSPSkillType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_66BB90F28B15A900__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE2EDE0)

inline static constexpr unsigned int Class_1_66BB90F28B15A900_TypeDefinitionIndex = 41374;

class Class_1_66BB90F28B15A900 : public ::System::Object
{
public:
	::System::Single GCAMNGCEBKD; // 0x10
	::RPG::GameCore::PingPongSPSkillType BPFFIGIAPJI; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66BB90F28B15A900__CTOR_OFFSET))(this);
	}
};
