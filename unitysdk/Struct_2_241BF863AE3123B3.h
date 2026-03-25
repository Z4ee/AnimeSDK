#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace UnityEngine { class Transform; }

#define STRUCT_2_241BF863AE3123B3_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x20E4F40)

inline static constexpr unsigned int Struct_2_241BF863AE3123B3_TypeDefinitionIndex = 33460;

struct alignas(8) Struct_2_241BF863AE3123B3
{
	::System::Boolean Field_2_0; // 0x10
	::UnityEngine::RaycastHit Field_2_1; // 0x14
	::System::Boolean Field_2_2; // 0x44
	::System::Boolean Field_2_3; // 0x45
	::System::Boolean Field_2_4; // 0x46
	::System::Boolean Field_2_5; // 0x47
	::System::Boolean Field_2_6; // 0x48
	::System::Boolean Field_2_7; // 0x49
	::System::Boolean Field_2_8; // 0x4A
	::System::Int32 Field_2_9; // 0x4C
	::UnityEngine::Transform* Field_2_10; // 0x50
	::System::Boolean Field_2_11; // 0x58
	::System::Boolean Field_2_12; // 0x59
	::System::Single Field_2_13; // 0x5C

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_241BF863AE3123B3_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}
};
