#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define CLASS_1_F8634184B38ED7F3__CTOR_OFFSET UNITYSDK_OFFSET(0x18010DB0)

inline static constexpr unsigned int Class_1_F8634184B38ED7F3_TypeDefinitionIndex = 57342;

class Class_1_F8634184B38ED7F3 : public ::System::Object
{
public:
	::UnityEngine::GameObject* MPMOJCINGNK; // 0x10
	::System::Single LCJDBIIOKOP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8634184B38ED7F3__CTOR_OFFSET))(this);
	}
};
