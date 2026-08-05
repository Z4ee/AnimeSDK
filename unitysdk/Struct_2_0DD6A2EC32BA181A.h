#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }

#define STRUCT_2_0DD6A2EC32BA181A_METHOD_2_EE0F4410AB41D2DE_OFFSET UNITYSDK_OFFSET(0x7F7CC0)

inline static constexpr unsigned int Struct_2_0DD6A2EC32BA181A_TypeDefinitionIndex = 60339;

struct alignas(8) Struct_2_0DD6A2EC32BA181A
{
	::UnityEngine::Vector3 Field_2_1; // 0x10
	::UnityEngine::Vector3 Field_2_0; // 0x1C
	::UnityEngine::GameObject* Field_2_7; // 0x28
	::UnityEngine::Vector3 Field_2_6; // 0x30

	/*
	::System::Void Method_2_EE0F4410AB41D2DE(::UnityEngine::RaycastHit& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + STRUCT_2_0DD6A2EC32BA181A_METHOD_2_EE0F4410AB41D2DE_OFFSET))(this, a1);
	}
	*/
};
