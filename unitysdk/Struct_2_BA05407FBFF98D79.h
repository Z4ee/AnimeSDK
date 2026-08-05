#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_688F44EEB4FF6017.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

#define STRUCT_2_BA05407FBFF98D79_METHOD_2_BA80D36BDA3B5115_OFFSET UNITYSDK_OFFSET(0x881740)
#define STRUCT_2_BA05407FBFF98D79__CTOR_OFFSET UNITYSDK_OFFSET(0x34AC00)

inline static constexpr unsigned int Struct_2_BA05407FBFF98D79_TypeDefinitionIndex = 63224;

struct alignas(4) Struct_2_BA05407FBFF98D79
{
	// static const ::Enum_3_688F44EEB4FF6017 Field_2_0; // 0x0
	::UnityEngine::Vector3Int Field_2_7; // 0x10

	::System::Void _ctor(::UnityEngine::Vector3Int a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + STRUCT_2_BA05407FBFF98D79__CTOR_OFFSET))(this, a1);
	}

	/*
	::Struct_2_25F7E31FCD8D52C3 Method_2_BA80D36BDA3B5115()
	{
		return ((::Struct_2_25F7E31FCD8D52C3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BA05407FBFF98D79_METHOD_2_BA80D36BDA3B5115_OFFSET))(this);
	}
	*/
};
