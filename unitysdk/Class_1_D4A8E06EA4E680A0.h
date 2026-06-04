#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_BlendHint.h"
#include "unitysdk/RPG/Client/CameraResultData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class VCameraNoiseChange; }

#define CLASS_1_D4A8E06EA4E680A0_CLEAR_OFFSET UNITYSDK_OFFSET(0xBF6E470)
#define CLASS_1_D4A8E06EA4E680A0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF6E500)

inline static constexpr unsigned int Class_1_D4A8E06EA4E680A0_TypeDefinitionIndex = 64999;

class Class_1_D4A8E06EA4E680A0 : public ::System::Object
{
public:
	::Cinemachine::CinemachineBlendDefinition Field_1_0; // 0x10
	::RPG::GameCore::VCameraNoiseChange* Field_1_1; // 0x20
	::System::Nullable_1<::RPG::Client::CameraResultData> Field_1_2; // 0x28
	::Cinemachine::CinemachineVirtualCameraBase_BlendHint Field_1_3; // 0xC8
	::System::Single Field_1_4; // 0xCC
	::System::Single Field_1_5; // 0xD0
	::System::Single Field_1_6; // 0xD4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4A8E06EA4E680A0__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4A8E06EA4E680A0_CLEAR_OFFSET))(this);
	}
};
