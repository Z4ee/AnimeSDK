#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Utils/NapCameraSequenceContext.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

#define MOLEMOLE_UTILS_LEVELFAILEDCAMERASEQUENCECONTEXT_CALCULATEDESIREDFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x12EAE980)
#define MOLEMOLE_UTILS_LEVELFAILEDCAMERASEQUENCECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12EAECF0)

namespace MoleMole::Utils
{
	inline static constexpr unsigned int LevelFailedCameraSequenceContext_TypeDefinitionIndex = 69418;

	class LevelFailedCameraSequenceContext : public ::MoleMole::Utils::NapCameraSequenceContext
	{
	public:
		::System::Single FieldOfView; // 0xA0
		::System::Single LastPhaseFieldOfView; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_LEVELFAILEDCAMERASEQUENCECONTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Single CalculateDesiredFieldOfView(::System::Single heightRatio, ::PipelineCamera::WorldBasicCameraData& lastCameraData)
		{
			return ((::System::Single(*)(::System::Single, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_LEVELFAILEDCAMERASEQUENCECONTEXT_CALCULATEDESIREDFIELDOFVIEW_OFFSET))(heightRatio, lastCameraData);
		}
	};
}
