#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_43BD383C98B4C0C5_198_POINTERPOSITION_OFFSET UNITYSDK_OFFSET(0xBF68940)
#define CLASS_1_43BD383C98B4C0C5_198__CTOR_OFFSET UNITYSDK_OFFSET(0xBF689D0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_198_TypeDefinitionIndex = 72954;

class Class_1_43BD383C98B4C0C5_198 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_198__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 PointerPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_198_POINTERPOSITION_OFFSET))(this);
	}
};
