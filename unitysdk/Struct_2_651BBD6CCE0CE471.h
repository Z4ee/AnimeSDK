#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Animator; }

#define STRUCT_2_651BBD6CCE0CE471_METHOD_2_8B1CCD64A3233C19_OFFSET UNITYSDK_OFFSET(0x87880)
#define STRUCT_2_651BBD6CCE0CE471_METHOD_2_AE4F0E437B68EA03_OFFSET UNITYSDK_OFFSET(0x87870)

inline static constexpr unsigned int Struct_2_651BBD6CCE0CE471_TypeDefinitionIndex = 68480;

struct alignas(4) Struct_2_651BBD6CCE0CE471
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18

	::System::Boolean Method_2_AE4F0E437B68EA03(::UnityEngine::Animator* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_651BBD6CCE0CE471_METHOD_2_AE4F0E437B68EA03_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8B1CCD64A3233C19(::UnityEngine::Animator* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_651BBD6CCE0CE471_METHOD_2_8B1CCD64A3233C19_OFFSET))(this, a1, a2);
	}
};
