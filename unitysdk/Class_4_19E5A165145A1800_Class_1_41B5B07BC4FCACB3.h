#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_4_19E5A165145A1800_CLASS_1_41B5B07BC4FCACB3__CTOR_OFFSET UNITYSDK_OFFSET(0x18842470)

inline static constexpr unsigned int Class_4_19E5A165145A1800_Class_1_41B5B07BC4FCACB3_TypeDefinitionIndex = 48211;

class Class_4_19E5A165145A1800_Class_1_41B5B07BC4FCACB3 : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::MoleMole::EntityHandle Field_1_0; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x28
	::UnityEngine::Vector3 Field_1_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_19E5A165145A1800_CLASS_1_41B5B07BC4FCACB3__CTOR_OFFSET))(this);
	}
};
