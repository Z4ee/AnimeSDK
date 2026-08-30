#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define CLASS_1_43BD383C98B4C0C5_250_METHOD_1_8513DC18337FCF05_OFFSET UNITYSDK_OFFSET(0x1528AAC0)
#define CLASS_1_43BD383C98B4C0C5_250__CTOR_OFFSET UNITYSDK_OFFSET(0x1528AB40)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_250_TypeDefinitionIndex = 80648;

class Class_1_43BD383C98B4C0C5_250 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_250__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_8513DC18337FCF05()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_250_METHOD_1_8513DC18337FCF05_OFFSET))(this);
	}
};
