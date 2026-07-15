#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C7C4EDD02A4426B2.h"

namespace UnityEngine { class Transform; }

#define CLASS_2_EF7FD8EE679F8CBA_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16C766D0)
#define CLASS_2_EF7FD8EE679F8CBA__CTOR_OFFSET UNITYSDK_OFFSET(0x16C76660)

inline static constexpr unsigned int Class_2_EF7FD8EE679F8CBA_TypeDefinitionIndex = 66663;

class Class_2_EF7FD8EE679F8CBA : public ::Class_1_C7C4EDD02A4426B2
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x28

	::System::Void _ctor(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_EF7FD8EE679F8CBA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EF7FD8EE679F8CBA_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};
