#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_2E86822149A9B8FC_METHOD_1_177614C642D6B3D8_OFFSET UNITYSDK_OFFSET(0xABF8E80)
#define CLASS_1_2E86822149A9B8FC_METHOD_1_BB6D28C3554D430E_OFFSET UNITYSDK_OFFSET(0xABF8F20)
#define CLASS_1_2E86822149A9B8FC_METHOD_1_F98563377F0D1933_OFFSET UNITYSDK_OFFSET(0xABF8D30)

inline static constexpr unsigned int Class_1_2E86822149A9B8FC_TypeDefinitionIndex = 65617;

class Class_1_2E86822149A9B8FC : public ::System::Object
{
public:
	static ::System::Void Method_1_F98563377F0D1933(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Renderer*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_2E86822149A9B8FC_METHOD_1_F98563377F0D1933_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_177614C642D6B3D8(::UnityEngine::Material* a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_2E86822149A9B8FC_METHOD_1_177614C642D6B3D8_OFFSET))(a1);
	}

	static ::System::Void Method_1_BB6D28C3554D430E(::UnityEngine::Renderer* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_1_2E86822149A9B8FC_METHOD_1_BB6D28C3554D430E_OFFSET))(a1);
	}
};
