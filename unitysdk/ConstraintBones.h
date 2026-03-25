#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define CONSTRAINTBONES__CTOR_OFFSET UNITYSDK_OFFSET(0xA6F8150)

inline static constexpr unsigned int ConstraintBones_TypeDefinitionIndex = 38304;

class ConstraintBones : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Transform*>* AdjustBones; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTRAINTBONES__CTOR_OFFSET))(this);
	}
};
