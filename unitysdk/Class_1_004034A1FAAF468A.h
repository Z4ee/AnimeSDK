#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_1_004034A1FAAF468A__CTOR_OFFSET UNITYSDK_OFFSET(0x129DE4F0)

inline static constexpr unsigned int Class_1_004034A1FAAF468A_TypeDefinitionIndex = 54693;

class Class_1_004034A1FAAF468A : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_1; // 0x10
	::UnityEngine::Object* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_004034A1FAAF468A__CTOR_OFFSET))(this);
	}
};
