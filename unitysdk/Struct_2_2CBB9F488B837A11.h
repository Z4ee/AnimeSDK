#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UltraDistanceGlobalDynamicOffsetMode.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_2CBB9F488B837A11_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCF520)

inline static constexpr unsigned int Struct_2_2CBB9F488B837A11_TypeDefinitionIndex = 64118;

struct alignas(4) Struct_2_2CBB9F488B837A11
{
	::System::Boolean Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x11
	::UnityEngine::Vector3 Field_2_2; // 0x14
	::RPG::Client::UltraDistanceGlobalDynamicOffsetMode Field_2_3; // 0x20
	::System::Single Field_2_4; // 0x24
	::System::Single Field_2_5; // 0x28
	::System::Single Field_2_6; // 0x2C

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2CBB9F488B837A11_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
