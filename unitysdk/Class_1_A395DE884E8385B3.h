#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TriggerPerformanceMask; }

#define CLASS_1_A395DE884E8385B3__CTOR_OFFSET UNITYSDK_OFFSET(0x104CE820)

inline static constexpr unsigned int Class_1_A395DE884E8385B3_TypeDefinitionIndex = 50351;

class Class_1_A395DE884E8385B3 : public ::System::Object
{
public:
	::RPG::GameCore::TriggerPerformanceMask* Field_1_9; // 0x10
	::System::UInt32 Field_1_0; // 0x18
	::System::UInt32 Field_1_1; // 0x1C
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x24
	::System::UInt32 Field_1_5; // 0x28
	::System::UInt32 Field_1_8; // 0x2C
	::System::UInt32 Field_1_7; // 0x30
	::System::UInt32 Field_1_4; // 0x34
	::RPG::GameCore::ELevelPerformanceType Field_1_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A395DE884E8385B3__CTOR_OFFSET))(this);
	}
};
