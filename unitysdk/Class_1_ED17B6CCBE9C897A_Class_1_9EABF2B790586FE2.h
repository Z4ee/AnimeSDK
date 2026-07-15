#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_ED17B6CCBE9C897A_CLASS_1_9EABF2B790586FE2__CTOR_OFFSET UNITYSDK_OFFSET(0x1685F9E0)

inline static constexpr unsigned int Class_1_ED17B6CCBE9C897A_Class_1_9EABF2B790586FE2_TypeDefinitionIndex = 65402;

class Class_1_ED17B6CCBE9C897A_Class_1_9EABF2B790586FE2 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED17B6CCBE9C897A_CLASS_1_9EABF2B790586FE2__CTOR_OFFSET))(this);
	}
};
