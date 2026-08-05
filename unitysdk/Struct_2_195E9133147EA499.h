#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_195E9133147EA499_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x837FF0)
#define STRUCT_2_195E9133147EA499_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x837F90)
#define STRUCT_2_195E9133147EA499__CTOR_1_OFFSET UNITYSDK_OFFSET(0x837F20)
#define STRUCT_2_195E9133147EA499__CTOR_2_OFFSET UNITYSDK_OFFSET(0x837F60)
#define STRUCT_2_195E9133147EA499__CTOR_OFFSET UNITYSDK_OFFSET(0x837EE0)

inline static constexpr unsigned int Struct_2_195E9133147EA499_TypeDefinitionIndex = 45392;

struct alignas(4) Struct_2_195E9133147EA499
{
	::System::UInt32 Field_2_3; // 0x10
	::UnityEngine::Vector3 Field_2_2; // 0x14
	::System::Single Field_2_1; // 0x20
	::System::Boolean Field_2_0; // 0x24

	/*
	::System::Void _ctor(::System::UInt32 a1, ::Struct_2_313DB38E01B148C7 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Struct_2_313DB38E01B148C7))((::PBYTE)hIl2Cpp + STRUCT_2_195E9133147EA499__CTOR_OFFSET))(this, a1, a2);
	}
	*/

	::System::Void _ctor_1(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_195E9133147EA499__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_2(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_195E9133147EA499__CTOR_2_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_195E9133147EA499_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_195E9133147EA499_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
