#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_4AEBED15B369E608_METHOD_1_626C719A884DEF9A_1_OFFSET UNITYSDK_OFFSET(0x141A5300)
#define CLASS_1_4AEBED15B369E608_METHOD_1_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0x141A5280)
#define CLASS_1_4AEBED15B369E608__CTOR_OFFSET UNITYSDK_OFFSET(0x141A5270)

inline static constexpr unsigned int Class_1_4AEBED15B369E608_TypeDefinitionIndex = 85867;

class Class_1_4AEBED15B369E608 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10

	::System::Void _ctor(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_4AEBED15B369E608__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4AEBED15B369E608_METHOD_1_626C719A884DEF9A_OFFSET))(this, a1);
	}

	::System::Void Method_1_626C719A884DEF9A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4AEBED15B369E608_METHOD_1_626C719A884DEF9A_1_OFFSET))(this, a1);
	}
};
