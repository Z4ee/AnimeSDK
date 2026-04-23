#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define CLASS_1_F8634184B38ED7F3__CTOR_OFFSET UNITYSDK_OFFSET(0x12A040D0)

inline static constexpr unsigned int Class_1_F8634184B38ED7F3_TypeDefinitionIndex = 52703;

class Class_1_F8634184B38ED7F3 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8634184B38ED7F3__CTOR_OFFSET))(this);
	}
};
