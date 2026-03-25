#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class CameraBlendCurve; }

#define RPG_CLIENT_ELFCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x959AD00)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfCameraConfig_TypeDefinitionIndex = 51733;

	class ElfCameraConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Cinemachine::CinemachineBlendDefinition_Style BlendType; // 0x18
		::RPG::Client::CameraBlendCurve* CustomBlendCurve; // 0x20
		::System::Single BlendTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFCAMERACONFIG__CTOR_OFFSET))(this);
		}
	};
}
