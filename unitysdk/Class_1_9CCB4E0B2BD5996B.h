#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FollowSideType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_9CCB4E0B2BD5996B__CTOR_OFFSET UNITYSDK_OFFSET(0x11171810)

inline static constexpr unsigned int Class_1_9CCB4E0B2BD5996B_TypeDefinitionIndex = 45860;

class Class_1_9CCB4E0B2BD5996B : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_4; // 0x10
	::System::Int32 Field_1_3; // 0x18
	::System::Single Field_1_1; // 0x1C
	::System::Single Field_1_0; // 0x20
	::RPG::GameCore::FollowSideType Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CCB4E0B2BD5996B__CTOR_OFFSET))(this);
	}
};
