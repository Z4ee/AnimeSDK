#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define CLASS_1_FA5914EF545C7C05__CTOR_OFFSET UNITYSDK_OFFSET(0xA2D9A40)

inline static constexpr unsigned int Class_1_FA5914EF545C7C05_TypeDefinitionIndex = 72030;

class Class_1_FA5914EF545C7C05 : public ::System::Object
{
public:
	::System::Action* Field_1_4; // 0x10
	::UnityEngine::Transform* Field_1_0; // 0x18
	::System::Single Field_1_5; // 0x20
	::System::Single Field_1_1; // 0x24
	::System::Single Field_1_2; // 0x28
	::UnityEngine::Vector3 Field_1_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA5914EF545C7C05__CTOR_OFFSET))(this);
	}
};
