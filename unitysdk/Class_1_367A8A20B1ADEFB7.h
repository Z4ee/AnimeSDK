#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeLineupAvatarSaveType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_367A8A20B1ADEFB7__CTOR_OFFSET UNITYSDK_OFFSET(0x13CFA900)

inline static constexpr unsigned int Class_1_367A8A20B1ADEFB7_TypeDefinitionIndex = 59042;

class Class_1_367A8A20B1ADEFB7 : public ::System::Object
{
public:
	::RPG::Client::ChallengeLineupAvatarSaveType Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_367A8A20B1ADEFB7__CTOR_OFFSET))(this);
	}
};
