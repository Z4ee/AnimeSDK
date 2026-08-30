#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_6525AD79AAD3B5A0_METHOD_1_4C27DE82B2DFE27A_OFFSET UNITYSDK_OFFSET(0xBB10F80)
#define CLASS_1_6525AD79AAD3B5A0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB10F60)

inline static constexpr unsigned int Class_1_6525AD79AAD3B5A0_TypeDefinitionIndex = 68874;

class Class_1_6525AD79AAD3B5A0 : public ::System::Object
{
public:
	::System::Single COAELIHGAHH; // 0x10
	::UnityEngine::Vector3 CLIFHNODGEH; // 0x14

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6525AD79AAD3B5A0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4C27DE82B2DFE27A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6525AD79AAD3B5A0_METHOD_1_4C27DE82B2DFE27A_OFFSET))(this, a1);
	}
};
