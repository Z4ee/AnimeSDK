#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_1_854A2C7905ADF31B__CTOR_OFFSET UNITYSDK_OFFSET(0xAA049C0)

inline static constexpr unsigned int Class_1_854A2C7905ADF31B_TypeDefinitionIndex = 65131;

class Class_1_854A2C7905ADF31B : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::UnityEngine::RectTransform* Field_1_1; // 0x18
	::UnityEngine::Vector2 Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x28
	::UnityEngine::Vector3 Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_854A2C7905ADF31B__CTOR_OFFSET))(this);
	}
};
