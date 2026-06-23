#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Utils/NapCameraSequenceContext.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceMemberPath.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceBlendSetting; }

namespace MoleMole::Utils
{
	inline static constexpr unsigned int NapCameraSequenceContext_1_TypeDefinitionIndex = 63155;

	template <typename T>
	class NapCameraSequenceContext_1 : public ::MoleMole::Utils::NapCameraSequenceContext
	{
	public:
		T Config; // 0x0
	};
}
