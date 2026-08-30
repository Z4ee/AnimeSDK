#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_79E1E17F21540095_METHOD_1_90AA78D151560A17_OFFSET UNITYSDK_OFFSET(0x19FCB190)
#define CLASS_1_79E1E17F21540095_METHOD_1_96F004A8E8275758_OFFSET UNITYSDK_OFFSET(0x19FCB430)
#define CLASS_1_79E1E17F21540095_METHOD_1_C88EC972747C5A09_OFFSET UNITYSDK_OFFSET(0x19FCAF30)
#define CLASS_1_79E1E17F21540095_METHOD_1_E0586A0D7017345D_OFFSET UNITYSDK_OFFSET(0x19FCB530)

inline static constexpr unsigned int Class_1_79E1E17F21540095_TypeDefinitionIndex = 62253;

class Class_1_79E1E17F21540095 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_C88EC972747C5A09(::UnityEngine::Ray a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_79E1E17F21540095_METHOD_1_C88EC972747C5A09_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_90AA78D151560A17(::UnityEngine::Ray a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single& a5)
	{
		return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_79E1E17F21540095_METHOD_1_90AA78D151560A17_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Vector2 Method_1_96F004A8E8275758(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_79E1E17F21540095_METHOD_1_96F004A8E8275758_OFFSET))(a1, a2, a3, a4);
	}

	static ::UnityEngine::Vector3 Method_1_E0586A0D7017345D(::UnityEngine::Vector2 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector2, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_79E1E17F21540095_METHOD_1_E0586A0D7017345D_OFFSET))(a1, a2, a3, a4);
	}
};
