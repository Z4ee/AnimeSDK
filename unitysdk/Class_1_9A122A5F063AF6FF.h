#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }

#define CLASS_1_9A122A5F063AF6FF__CTOR_OFFSET UNITYSDK_OFFSET(0x11E3C380)

inline static constexpr unsigned int Class_1_9A122A5F063AF6FF_TypeDefinitionIndex = 65878;

class Class_1_9A122A5F063AF6FF : public ::System::Object
{
public:
	::System::Action* Field_1_3; // 0x10
	::UnityEngine::Vector3 Field_1_0; // 0x18
	::System::Single Field_1_2; // 0x24
	::UnityEngine::Vector3 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9A122A5F063AF6FF__CTOR_OFFSET))(this);
	}
};
