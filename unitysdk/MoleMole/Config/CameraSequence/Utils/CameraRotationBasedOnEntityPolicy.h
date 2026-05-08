#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceRuntimeDataProvider_3.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace Nap::NapECS { class EcsWorld; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x124150C0)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int CameraRotationBasedOnEntityPolicy_TypeDefinitionIndex = 55118;

	class CameraRotationBasedOnEntityPolicy : public ::PipelineCamera::CameraSequence::CameraSequenceRuntimeDataProvider_3<::UnityEngine::Quaternion, ::System::UInt32, ::Nap::NapECS::EcsWorld*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY__CTOR_OFFSET))(this);
		}
	};
}
