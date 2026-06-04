#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_CD8A00A916F754FE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x2BBAF10)

inline static constexpr unsigned int Struct_2_CD8A00A916F754FE_TypeDefinitionIndex = 53856;

struct alignas(4) Struct_2_CD8A00A916F754FE
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::UnityEngine::Vector3 Field_2_2; // 0x18
	::UnityEngine::Vector3 Field_2_3; // 0x24
	::UnityEngine::Vector3 Field_2_4; // 0x30
	::UnityEngine::Vector3 Field_2_5; // 0x3C
	::System::Single Field_2_6; // 0x48
	::System::Single Field_2_7; // 0x4C
	::System::Single Field_2_8; // 0x50
	::System::Single Field_2_9; // 0x54
	::System::Single Field_2_10; // 0x58
	::System::Single Field_2_11; // 0x5C
	::UnityEngine::Vector3 Field_2_12; // 0x60
	::System::Single Field_2_13; // 0x6C

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_CD8A00A916F754FE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
