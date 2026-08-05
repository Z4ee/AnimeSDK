#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_67B528512A95A70E_STRUCT_2_2793BD7138B360CA__CTOR_OFFSET UNITYSDK_OFFSET(0x7C4650)

inline static constexpr unsigned int Struct_2_67B528512A95A70E_Struct_2_2793BD7138B360CA_TypeDefinitionIndex = 50756;

struct alignas(4) Struct_2_67B528512A95A70E_Struct_2_2793BD7138B360CA
{
	::UnityEngine::Vector3 Field_2_3; // 0x10
	::UnityEngine::Vector3 Field_2_2; // 0x1C
	::System::Boolean Field_2_1; // 0x28
	::System::Single Field_2_0; // 0x2C
	::System::Single Field_2_7; // 0x30
	::System::Single Field_2_6; // 0x34

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_67B528512A95A70E_STRUCT_2_2793BD7138B360CA__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
