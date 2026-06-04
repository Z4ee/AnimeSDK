#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_0B30F305E0CDB31D__CTOR_OFFSET UNITYSDK_OFFSET(0x138C0490)

inline static constexpr unsigned int Class_1_0B30F305E0CDB31D_TypeDefinitionIndex = 64577;

class Class_1_0B30F305E0CDB31D : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x11
	::System::Boolean Field_1_2; // 0x12
	::System::Boolean Field_1_3; // 0x13
	::System::Boolean Field_1_4; // 0x14
	::System::Boolean Field_1_5; // 0x15
	::System::Boolean Field_1_6; // 0x16
	::UnityEngine::Vector2 Field_1_7; // 0x18
	::UnityEngine::Vector2 Field_1_8; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B30F305E0CDB31D__CTOR_OFFSET))(this);
	}
};
