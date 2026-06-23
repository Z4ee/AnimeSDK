#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_313DB38E01B148C7_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x823E00)
#define STRUCT_2_313DB38E01B148C7_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x823E60)
#define STRUCT_2_313DB38E01B148C7__CTOR_OFFSET UNITYSDK_OFFSET(0x460B80)

inline static constexpr unsigned int Struct_2_313DB38E01B148C7_TypeDefinitionIndex = 70122;

struct alignas(4) Struct_2_313DB38E01B148C7
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x1C

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_313DB38E01B148C7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_313DB38E01B148C7_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_313DB38E01B148C7_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
