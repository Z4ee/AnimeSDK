#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO_CAMERASEQUENCE_VIDEOITEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7858B0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO_CAMERASEQUENCE_VIDEOITEM___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7858C0)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequence_WarmupVideo_CameraSequence_VideoItem_TypeDefinitionIndex = 52331;

	struct alignas(8) CameraSequence_WarmupVideo_CameraSequence_VideoItem
	{
		::System::String* warmupVideoPath; // 0x10
		::System::String* SkipCondition; // 0x18
		::System::Boolean IsInvertCondition; // 0x20

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO_CAMERASEQUENCE_VIDEOITEM_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCE_WARMUPVIDEO_CAMERASEQUENCE_VIDEOITEM___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
