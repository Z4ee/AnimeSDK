#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define CONSTRAINTBONES__CTOR_OFFSET UNITYSDK_OFFSET(0xE01BEA0)

inline static constexpr unsigned int ConstraintBones_TypeDefinitionIndex = 47900;

class ConstraintBones : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Transform*>* AdjustBones; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTRAINTBONES__CTOR_OFFSET))(this);
	}
};
