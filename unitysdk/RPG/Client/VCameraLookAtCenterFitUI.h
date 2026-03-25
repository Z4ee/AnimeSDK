#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineComposer; }
namespace Cinemachine { class CinemachineVirtualCamera; }

#define RPG_CLIENT_VCAMERALOOKATCENTERFITUI_AWAKE_OFFSET UNITYSDK_OFFSET(0xA764780)
#define RPG_CLIENT_VCAMERALOOKATCENTERFITUI__CTOR_OFFSET UNITYSDK_OFFSET(0xA7649D0)

namespace RPG::Client
{
	inline static constexpr unsigned int VCameraLookAtCenterFitUI_TypeDefinitionIndex = 55769;

	class VCameraLookAtCenterFitUI : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Cinemachine::CinemachineVirtualCamera* Field_5_0; // 0x18
		::Cinemachine::CinemachineComposer* Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VCAMERALOOKATCENTERFITUI__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VCAMERALOOKATCENTERFITUI_AWAKE_OFFSET))(this);
		}
	};
}
