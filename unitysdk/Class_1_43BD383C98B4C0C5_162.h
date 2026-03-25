#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_43BD383C98B4C0C5_162_POINTERPOSITION_OFFSET UNITYSDK_OFFSET(0x117D6CF0)
#define CLASS_1_43BD383C98B4C0C5_162__CTOR_OFFSET UNITYSDK_OFFSET(0x117D6D80)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_162_TypeDefinitionIndex = 59807;

class Class_1_43BD383C98B4C0C5_162 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_162__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 PointerPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_162_POINTERPOSITION_OFFSET))(this);
	}
};
