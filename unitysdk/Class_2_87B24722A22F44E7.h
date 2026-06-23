#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_59.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_87B24722A22F44E7_METHOD_2_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x18EB49B0)
#define CLASS_2_87B24722A22F44E7_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18EB49D0)
#define CLASS_2_87B24722A22F44E7__CTOR_OFFSET UNITYSDK_OFFSET(0x18EB49E0)

inline static constexpr unsigned int Class_2_87B24722A22F44E7_TypeDefinitionIndex = 52606;

class Class_2_87B24722A22F44E7 : public ::Class_1_43BD383C98B4C0C5_59
{
public:
	::UnityEngine::Vector3 Field_2_0; // 0x10

	::System::Void _ctor(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_87B24722A22F44E7__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87B24722A22F44E7_METHOD_2_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87B24722A22F44E7_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
