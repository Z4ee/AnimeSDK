#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_35BEC894515A38CF__CTOR_OFFSET UNITYSDK_OFFSET(0x998E350)

inline static constexpr unsigned int Class_1_35BEC894515A38CF_TypeDefinitionIndex = 53046;

class Class_1_35BEC894515A38CF : public ::System::Object
{
public:
	::System::Single Field_1_6; // 0x10
	::UnityEngine::Vector2 Field_1_5; // 0x14
	::System::Boolean Field_1_9; // 0x1C
	::System::Boolean Field_1_8; // 0x1D
	::System::Boolean Field_1_4; // 0x1E
	::System::Boolean Field_1_0; // 0x1F
	::UnityEngine::Vector2 Field_1_2; // 0x20
	::System::Boolean Field_1_10; // 0x28
	::System::Boolean Field_1_3; // 0x29
	::System::Boolean Field_1_1; // 0x2A
	::System::Boolean Field_1_7; // 0x2B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_35BEC894515A38CF__CTOR_OFFSET))(this);
	}
};
