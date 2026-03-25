#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_E08DF4462B42C9E1_METHOD_1_042CFAF83D06BCF3_OFFSET UNITYSDK_OFFSET(0x18314120)
#define CLASS_1_E08DF4462B42C9E1_METHOD_1_998E271C8CAE025E_OFFSET UNITYSDK_OFFSET(0x18313F70)
#define CLASS_1_E08DF4462B42C9E1__CTOR_OFFSET UNITYSDK_OFFSET(0x18314350)

inline static constexpr unsigned int Class_1_E08DF4462B42C9E1_TypeDefinitionIndex = 9522;

class Class_1_E08DF4462B42C9E1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E08DF4462B42C9E1__CTOR_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_1_998E271C8CAE025E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E08DF4462B42C9E1_METHOD_1_998E271C8CAE025E_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_042CFAF83D06BCF3(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E08DF4462B42C9E1_METHOD_1_042CFAF83D06BCF3_OFFSET))(a1, a2, a3, a4);
	}
};
