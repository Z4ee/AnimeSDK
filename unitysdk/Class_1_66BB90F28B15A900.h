#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongSPSkillType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_66BB90F28B15A900__CTOR_OFFSET UNITYSDK_OFFSET(0x1A045BB0)

inline static constexpr unsigned int Class_1_66BB90F28B15A900_TypeDefinitionIndex = 40436;

class Class_1_66BB90F28B15A900 : public ::System::Object
{
public:
	::RPG::GameCore::PingPongSPSkillType Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_66BB90F28B15A900__CTOR_OFFSET))(this);
	}
};
