#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Plane.h"

#define STRUCT_2_E8C85856D9C6B91D_METHOD_2_187B3E3B8611027E_OFFSET UNITYSDK_OFFSET(0x5D7670)
#define STRUCT_2_E8C85856D9C6B91D_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x48CD40)
#define STRUCT_2_E8C85856D9C6B91D_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x5D7650)
#define STRUCT_2_E8C85856D9C6B91D__CTOR_OFFSET UNITYSDK_OFFSET(0x5D76F0)

inline static constexpr unsigned int Struct_2_E8C85856D9C6B91D_TypeDefinitionIndex = 75336;

struct alignas(4) Struct_2_E8C85856D9C6B91D
{
	::UnityEngine::Plane Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x20

	::System::Void _ctor(::UnityEngine::Plane& a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Plane&, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_E8C85856D9C6B91D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E8C85856D9C6B91D_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E8C85856D9C6B91D_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
	}

	/*
	::Struct_2_F4C3B7EC74A6B703 Method_2_187B3E3B8611027E()
	{
		return ((::Struct_2_F4C3B7EC74A6B703(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E8C85856D9C6B91D_METHOD_2_187B3E3B8611027E_OFFSET))(this);
	}
	*/
};
