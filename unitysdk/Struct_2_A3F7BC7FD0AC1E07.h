#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define STRUCT_2_A3F7BC7FD0AC1E07_EQUALS_OFFSET UNITYSDK_OFFSET(0x800ED0)
#define STRUCT_2_A3F7BC7FD0AC1E07_METHOD_2_051BE3B016536A4B_OFFSET UNITYSDK_OFFSET(0x800F10)

inline static constexpr unsigned int Struct_2_A3F7BC7FD0AC1E07_TypeDefinitionIndex = 66445;

struct alignas(4) Struct_2_A3F7BC7FD0AC1E07
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::UnityEngine::Vector2 Field_2_2; // 0x18
	::UnityEngine::Vector2 Field_2_3; // 0x20
	::UnityEngine::Bounds Field_2_4; // 0x28
	::System::Single Field_2_5; // 0x40
	::System::Single Field_2_6; // 0x44

	::System::Boolean Equals(::Struct_2_A3F7BC7FD0AC1E07 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_A3F7BC7FD0AC1E07))((::PBYTE)hIl2Cpp + STRUCT_2_A3F7BC7FD0AC1E07_EQUALS_OFFSET))(this, a1);
	}

	/*
	::UnityEngine::Vector2 Method_2_051BE3B016536A4B(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_A3F7BC7FD0AC1E07_METHOD_2_051BE3B016536A4B_OFFSET))(this, a1);
	}
	*/
};
