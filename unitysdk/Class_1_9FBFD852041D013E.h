#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }

#define CLASS_1_9FBFD852041D013E_METHOD_1_9A905CC5D00D7A27_OFFSET UNITYSDK_OFFSET(0x195AD6B0)

inline static constexpr unsigned int Class_1_9FBFD852041D013E_TypeDefinitionIndex = 69573;

class Class_1_9FBFD852041D013E : public ::System::Object
{
public:
	static ::System::Boolean Method_1_9A905CC5D00D7A27(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_9FBFD852041D013E_METHOD_1_9A905CC5D00D7A27_OFFSET))(a1, a2);
	}
};
