#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_83665B095F1535B5_2.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_2_A48F3719AA1CF200_19__CTOR_OFFSET UNITYSDK_OFFSET(0x12B90BA0)

inline static constexpr unsigned int Class_2_A48F3719AA1CF200_19_TypeDefinitionIndex = 49520;

class Class_2_A48F3719AA1CF200_19 : public ::Class_1_83665B095F1535B5_2
{
public:
	::UnityEngine::Rendering::Universal::SampleDistanceMode Field_2_1; // 0x18
	::System::Single Field_2_7; // 0x1C
	::System::Int32 Field_2_2; // 0x20
	::System::Single Field_2_14; // 0x24
	::System::Single Field_2_13; // 0x28
	::UnityEngine::Vector2 Field_2_6; // 0x2C
	::System::Boolean Field_2_8; // 0x34
	::System::Boolean Field_2_10; // 0x35
	::System::Boolean Field_2_11; // 0x36
	::System::Single Field_2_3; // 0x38
	::System::Single Field_2_15; // 0x3C
	::System::Int32 Field_2_5; // 0x40
	::System::Single Field_2_4; // 0x44
	::System::Single Field_2_12; // 0x48
	::UnityEngine::Vector2 Field_2_9; // 0x4C
	::UnityEngine::Rendering::Universal::DownSampleLevel Field_2_0; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_19__CTOR_OFFSET))(this);
	}
};
