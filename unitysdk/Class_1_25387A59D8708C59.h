#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_25387A59D8708C59__CTOR_OFFSET UNITYSDK_OFFSET(0x16986480)

inline static constexpr unsigned int Class_1_25387A59D8708C59_TypeDefinitionIndex = 66491;

class Class_1_25387A59D8708C59 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x1C
	::System::Single Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x24
	::UnityEngine::Vector3 Field_1_4; // 0x28
	::RPG::GameCore::VCameraState Field_1_5; // 0x34
	::UnityEngine::Vector3 Field_1_6; // 0x38
	::System::Single Field_1_7; // 0x44
	::System::Single Field_1_8; // 0x48
	::System::Single Field_1_9; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25387A59D8708C59__CTOR_OFFSET))(this);
	}
};
