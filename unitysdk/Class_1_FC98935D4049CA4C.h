#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_76CCAEE20B3AE57C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_FC98935D4049CA4C_METHOD_1_344623AFD7FF82FB_OFFSET UNITYSDK_OFFSET(0x17197D20)
#define CLASS_1_FC98935D4049CA4C_METHOD_1_E60A69492F84CB3A_OFFSET UNITYSDK_OFFSET(0x17197A70)
#define CLASS_1_FC98935D4049CA4C__CTOR_OFFSET UNITYSDK_OFFSET(0x17197A60)

inline static constexpr unsigned int Class_1_FC98935D4049CA4C_TypeDefinitionIndex = 55254;

class Class_1_FC98935D4049CA4C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC98935D4049CA4C__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_E60A69492F84CB3A(::Struct_2_76CCAEE20B3AE57C a1)
	{
		return ((::System::Boolean(*)(::Struct_2_76CCAEE20B3AE57C))((::PBYTE)hIl2Cpp + CLASS_1_FC98935D4049CA4C_METHOD_1_E60A69492F84CB3A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_344623AFD7FF82FB(::Struct_2_76CCAEE20B3AE57C a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3& a4)
	{
		return ((::System::Boolean(*)(::Struct_2_76CCAEE20B3AE57C, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_FC98935D4049CA4C_METHOD_1_344623AFD7FF82FB_OFFSET))(a1, a2, a3, a4);
	}
};
