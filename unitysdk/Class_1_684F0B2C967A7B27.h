#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_E450C4D97FC83888;

#define CLASS_1_684F0B2C967A7B27__CTOR_OFFSET UNITYSDK_OFFSET(0x18CFD740)

inline static constexpr unsigned int Class_1_684F0B2C967A7B27_TypeDefinitionIndex = 39208;

class Class_1_684F0B2C967A7B27 : public ::System::Object
{
public:
	::Class_2_E450C4D97FC83888* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::System::Boolean Field_1_3; // 0x1D
	::UnityEngine::Vector3 Field_1_4; // 0x20
	::UnityEngine::Vector3 Field_1_5; // 0x2C
	::UnityEngine::Vector3 Field_1_6; // 0x38
	::UnityEngine::Vector3 Field_1_7; // 0x44
	::UnityEngine::Vector3 Field_1_8; // 0x50
	::System::UInt32 Field_1_9; // 0x5C
	::System::Single Field_1_10; // 0x60
	::System::UInt32 Field_1_11; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_684F0B2C967A7B27__CTOR_OFFSET))(this);
	}
};
