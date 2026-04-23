#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FloorSavedValueOverride; }
namespace RPG::GameCore { class TriggerPerformanceMask; }

#define CLASS_1_F9A21D4336DB77EF__CTOR_OFFSET UNITYSDK_OFFSET(0x9391B70)

inline static constexpr unsigned int Class_1_F9A21D4336DB77EF_TypeDefinitionIndex = 57210;

class Class_1_F9A21D4336DB77EF : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FloorSavedValueOverride*>* Field_1_10; // 0x10
	::RPG::GameCore::TriggerPerformanceMask* Field_1_9; // 0x18
	::System::UInt32 Field_1_5; // 0x20
	::System::UInt32 Field_1_1; // 0x24
	::RPG::GameCore::ELevelPerformanceType Field_1_6; // 0x28
	::System::UInt32 Field_1_3; // 0x2C
	::System::UInt32 Field_1_7; // 0x30
	::System::UInt32 Field_1_0; // 0x34
	::System::UInt32 Field_1_4; // 0x38
	::System::UInt32 Field_1_2; // 0x3C
	::System::UInt32 Field_1_8; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9A21D4336DB77EF__CTOR_OFFSET))(this);
	}
};
