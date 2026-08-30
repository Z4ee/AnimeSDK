#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TimeRewindMaterialOverlayConfig; }

#define CLASS_1_D63DE2EC2835DB62_CLASS_1_7454F79F911CC6C3_CLEAR_OFFSET UNITYSDK_OFFSET(0x17A386E0)
#define CLASS_1_D63DE2EC2835DB62_CLASS_1_7454F79F911CC6C3__CTOR_OFFSET UNITYSDK_OFFSET(0x17A38730)

inline static constexpr unsigned int Class_1_D63DE2EC2835DB62_Class_1_7454F79F911CC6C3_TypeDefinitionIndex = 60937;

class Class_1_D63DE2EC2835DB62_Class_1_7454F79F911CC6C3 : public ::System::Object
{
public:
	::RPG::GameCore::TimeRewindMaterialOverlayConfig* ABAINBONPEP; // 0x10
	::System::Single OECIKCPBBOE; // 0x18
	::System::Single MPLADBKEPNC; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D63DE2EC2835DB62_CLASS_1_7454F79F911CC6C3__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D63DE2EC2835DB62_CLASS_1_7454F79F911CC6C3_CLEAR_OFFSET))(this);
	}
};
