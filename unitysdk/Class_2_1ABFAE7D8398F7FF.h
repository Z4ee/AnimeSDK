#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B69B8B108BBE7284.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_1ABFAE7D8398F7FF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9555A50)
#define CLASS_2_1ABFAE7D8398F7FF__CTOR_OFFSET UNITYSDK_OFFSET(0x9555A00)

inline static constexpr unsigned int Class_2_1ABFAE7D8398F7FF_TypeDefinitionIndex = 64331;

class Class_2_1ABFAE7D8398F7FF : public ::Class_1_B69B8B108BBE7284
{
public:
	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_1ABFAE7D8398F7FF__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1ABFAE7D8398F7FF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
