#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4579988CF4E8E117.h"
#include "unitysdk/Struct_2_52A902145F5BE51F_1.h"
#include "unitysdk/Struct_2_CECEDD33F79E5905.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_1B8F7BE563C4A68A_METHOD_2_6C36F53EF56D4160_OFFSET UNITYSDK_OFFSET(0x7F32A0)

inline static constexpr unsigned int Struct_2_1B8F7BE563C4A68A_TypeDefinitionIndex = 82090;

struct alignas(8) Struct_2_1B8F7BE563C4A68A
{
	::Struct_2_52A902145F5BE51F_1 Field_2_2; // 0x10
	::System::Boolean Field_2_1; // 0xD4
	::System::Boolean Field_2_0; // 0xD5
	::System::Boolean Field_2_7; // 0xD6
	::UnityEngine::Vector2 Field_2_6; // 0xD8
	::UnityEngine::Vector2 Field_2_5; // 0xE0
	::UnityEngine::Vector3 Field_2_4; // 0xE8
	::UnityEngine::Vector3 Field_2_11; // 0xF4
	::UnityEngine::Quaternion Field_2_10; // 0x100
	::UnityEngine::Vector3 Field_2_9; // 0x110
	::System::Nullable_1<::Struct_2_CECEDD33F79E5905> Field_2_8; // 0x120
	::System::Nullable_1<::Struct_2_CECEDD33F79E5905> Field_2_15; // 0x170
	::System::Nullable_1<::Struct_2_CECEDD33F79E5905> Field_2_14; // 0x1C0
	::System::Nullable_1<::Struct_2_CECEDD33F79E5905> Field_2_13; // 0x210
	::System::Nullable_1<::Struct_2_CECEDD33F79E5905> Field_2_12; // 0x260
	::System::Single Field_2_19; // 0x2B0
	::System::Single Field_2_18; // 0x2B4
	::System::Single Field_2_17; // 0x2B8
	::Struct_2_4579988CF4E8E117 Field_2_16; // 0x2BC
	::System::Collections::Generic::List_1<::Struct_2_CECEDD33F79E5905>* Field_2_23; // 0x2D0

	::System::Void Method_2_6C36F53EF56D4160(::Struct_2_1B8F7BE563C4A68A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_1B8F7BE563C4A68A))((::PBYTE)hIl2Cpp + STRUCT_2_1B8F7BE563C4A68A_METHOD_2_6C36F53EF56D4160_OFFSET))(this, a1);
	}
};
