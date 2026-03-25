#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_8BE0C6E42B967B60_METHOD_1_ABC981CB4ABF8E27_OFFSET UNITYSDK_OFFSET(0xA45FEA0)
#define CLASS_1_8BE0C6E42B967B60_METHOD_1_AD8A47ABCFB3AB6B_1_OFFSET UNITYSDK_OFFSET(0xA460050)
#define CLASS_1_8BE0C6E42B967B60_METHOD_1_AD8A47ABCFB3AB6B_OFFSET UNITYSDK_OFFSET(0xA45FD10)

inline static constexpr unsigned int Class_1_8BE0C6E42B967B60_TypeDefinitionIndex = 48018;

class Class_1_8BE0C6E42B967B60 : public ::System::Object
{
public:
	static ::UnityEngine::GameObject* Method_1_AD8A47ABCFB3AB6B(::UnityEngine::Object* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_8BE0C6E42B967B60_METHOD_1_AD8A47ABCFB3AB6B_OFFSET))(a1, a2);
	}

	static ::UnityEngine::GameObject* Method_1_ABC981CB4ABF8E27(::UnityEngine::Object* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8BE0C6E42B967B60_METHOD_1_ABC981CB4ABF8E27_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::GameObject* Method_1_AD8A47ABCFB3AB6B_1(::UnityEngine::Object* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_8BE0C6E42B967B60_METHOD_1_AD8A47ABCFB3AB6B_1_OFFSET))(a1, a2);
	}
};
