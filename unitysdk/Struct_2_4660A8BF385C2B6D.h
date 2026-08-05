#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1C02EBEB9BBFB46F.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_4660A8BF385C2B6D_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7C32F0)

inline static constexpr unsigned int Struct_2_4660A8BF385C2B6D_TypeDefinitionIndex = 62246;

struct alignas(8) Struct_2_4660A8BF385C2B6D
{
	::UnityEngine::Vector3 Field_2_1; // 0x10
	::System::Single Field_2_0; // 0x1C
	::System::Single Field_2_7; // 0x20
	::System::Single Field_2_6; // 0x24
	::System::Single Field_2_5; // 0x28
	::System::Boolean Field_2_4; // 0x2C
	::System::Single Field_2_11; // 0x30
	::Unity::Collections::NativeList_1<::Struct_2_1C02EBEB9BBFB46F> Field_2_10; // 0x38

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_4660A8BF385C2B6D_EXECUTE_OFFSET))(this, a1);
	}
};
