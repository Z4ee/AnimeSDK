#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_43BD383C98B4C0C5_182_POINTERPOSITION_OFFSET UNITYSDK_OFFSET(0x173CE820)
#define CLASS_1_43BD383C98B4C0C5_182__CTOR_OFFSET UNITYSDK_OFFSET(0x173CE8B0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_182_TypeDefinitionIndex = 69633;

class Class_1_43BD383C98B4C0C5_182 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_182__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 PointerPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_182_POINTERPOSITION_OFFSET))(this);
	}
};
