#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineComponentBase.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class NoiseSettings; }

#define CINEMACHINE_CINEMACHINEBASICMULTICHANNELPERLIN_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1FBF7BD0)
#define CINEMACHINE_CINEMACHINEBASICMULTICHANNELPERLIN_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x1FBF7CF0)
#define CINEMACHINE_CINEMACHINEBASICMULTICHANNELPERLIN_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1FBF88B0)
#define CINEMACHINE_CINEMACHINEBASICMULTICHANNELPERLIN_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1FBF7D00)
#define CINEMACHINE_CINEMACHINEBASICMULTICHANNELPERLIN_RESEED_OFFSET UNITYSDK_OFFSET(0x1FBF8A80)
#define CINEMACHINE_CINEMACHINEBASICMULTICHANNELPERLIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBF8B10)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBasicMultiChannelPerlin_TypeDefinitionIndex = 34697;

	class CinemachineBasicMultiChannelPerlin : public ::Cinemachine::CinemachineComponentBase
	{
	public:
		::Cinemachine::NoiseSettings* m_NoiseProfile; // 0x50
		::UnityEngine::Vector3 m_PivotOffset; // 0x58
		::System::Single m_AmplitudeGain; // 0x64
		::System::Single m_FrequencyGain; // 0x68
		::System::Boolean mInitialized; // 0x6C
		::System::Single mNoiseTime; // 0x70
		::UnityEngine::Vector3 mNoiseOffsets; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBASICMULTICHANNELPERLIN__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBASICMULTICHANNELPERLIN_GET_ISVALID_OFFSET))(this);
		}

		::Cinemachine::CinemachineCore_Stage get_Stage()
		{
			return ((::Cinemachine::CinemachineCore_Stage(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBASICMULTICHANNELPERLIN_GET_STAGE_OFFSET))(this);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState& curState, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBASICMULTICHANNELPERLIN_MUTATECAMERASTATE_OFFSET))(this, curState, deltaTime);
		}

		::System::Void ReSeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBASICMULTICHANNELPERLIN_RESEED_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBASICMULTICHANNELPERLIN_INITIALIZE_OFFSET))(this);
		}
	};
}
