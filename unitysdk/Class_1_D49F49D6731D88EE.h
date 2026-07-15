#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_D49F49D6731D88EE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B1C2D0)

inline static constexpr unsigned int Class_1_D49F49D6731D88EE_TypeDefinitionIndex = 49732;

class Class_1_D49F49D6731D88EE : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_0; // 0x10
	::System::UInt64 Field_1_1; // 0x20

	::System::Void _ctor(::System::UInt64 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D49F49D6731D88EE__CTOR_OFFSET))(this, a1, a2);
	}
};
