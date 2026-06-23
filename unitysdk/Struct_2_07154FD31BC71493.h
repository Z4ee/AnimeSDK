#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vehicle/VehicleCollisions.h"
#include "unitysdk/MoleMole/Vehicle/VehicleModelNodes.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Vehicle { class VehicleConfig; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

inline static constexpr unsigned int Struct_2_07154FD31BC71493_TypeDefinitionIndex = 55373;

struct alignas(8) Struct_2_07154FD31BC71493
{
	::MoleMole::Vehicle::VehicleCollisions Field_2_0; // 0x10
	::MoleMole::Vehicle::VehicleModelNodes Field_2_1; // 0x20
	::MoleMole::Vehicle::VehicleConfig* Field_2_2; // 0x30
	::UnityEngine::Transform* Field_2_3; // 0x38
	::UnityEngine::Animator* Field_2_4; // 0x40
	::UnityEngine::Animator* Field_2_5; // 0x48
};
