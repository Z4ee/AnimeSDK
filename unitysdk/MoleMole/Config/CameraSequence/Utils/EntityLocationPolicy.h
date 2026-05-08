#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceRuntimeDataProvider_3.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Nap::NapECS { class EcsWorld; }

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x122FF0A0)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int EntityLocationPolicy_TypeDefinitionIndex = 74157;

	class EntityLocationPolicy : public ::PipelineCamera::CameraSequence::CameraSequenceRuntimeDataProvider_3<::UnityEngine::Vector3, ::System::UInt32, ::Nap::NapECS::EcsWorld*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_ENTITYLOCATIONPOLICY__CTOR_OFFSET))(this);
		}
	};
}
