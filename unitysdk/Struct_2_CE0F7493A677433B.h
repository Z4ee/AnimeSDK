#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_CE0F7493A677433B_METHOD_2_823422828276EFD9_OFFSET UNITYSDK_OFFSET(0x3AE1D90)
#define STRUCT_2_CE0F7493A677433B_METHOD_2_D7F0936662AC1A47_OFFSET UNITYSDK_OFFSET(0x3AE1D70)

inline static constexpr unsigned int Struct_2_CE0F7493A677433B_TypeDefinitionIndex = 78419;

struct alignas(4) Struct_2_CE0F7493A677433B
{
	::UnityEngine::Vector3 FACGMPEJDEF; // 0x10
	::UnityEngine::Vector3 GFOOPMANHJJ; // 0x1C
	::System::Single BJBIBMDPCNP; // 0x28
	::System::Single PKDMBIMLJPH; // 0x2C

	::UnityEngine::Vector3 Method_2_D7F0936662AC1A47(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_CE0F7493A677433B_METHOD_2_D7F0936662AC1A47_OFFSET))(this, a1);
	}

	::System::Void Method_2_823422828276EFD9(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_CE0F7493A677433B_METHOD_2_823422828276EFD9_OFFSET))(this, a1, a2, a3);
	}
};
