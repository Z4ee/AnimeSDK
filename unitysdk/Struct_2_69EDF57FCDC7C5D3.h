#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_69EDF57FCDC7C5D3__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E7BEA0)
#define STRUCT_2_69EDF57FCDC7C5D3__CTOR_OFFSET UNITYSDK_OFFSET(0x7E5F10)

inline static constexpr unsigned int Struct_2_69EDF57FCDC7C5D3_TypeDefinitionIndex = 68402;

struct alignas(4) Struct_2_69EDF57FCDC7C5D3
{
	static ::Struct_2_69EDF57FCDC7C5D3* StaticGet_Field_2_7()
	{
		return (::Struct_2_69EDF57FCDC7C5D3*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_69EDF57FCDC7C5D3_TypeDefinitionIndex)->GetStaticField(0xDB50);
	}
	::UnityEngine::Vector3 Field_2_2; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x1C
	::UnityEngine::Vector3 Field_2_0; // 0x28

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_69EDF57FCDC7C5D3__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_69EDF57FCDC7C5D3__CCTOR_OFFSET))();
	}
};
