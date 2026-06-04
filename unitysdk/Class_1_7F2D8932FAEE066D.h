#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_1A8148841049062A;
namespace UnityEngine { class Transform; }

#define CLASS_1_7F2D8932FAEE066D__CTOR_OFFSET UNITYSDK_OFFSET(0x18BF03B0)

inline static constexpr unsigned int Class_1_7F2D8932FAEE066D_TypeDefinitionIndex = 39820;

class Class_1_7F2D8932FAEE066D : public ::System::Object
{
public:
	::Class_2_1A8148841049062A* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x24
	::System::Boolean Field_1_4; // 0x28
	::System::Boolean Field_1_5; // 0x29
	::System::Boolean Field_1_6; // 0x2A
	::System::Single Field_1_7; // 0x2C
	::UnityEngine::Vector3 Field_1_8; // 0x30
	::System::Single Field_1_9; // 0x3C
	::UnityEngine::Vector2 Field_1_10; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F2D8932FAEE066D__CTOR_OFFSET))(this);
	}
};
