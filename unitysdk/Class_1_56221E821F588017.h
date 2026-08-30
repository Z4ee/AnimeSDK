#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_07C3C4D2990C49EE;
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_56221E821F588017__CTOR_OFFSET UNITYSDK_OFFSET(0x1A76E670)

inline static constexpr unsigned int Class_1_56221E821F588017_TypeDefinitionIndex = 57547;

class Class_1_56221E821F588017 : public ::System::Object
{
public:
	::UnityEngine::Transform* PDIMNOGOPKJ; // 0x10
	::Class_3_07C3C4D2990C49EE* BOFJEGFODBF; // 0x18
	::UnityEngine::Collider* BKNFNKPDNPP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56221E821F588017__CTOR_OFFSET))(this);
	}
};
