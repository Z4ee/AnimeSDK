#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define CLASS_1_9D34F5E162651ADD_METHOD_1_53BF32F2E25C8B7C_OFFSET UNITYSDK_OFFSET(0x159D4AF0)
#define CLASS_1_9D34F5E162651ADD__CTOR_OFFSET UNITYSDK_OFFSET(0x159D4AE0)

inline static constexpr unsigned int Class_1_9D34F5E162651ADD_TypeDefinitionIndex = 75505;

class Class_1_9D34F5E162651ADD : public ::System::Object
{
public:
	::UnityEngine::RectTransform* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor(::UnityEngine::RectTransform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9D34F5E162651ADD__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_1_53BF32F2E25C8B7C(::System::Int32 a1, ::UnityEngine::RectTransform* a2)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_9D34F5E162651ADD_METHOD_1_53BF32F2E25C8B7C_OFFSET))(this, a1, a2);
	}
};
