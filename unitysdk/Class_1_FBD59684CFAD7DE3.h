#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/PhysicsAnimatorInterpolation.h"

namespace Nap::NapECS { class EcsFilter; }

#define CLASS_1_FBD59684CFAD7DE3__CTOR_OFFSET UNITYSDK_OFFSET(0x1418AE90)

inline static constexpr unsigned int Class_1_FBD59684CFAD7DE3_TypeDefinitionIndex = 59454;

class Class_1_FBD59684CFAD7DE3 : public ::System::Object
{
public:
	::Nap::NapECS::EcsFilter* Field_1_2; // 0x10
	::Nap::NapECS::EcsFilter* Field_1_1; // 0x18
	::System::Single Field_1_7; // 0x20
	::System::Single Field_1_6; // 0x24
	::System::Boolean Field_1_4; // 0x28
	::System::Boolean Field_1_11; // 0x29
	::System::Single Field_1_5; // 0x2C
	::UnityEngine::PhysicsAnimatorInterpolation Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBD59684CFAD7DE3__CTOR_OFFSET))(this);
	}
};
