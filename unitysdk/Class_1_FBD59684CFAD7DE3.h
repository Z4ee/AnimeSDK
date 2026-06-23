#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/PhysicsAnimatorInterpolation.h"

namespace Nap::NapECS { class EcsFilter; }

#define CLASS_1_FBD59684CFAD7DE3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F4410)

inline static constexpr unsigned int Class_1_FBD59684CFAD7DE3_TypeDefinitionIndex = 82247;

class Class_1_FBD59684CFAD7DE3 : public ::System::Object
{
public:
	::Nap::NapECS::EcsFilter* Field_1_1; // 0x10
	::Nap::NapECS::EcsFilter* Field_1_0; // 0x18
	::System::Single Field_1_4; // 0x20
	::System::Boolean Field_1_6; // 0x24
	::System::Boolean Field_1_7; // 0x25
	::System::Single Field_1_3; // 0x28
	::UnityEngine::PhysicsAnimatorInterpolation Field_1_2; // 0x2C
	::System::Single Field_1_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBD59684CFAD7DE3__CTOR_OFFSET))(this);
	}
};
