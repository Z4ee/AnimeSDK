#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8421D4DF3905ADA9.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_BA377F7FD499147A_2_METHOD_2_62DF1EBE90234E13_OFFSET UNITYSDK_OFFSET(0x9C54820)
#define CLASS_2_BA377F7FD499147A_2__CTOR_OFFSET UNITYSDK_OFFSET(0x9C54810)

inline static constexpr unsigned int Class_2_BA377F7FD499147A_2_TypeDefinitionIndex = 56362;

class Class_2_BA377F7FD499147A_2 : public ::Class_1_8421D4DF3905ADA9
{
public:
	::System::Void _ctor(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_BA377F7FD499147A_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_62DF1EBE90234E13(::UnityEngine::RectTransform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_2_BA377F7FD499147A_2_METHOD_2_62DF1EBE90234E13_OFFSET))(this, a1);
	}
};
