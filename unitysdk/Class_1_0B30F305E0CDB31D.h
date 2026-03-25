#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_0B30F305E0CDB31D__CTOR_OFFSET UNITYSDK_OFFSET(0x8DAE4E0)

inline static constexpr unsigned int Class_1_0B30F305E0CDB31D_TypeDefinitionIndex = 56412;

class Class_1_0B30F305E0CDB31D : public ::System::Object
{
public:
	::UnityEngine::Vector2 Field_1_0; // 0x10
	::UnityEngine::Vector2 Field_1_2; // 0x18
	::System::Boolean Field_1_5; // 0x20
	::System::Boolean Field_1_1; // 0x21
	::System::Boolean Field_1_4; // 0x22
	::System::Boolean Field_1_3; // 0x23
	::System::Boolean Field_1_7; // 0x24
	::System::Boolean Field_1_6; // 0x25
	::System::Boolean Field_1_8; // 0x26

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B30F305E0CDB31D__CTOR_OFFSET))(this);
	}
};
