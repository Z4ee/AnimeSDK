#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define STRUCT_2_A73BEAAA2F010A8F__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D3E3E0)

inline static constexpr unsigned int Struct_2_A73BEAAA2F010A8F_TypeDefinitionIndex = 72359;

struct alignas(4) Struct_2_A73BEAAA2F010A8F
{
	static ::Struct_2_A73BEAAA2F010A8F* StaticGet_Field_2_7()
	{
		return (::Struct_2_A73BEAAA2F010A8F*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_A73BEAAA2F010A8F_TypeDefinitionIndex)->GetStaticField(0xFB00);
	}
	::UnityEngine::Vector2 Field_2_2; // 0x10
	::UnityEngine::Vector2 Field_2_1; // 0x18
	::UnityEngine::Vector2 Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_A73BEAAA2F010A8F__CCTOR_OFFSET))();
	}
};
