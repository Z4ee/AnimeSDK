#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_995D6B0DA70B465D__CTOR_OFFSET UNITYSDK_OFFSET(0x167628E0)

inline static constexpr unsigned int Class_1_995D6B0DA70B465D_TypeDefinitionIndex = 33055;

class Class_1_995D6B0DA70B465D : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_3; // 0x18
	::UnityEngine::Vector3 Field_1_1; // 0x24
	::UnityEngine::Quaternion Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_995D6B0DA70B465D__CTOR_OFFSET))(this);
	}
};
