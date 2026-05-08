#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RVO/Vector2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_C3E60AEBDBF27E6C_METHOD_1_5D987B3ED772CD88_OFFSET UNITYSDK_OFFSET(0x119E2080)
#define CLASS_1_C3E60AEBDBF27E6C_METHOD_1_BB1A51867F43215D_OFFSET UNITYSDK_OFFSET(0x119E2020)

inline static constexpr unsigned int Class_1_C3E60AEBDBF27E6C_TypeDefinitionIndex = 52093;

class Class_1_C3E60AEBDBF27E6C : public ::System::Object
{
public:
	static ::RVO::Vector2 Method_1_BB1A51867F43215D(::UnityEngine::Vector3 a1)
	{
		return ((::RVO::Vector2(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C3E60AEBDBF27E6C_METHOD_1_BB1A51867F43215D_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_5D987B3ED772CD88(::RVO::Vector2 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::RVO::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C3E60AEBDBF27E6C_METHOD_1_5D987B3ED772CD88_OFFSET))(a1, a2);
	}
};
