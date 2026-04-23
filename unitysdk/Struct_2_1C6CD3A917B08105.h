#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Rigidbody; }

#define STRUCT_2_1C6CD3A917B08105_METHOD_2_899A432836CEEC8D_OFFSET UNITYSDK_OFFSET(0x13D8B0)
#define STRUCT_2_1C6CD3A917B08105_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x13D910)
#define STRUCT_2_1C6CD3A917B08105__CTOR_OFFSET UNITYSDK_OFFSET(0x13D8A0)

inline static constexpr unsigned int Struct_2_1C6CD3A917B08105_TypeDefinitionIndex = 50519;

struct alignas(4) Struct_2_1C6CD3A917B08105
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14

	::System::Void _ctor(::UnityEngine::Rigidbody* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rigidbody*))((::PBYTE)hIl2Cpp + STRUCT_2_1C6CD3A917B08105__CTOR_OFFSET))(this, a1);
	}

	/*
	::System::Boolean Method_2_899A432836CEEC8D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit& a3, ::System::Single a4, ::System::Int32 a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_1C6CD3A917B08105_METHOD_2_899A432836CEEC8D_OFFSET))(this, a1, a2, a3, a4, a5);
	}
	*/

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1C6CD3A917B08105_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}
};
