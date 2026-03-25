#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_35BEC894515A38CF__CTOR_OFFSET UNITYSDK_OFFSET(0x8ACF8F0)

inline static constexpr unsigned int Class_1_35BEC894515A38CF_TypeDefinitionIndex = 46371;

class Class_1_35BEC894515A38CF : public ::System::Object
{
public:
	::System::Boolean Field_1_9; // 0x10
	::System::Boolean Field_1_4; // 0x11
	::System::Boolean Field_1_7; // 0x12
	::System::Boolean Field_1_1; // 0x13
	::System::Single Field_1_6; // 0x14
	::UnityEngine::Vector2 Field_1_5; // 0x18
	::System::Boolean Field_1_0; // 0x20
	::System::Boolean Field_1_8; // 0x21
	::System::Boolean Field_1_3; // 0x22
	::System::Boolean Field_1_10; // 0x23
	::UnityEngine::Vector2 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35BEC894515A38CF__CTOR_OFFSET))(this);
	}
};
