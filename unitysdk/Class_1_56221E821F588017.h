#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E21F6DE9B7FA4D05;
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_56221E821F588017__CTOR_OFFSET UNITYSDK_OFFSET(0x11E25BC0)

inline static constexpr unsigned int Class_1_56221E821F588017_TypeDefinitionIndex = 52898;

class Class_1_56221E821F588017 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_1; // 0x10
	::Class_3_E21F6DE9B7FA4D05* Field_1_2; // 0x18
	::UnityEngine::Collider* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56221E821F588017__CTOR_OFFSET))(this);
	}
};
