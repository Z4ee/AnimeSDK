#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_964A712EA586728B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18C01BD0)

inline static constexpr unsigned int Class_1_964A712EA586728B_1_TypeDefinitionIndex = 39630;

class Class_1_964A712EA586728B_1 : public ::System::Object
{
public:
	::UnityEngine::Quaternion Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_964A712EA586728B_1__CTOR_OFFSET))(this);
	}
};
