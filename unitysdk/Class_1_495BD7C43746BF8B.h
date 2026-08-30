#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class NPCTriggerSound; }

#define CLASS_1_495BD7C43746BF8B__CTOR_OFFSET UNITYSDK_OFFSET(0xB8DE680)

inline static constexpr unsigned int Class_1_495BD7C43746BF8B_TypeDefinitionIndex = 57234;

class Class_1_495BD7C43746BF8B : public ::System::Object
{
public:
	::RPG::GameCore::NPCTriggerSound* DNOPBFNPKHB; // 0x10
	::System::Boolean BNIMJJNOLAI; // 0x18
	::System::Int32 AFLGFLKMGHN; // 0x1C
	::System::Single EOMMECBBLNC; // 0x20
	::System::Single PKACHEPDCPO; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_495BD7C43746BF8B__CTOR_OFFSET))(this);
	}
};
