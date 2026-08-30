#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define CLASS_1_004034A1FAAF468A__CTOR_OFFSET UNITYSDK_OFFSET(0xB689020)

inline static constexpr unsigned int Class_1_004034A1FAAF468A_TypeDefinitionIndex = 59442;

class Class_1_004034A1FAAF468A : public ::System::Object
{
public:
	::UnityEngine::GameObject* IPJPFOHOCEC; // 0x10
	::UnityEngine::Object* LFEBAMMNAGH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_004034A1FAAF468A__CTOR_OFFSET))(this);
	}
};
