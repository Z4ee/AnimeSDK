#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_AC0BFB3332EC1F74_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x82F960)

inline static constexpr unsigned int Struct_2_AC0BFB3332EC1F74_TypeDefinitionIndex = 81287;

struct alignas(4) Struct_2_AC0BFB3332EC1F74
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x1C
	::UnityEngine::Vector3 Field_2_2; // 0x28
	::UnityEngine::Vector3 Field_2_3; // 0x34
	::System::Single Field_2_4; // 0x40
	::System::Single Field_2_5; // 0x44
	::System::Boolean Field_2_6; // 0x48
	::System::Single Field_2_7; // 0x4C
	::System::Int32 Field_2_8; // 0x50

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AC0BFB3332EC1F74_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
