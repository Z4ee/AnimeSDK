#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_CE0F7493A677433B_METHOD_2_823422828276EFD9_OFFSET UNITYSDK_OFFSET(0x78EB0)
#define STRUCT_2_CE0F7493A677433B_METHOD_2_E5340AA01F92592A_OFFSET UNITYSDK_OFFSET(0x78DD0)

inline static constexpr unsigned int Struct_2_CE0F7493A677433B_TypeDefinitionIndex = 64340;

struct alignas(4) Struct_2_CE0F7493A677433B
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x1C
	::System::Single Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x2C

	::UnityEngine::Vector3 Method_2_E5340AA01F92592A(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_CE0F7493A677433B_METHOD_2_E5340AA01F92592A_OFFSET))(this, a1);
	}

	::System::Void Method_2_823422828276EFD9(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_CE0F7493A677433B_METHOD_2_823422828276EFD9_OFFSET))(this, a1, a2, a3);
	}
};
