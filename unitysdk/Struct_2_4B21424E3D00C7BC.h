#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

inline static constexpr unsigned int Struct_2_4B21424E3D00C7BC_TypeDefinitionIndex = 79773;

struct alignas(8) Struct_2_4B21424E3D00C7BC
{
	::System::Boolean Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x14
	::UnityEngine::Quaternion Field_2_2; // 0x20
	::UnityEngine::Transform* Field_2_3; // 0x30
	::Struct_2_FA5F50563E60AFBA Field_2_4; // 0x38
};
