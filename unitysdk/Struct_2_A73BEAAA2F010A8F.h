#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define STRUCT_2_A73BEAAA2F010A8F__CCTOR_OFFSET UNITYSDK_OFFSET(0x13163490)

inline static constexpr unsigned int Struct_2_A73BEAAA2F010A8F_TypeDefinitionIndex = 87527;

struct alignas(4) Struct_2_A73BEAAA2F010A8F
{
	static ::Struct_2_A73BEAAA2F010A8F* StaticGet_Field_2_3()
	{
		return (::Struct_2_A73BEAAA2F010A8F*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_A73BEAAA2F010A8F_TypeDefinitionIndex)->GetStaticField(0x10210);
	}
	::UnityEngine::Vector2 Field_2_0; // 0x10
	::UnityEngine::Vector2 Field_2_1; // 0x18
	::UnityEngine::Vector2 Field_2_2; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_A73BEAAA2F010A8F__CCTOR_OFFSET))();
	}
};
