#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_BlendHint.h"
#include "unitysdk/RPG/Client/CameraResultData.h"
#include "unitysdk/System/Object.h"

class Class_1_C3A033C60E10FDC7;
namespace RPG::GameCore { class VCameraNoiseChange; }

#define CLASS_1_029AD5385E36F1C7_CLEAR_OFFSET UNITYSDK_OFFSET(0x18C7B3A0)
#define CLASS_1_029AD5385E36F1C7__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7B430)

inline static constexpr unsigned int Class_1_029AD5385E36F1C7_TypeDefinitionIndex = 66404;

class Class_1_029AD5385E36F1C7 : public ::System::Object
{
public:
	::Class_1_C3A033C60E10FDC7* Field_1_0; // 0x10
	::RPG::GameCore::VCameraNoiseChange* Field_1_1; // 0x18
	::RPG::Client::CameraResultData Field_1_2; // 0x20
	::Cinemachine::CinemachineBlendDefinition Field_1_3; // 0xB8
	::Cinemachine::CinemachineVirtualCameraBase_BlendHint Field_1_4; // 0xC8
	::System::Single Field_1_5; // 0xCC
	::System::Single Field_1_6; // 0xD0
	::System::Single Field_1_7; // 0xD4
	::System::Boolean Field_1_8; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_029AD5385E36F1C7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_029AD5385E36F1C7_CLEAR_OFFSET))(this);
	}
};
