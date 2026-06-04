#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_9B06FDA96FC7BE85_METHOD_1_14A564936BA0B500_OFFSET UNITYSDK_OFFSET(0x18D4C780)
#define CLASS_1_9B06FDA96FC7BE85_METHOD_1_52A3FEDD63707B13_OFFSET UNITYSDK_OFFSET(0x18D4C610)
#define CLASS_1_9B06FDA96FC7BE85_METHOD_1_7331A1455F3F12A1_OFFSET UNITYSDK_OFFSET(0x18D4C6A0)
#define CLASS_1_9B06FDA96FC7BE85_METHOD_1_9DE6094CFCDAEB6A_OFFSET UNITYSDK_OFFSET(0x18D4C960)

inline static constexpr unsigned int Class_1_9B06FDA96FC7BE85_TypeDefinitionIndex = 38794;

class Class_1_9B06FDA96FC7BE85 : public ::System::Object
{
public:
	static ::System::Single Method_1_52A3FEDD63707B13(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9B06FDA96FC7BE85_METHOD_1_52A3FEDD63707B13_OFFSET))(a1);
	}

	static ::System::Single Method_1_7331A1455F3F12A1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9B06FDA96FC7BE85_METHOD_1_7331A1455F3F12A1_OFFSET))(a1);
	}

	static ::System::Single Method_1_14A564936BA0B500(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_9B06FDA96FC7BE85_METHOD_1_14A564936BA0B500_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_9DE6094CFCDAEB6A(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_9B06FDA96FC7BE85_METHOD_1_9DE6094CFCDAEB6A_OFFSET))(a1, a2, a3);
	}
};
