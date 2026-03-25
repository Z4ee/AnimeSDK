#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_9C2F1FCEC1A75FFD;
namespace UnityEngine { class Transform; }

#define CLASS_1_7F2D8932FAEE066D__CTOR_OFFSET UNITYSDK_OFFSET(0x1691E8B0)

inline static constexpr unsigned int Class_1_7F2D8932FAEE066D_TypeDefinitionIndex = 33265;

class Class_1_7F2D8932FAEE066D : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_9; // 0x10
	::Class_2_9C2F1FCEC1A75FFD* Field_1_0; // 0x18
	::UnityEngine::Vector2 Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x28
	::System::Single Field_1_5; // 0x2C
	::System::Boolean Field_1_4; // 0x30
	::System::Boolean Field_1_8; // 0x31
	::System::Boolean Field_1_1; // 0x32
	::System::Single Field_1_6; // 0x34
	::System::Single Field_1_7; // 0x38
	::UnityEngine::Vector3 Field_1_10; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F2D8932FAEE066D__CTOR_OFFSET))(this);
	}
};
