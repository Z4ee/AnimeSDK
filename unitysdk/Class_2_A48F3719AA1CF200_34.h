#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_83665B095F1535B5_2.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofDebugMode.h"

#define CLASS_2_A48F3719AA1CF200_34__CTOR_OFFSET UNITYSDK_OFFSET(0x14D0E500)

inline static constexpr unsigned int Class_2_A48F3719AA1CF200_34_TypeDefinitionIndex = 81657;

class Class_2_A48F3719AA1CF200_34 : public ::Class_1_83665B095F1535B5_2
{
public:
	::System::Single Field_2_7; // 0x18
	::UnityEngine::Rendering::Universal::DofDebugMode Field_2_15; // 0x1C
	::System::Boolean Field_2_13; // 0x20
	::System::Boolean Field_2_6; // 0x21
	::System::Boolean Field_2_14; // 0x22
	::System::Boolean Field_2_10; // 0x23
	::System::Boolean Field_2_4; // 0x24
	::System::Single Field_2_1; // 0x28
	::System::Int32 Field_2_9; // 0x2C
	::System::Single Field_2_5; // 0x30
	::System::Single Field_2_11; // 0x34
	::System::Single Field_2_8; // 0x38
	::System::Single Field_2_3; // 0x3C
	::System::Single Field_2_12; // 0x40
	::UnityEngine::Rendering::Universal::DepthOfFieldMode Field_2_0; // 0x44
	::System::Single Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_34__CTOR_OFFSET))(this);
	}
};
