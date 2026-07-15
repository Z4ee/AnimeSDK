#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_1_004034A1FAAF468A__CTOR_OFFSET UNITYSDK_OFFSET(0x116616A0)

inline static constexpr unsigned int Class_1_004034A1FAAF468A_TypeDefinitionIndex = 56657;

class Class_1_004034A1FAAF468A : public ::System::Object
{
public:
	::UnityEngine::Object* Field_1_0; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_004034A1FAAF468A__CTOR_OFFSET))(this);
	}
};
