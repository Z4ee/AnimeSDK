#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6D798C312C19218B.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_49AC6DA8DF52C6B9_EXECUTE_OFFSET UNITYSDK_OFFSET(0x61E890)

inline static constexpr unsigned int Struct_2_49AC6DA8DF52C6B9_TypeDefinitionIndex = 62318;

struct alignas(8) Struct_2_49AC6DA8DF52C6B9
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x1C
	::System::Single Field_2_2; // 0x20
	::System::Single Field_2_3; // 0x24
	::System::Single Field_2_4; // 0x28
	::System::Boolean Field_2_5; // 0x2C
	::System::Single Field_2_6; // 0x30
	::Unity::Collections::NativeList_1<::Struct_2_6D798C312C19218B> Field_2_7; // 0x38

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_49AC6DA8DF52C6B9_EXECUTE_OFFSET))(this, a1);
	}
};
