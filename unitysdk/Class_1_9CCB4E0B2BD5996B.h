#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FollowSideType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_9CCB4E0B2BD5996B__CTOR_OFFSET UNITYSDK_OFFSET(0xBD9F440)

inline static constexpr unsigned int Class_1_9CCB4E0B2BD5996B_TypeDefinitionIndex = 57154;

class Class_1_9CCB4E0B2BD5996B : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* JPBIPLGPMFO; // 0x10
	::RPG::GameCore::FollowSideType EGHDMDEJICM; // 0x18
	::System::Single CONJAMJKHBI; // 0x1C
	::System::Int32 PHFMCACHFIJ; // 0x20
	::System::Single BJOCBPFKJDP; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CCB4E0B2BD5996B__CTOR_OFFSET))(this);
	}
};
