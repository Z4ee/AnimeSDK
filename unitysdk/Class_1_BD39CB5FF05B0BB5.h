#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FCD0D88D13269531.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimSwitchPlatformConfig; }

#define CLASS_1_BD39CB5FF05B0BB5__CTOR_OFFSET UNITYSDK_OFFSET(0x17F2CFB0)

inline static constexpr unsigned int Class_1_BD39CB5FF05B0BB5_TypeDefinitionIndex = 39286;

class Class_1_BD39CB5FF05B0BB5 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimSwitchPlatformConfig* Field_1_0; // 0x10
	::Struct_2_FCD0D88D13269531 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD39CB5FF05B0BB5__CTOR_OFFSET))(this);
	}
};
