#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }

#define STRUCT_2_3906C24C646CC83F_STRUCT_2_61B2D5BFFD1FA8C1_EQUALS_OFFSET UNITYSDK_OFFSET(0x385A760)
#define STRUCT_2_3906C24C646CC83F_STRUCT_2_61B2D5BFFD1FA8C1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x385A780)

inline static constexpr unsigned int Struct_2_3906C24C646CC83F_Struct_2_61B2D5BFFD1FA8C1_TypeDefinitionIndex = 6911;

struct alignas(8) Struct_2_3906C24C646CC83F_Struct_2_61B2D5BFFD1FA8C1
{
	::System::Boolean Field_2_0; // 0x10
	::System::SByte Field_2_1; // 0x10
	::System::Byte Field_2_2; // 0x10
	::System::Char Field_2_3; // 0x10
	::System::Int16 Field_2_4; // 0x10
	::System::UInt16 Field_2_5; // 0x10
	::System::Int32 Field_2_6; // 0x10
	::System::UInt32 Field_2_7; // 0x10
	::System::Int64 Field_2_8; // 0x10
	::System::UInt64 Field_2_9; // 0x10
	::System::Single Field_2_10; // 0x10
	::System::Double Field_2_11; // 0x10
	::UnityEngine::Vector2 Field_2_12; // 0x10
	::UnityEngine::Vector3 Field_2_13; // 0x10
	::UnityEngine::Vector4 Field_2_14; // 0x10
	::UnityEngine::Quaternion Field_2_15; // 0x10
	::UnityEngine::Color Field_2_16; // 0x10
	::UnityEngine::Color32 Field_2_17; // 0x10

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_3906C24C646CC83F_STRUCT_2_61B2D5BFFD1FA8C1_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3906C24C646CC83F_STRUCT_2_61B2D5BFFD1FA8C1_GETHASHCODE_OFFSET))(this);
	}
};
