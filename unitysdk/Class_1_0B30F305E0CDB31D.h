#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_0B30F305E0CDB31D__CTOR_OFFSET UNITYSDK_OFFSET(0x18B693B0)

inline static constexpr unsigned int Class_1_0B30F305E0CDB31D_TypeDefinitionIndex = 65977;

class Class_1_0B30F305E0CDB31D : public ::System::Object
{
public:
	::UnityEngine::Vector2 Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x19
	::System::Boolean Field_1_3; // 0x1A
	::System::Boolean Field_1_4; // 0x1B
	::System::Boolean Field_1_5; // 0x1C
	::System::Boolean Field_1_6; // 0x1D
	::System::Boolean Field_1_7; // 0x1E
	::UnityEngine::Vector2 Field_1_8; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B30F305E0CDB31D__CTOR_OFFSET))(this);
	}
};
