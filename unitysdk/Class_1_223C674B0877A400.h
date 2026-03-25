#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_223C674B0877A400_METHOD_1_F2C20071C935F40C_OFFSET UNITYSDK_OFFSET(0x111E5530)
#define CLASS_1_223C674B0877A400__CTOR_OFFSET UNITYSDK_OFFSET(0x111E58B0)

inline static constexpr unsigned int Class_1_223C674B0877A400_TypeDefinitionIndex = 60778;

class Class_1_223C674B0877A400 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_223C674B0877A400__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_F2C20071C935F40C(::UnityEngine::Ray a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_223C674B0877A400_METHOD_1_F2C20071C935F40C_OFFSET))(a1, a2, a3, a4);
	}
};
