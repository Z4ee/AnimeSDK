#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_FCF82A8169AB2275_METHOD_2_BF972395CC722BF9_OFFSET UNITYSDK_OFFSET(0x726680)
#define STRUCT_2_FCF82A8169AB2275_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x726780)

inline static constexpr unsigned int Struct_2_FCF82A8169AB2275_TypeDefinitionIndex = 72227;

struct alignas(4) Struct_2_FCF82A8169AB2275
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x1C
	::System::Single Field_2_4; // 0x20
	::UnityEngine::Vector3 Field_2_5; // 0x24
	::UnityEngine::Vector3 Field_2_6; // 0x30
	::System::Boolean Field_2_7; // 0x3C

	::UnityEngine::Vector3 Method_2_BF972395CC722BF9()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FCF82A8169AB2275_METHOD_2_BF972395CC722BF9_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FCF82A8169AB2275_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
