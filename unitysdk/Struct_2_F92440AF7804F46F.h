#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define STRUCT_2_F92440AF7804F46F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x48EBB0)
#define STRUCT_2_F92440AF7804F46F_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x48EBA0)
#define STRUCT_2_F92440AF7804F46F_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x48EB90)

inline static constexpr unsigned int Struct_2_F92440AF7804F46F_TypeDefinitionIndex = 45919;

struct alignas(4) Struct_2_F92440AF7804F46F
{
	::System::Single Field_2_0; // 0x10
	::UnityEngine::Vector2 Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x1C

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F92440AF7804F46F_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F92440AF7804F46F_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F92440AF7804F46F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
