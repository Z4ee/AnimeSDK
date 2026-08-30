#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E0874BB535D705A2_METHOD_1_618C8F6E57D1F060_OFFSET UNITYSDK_OFFSET(0x16DB7DC0)
#define CLASS_1_E0874BB535D705A2_METHOD_1_8D4CE49EAFEF7AB4_OFFSET UNITYSDK_OFFSET(0x16DB7F80)
#define CLASS_1_E0874BB535D705A2_METHOD_1_93707F05A31280FB_OFFSET UNITYSDK_OFFSET(0x16DB7C20)

inline static constexpr unsigned int Class_1_E0874BB535D705A2_TypeDefinitionIndex = 59514;

class Class_1_E0874BB535D705A2 : public ::System::Object
{
public:
	static ::UnityEngine::GameObject* Method_1_93707F05A31280FB(::UnityEngine::Object* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_E0874BB535D705A2_METHOD_1_93707F05A31280FB_OFFSET))(a1, a2);
	}

	static ::UnityEngine::GameObject* Method_1_618C8F6E57D1F060(::UnityEngine::Object* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E0874BB535D705A2_METHOD_1_618C8F6E57D1F060_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::GameObject* Method_1_8D4CE49EAFEF7AB4(::UnityEngine::Object* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::UnityEngine::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_E0874BB535D705A2_METHOD_1_8D4CE49EAFEF7AB4_OFFSET))(a1, a2);
	}
};
