#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define STRUCT_2_8DE71E68381795E3_EXECUTE_OFFSET UNITYSDK_OFFSET(0x14E6DA0)
#define STRUCT_2_8DE71E68381795E3_METHOD_2_2C6D4994BE977BFA_OFFSET UNITYSDK_OFFSET(0x11565A40)

inline static constexpr unsigned int Struct_2_8DE71E68381795E3_TypeDefinitionIndex = 57706;

struct alignas(8) Struct_2_8DE71E68381795E3
{
	::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> Field_2_0; // 0x10
	::Unity::Collections::NativeArray_1<::System::Single> Field_2_1; // 0x20
	::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> Field_2_2; // 0x30
	::System::Single Field_2_3; // 0x40
	::UnityEngine::Matrix4x4 Field_2_4; // 0x44
	::System::Single Field_2_5; // 0x84
	::System::Single Field_2_6; // 0x88
	::UnityEngine::Vector3 Field_2_7; // 0x8C
	::System::Single Field_2_8; // 0x98
	::System::Single Field_2_9; // 0x9C
	::System::Single Field_2_10; // 0xA0
	::System::Single Field_2_11; // 0xA4
	::Unity::Collections::NativeArray_1<::System::Single> Field_2_12; // 0xA8
	::UnityEngine::Matrix4x4 Field_2_13; // 0xB8
	::System::Boolean Field_2_14; // 0xF8

	static ::System::Single Method_2_2C6D4994BE977BFA(::Unity::Collections::NativeArray_1<::System::Single> a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::Unity::Collections::NativeArray_1<::System::Single>, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_8DE71E68381795E3_METHOD_2_2C6D4994BE977BFA_OFFSET))(a1, a2);
	}

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_8DE71E68381795E3_EXECUTE_OFFSET))(this, a1);
	}
};
