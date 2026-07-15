#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_07C3C4D2990C49EE;
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_56221E821F588017__CTOR_OFFSET UNITYSDK_OFFSET(0x17087FA0)

inline static constexpr unsigned int Class_1_56221E821F588017_TypeDefinitionIndex = 54826;

class Class_1_56221E821F588017 : public ::System::Object
{
public:
	::UnityEngine::Collider* Field_1_0; // 0x10
	::Class_3_07C3C4D2990C49EE* Field_1_1; // 0x18
	::UnityEngine::Transform* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56221E821F588017__CTOR_OFFSET))(this);
	}
};
