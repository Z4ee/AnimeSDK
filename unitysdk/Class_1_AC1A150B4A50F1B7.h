#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_AC1A150B4A50F1B7_METHOD_1_A66692C47B073188_OFFSET UNITYSDK_OFFSET(0xFBD3370)
#define CLASS_1_AC1A150B4A50F1B7__CTOR_OFFSET UNITYSDK_OFFSET(0xFBD3770)

inline static constexpr unsigned int Class_1_AC1A150B4A50F1B7_TypeDefinitionIndex = 55440;

class Class_1_AC1A150B4A50F1B7 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC1A150B4A50F1B7__CTOR_OFFSET))(this);
	}

	::UnityEngine::Animator* Method_1_A66692C47B073188(::UnityEngine::GameObject* a1)
	{
		return ((::UnityEngine::Animator*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_AC1A150B4A50F1B7_METHOD_1_A66692C47B073188_OFFSET))(this, a1);
	}
};
