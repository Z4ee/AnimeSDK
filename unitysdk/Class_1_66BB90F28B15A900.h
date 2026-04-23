#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongSPSkillType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_66BB90F28B15A900__CTOR_OFFSET UNITYSDK_OFFSET(0x17E69D50)

inline static constexpr unsigned int Class_1_66BB90F28B15A900_TypeDefinitionIndex = 38859;

class Class_1_66BB90F28B15A900 : public ::System::Object
{
public:
	::System::Single Field_1_1; // 0x10
	::RPG::GameCore::PingPongSPSkillType Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66BB90F28B15A900__CTOR_OFFSET))(this);
	}
};
