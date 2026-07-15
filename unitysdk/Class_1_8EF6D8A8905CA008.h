#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Rigidbody; }

#define CLASS_1_8EF6D8A8905CA008__CTOR_OFFSET UNITYSDK_OFFSET(0x180C7290)

inline static constexpr unsigned int Class_1_8EF6D8A8905CA008_TypeDefinitionIndex = 40618;

class Class_1_8EF6D8A8905CA008 : public ::System::Object
{
public:
	::UnityEngine::Rigidbody* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x24
	::UnityEngine::Vector3 Field_1_3; // 0x28
	::UnityEngine::Vector3 Field_1_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8EF6D8A8905CA008__CTOR_OFFSET))(this);
	}
};
