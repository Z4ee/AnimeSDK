#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_ED17B6CCBE9C897A_CLASS_1_9EABF2B790586FE2__CTOR_OFFSET UNITYSDK_OFFSET(0x12938750)

inline static constexpr unsigned int Class_1_ED17B6CCBE9C897A_Class_1_9EABF2B790586FE2_TypeDefinitionIndex = 63114;

class Class_1_ED17B6CCBE9C897A_Class_1_9EABF2B790586FE2 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_1; // 0x10
	::UnityEngine::Vector3 Field_1_2; // 0x18
	::System::Single Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ED17B6CCBE9C897A_CLASS_1_9EABF2B790586FE2__CTOR_OFFSET))(this);
	}
};
