#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_94D0AE74FD6D91E5.h"
#include "unitysdk/Struct_2_D5C89760A7E7ACB8.h"
#include "unitysdk/Struct_2_FCF82A8169AB2275.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_6DFF19B6F3C06757_METHOD_2_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0x6FC660)

inline static constexpr unsigned int Struct_2_6DFF19B6F3C06757_TypeDefinitionIndex = 73785;

struct alignas(4) Struct_2_6DFF19B6F3C06757
{
	::System::Single Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x14
	::UnityEngine::Vector3 Field_2_2; // 0x20
	::System::Single Field_2_3; // 0x2C
	::System::Single Field_2_4; // 0x30
	::System::Single Field_2_5; // 0x34
	::System::Single Field_2_6; // 0x38
	::System::Single Field_2_7; // 0x3C
	::Struct_2_FCF82A8169AB2275 Field_2_8; // 0x40
	::UnityEngine::Vector3 Field_2_9; // 0x70
	::Struct_2_D5C89760A7E7ACB8 Field_2_10; // 0x7C
	::Enum_3_94D0AE74FD6D91E5 Field_2_11; // 0x9C
	::UnityEngine::Vector2 Field_2_12; // 0xA0
	::System::Boolean Field_2_13; // 0xA8

	::System::Void Method_2_3C56C1AF247AC1EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6DFF19B6F3C06757_METHOD_2_3C56C1AF247AC1EC_OFFSET))(this);
	}
};
