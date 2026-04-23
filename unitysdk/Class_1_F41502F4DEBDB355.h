#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_F41502F4DEBDB355_METHOD_1_748ED8D4571ED072_OFFSET UNITYSDK_OFFSET(0x975D5C0)
#define CLASS_1_F41502F4DEBDB355_METHOD_1_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x975D4D0)
#define CLASS_1_F41502F4DEBDB355__CTOR_OFFSET UNITYSDK_OFFSET(0x975D6B0)

inline static constexpr unsigned int Class_1_F41502F4DEBDB355_TypeDefinitionIndex = 48406;

class Class_1_F41502F4DEBDB355 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_3; // 0x10
	::UnityEngine::Vector3 Field_1_2; // 0x1C
	::UnityEngine::Vector3 Field_1_1; // 0x28
	::UnityEngine::Vector3 Field_1_0; // 0x34
	::UnityEngine::Vector3 Field_1_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F41502F4DEBDB355__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F41502F4DEBDB355_METHOD_1_F10A0D072D26C4BF_OFFSET))(this);
	}

	::System::Void Method_1_748ED8D4571ED072(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F41502F4DEBDB355_METHOD_1_748ED8D4571ED072_OFFSET))(this, a1, a2, a3, a4);
	}
};
