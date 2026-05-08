#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }

#define STRUCT_2_919274236F62416B_METHOD_2_C398E9CC217202E7_OFFSET UNITYSDK_OFFSET(0x6CDC40)

inline static constexpr unsigned int Struct_2_919274236F62416B_TypeDefinitionIndex = 81575;

struct alignas(8) Struct_2_919274236F62416B
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x1C
	::UnityEngine::GameObject* Field_2_2; // 0x28
	::UnityEngine::Vector3 Field_2_3; // 0x30

	/*
	::System::Void Method_2_C398E9CC217202E7(::UnityEngine::RaycastHit& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + STRUCT_2_919274236F62416B_METHOD_2_C398E9CC217202E7_OFFSET))(this, a1);
	}
	*/
};
