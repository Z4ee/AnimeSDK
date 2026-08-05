#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Utils/CameraSequence/CameraSequence_VideoItem_ComposeConfigItem.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_VIDEOCONFIGUTIL_GETPLAYTYPEMATCHCONFIG_OFFSET UNITYSDK_OFFSET(0x11665920)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int VideoConfigUtil_TypeDefinitionIndex = 44238;

	class VideoConfigUtil : public ::System::Object
	{
	public:
		static ::System::Boolean GetPlayTypeMatchConfig(::System::Collections::Generic::List_1<::MoleMole::Utils::CameraSequence::CameraSequence_VideoItem_ComposeConfigItem>* composeConfigs, ::MoleMole::Utils::CameraSequence::CameraSequence_VideoItem_ComposeConfigItem& vConfig)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::MoleMole::Utils::CameraSequence::CameraSequence_VideoItem_ComposeConfigItem>*, ::MoleMole::Utils::CameraSequence::CameraSequence_VideoItem_ComposeConfigItem&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_VIDEOCONFIGUTIL_GETPLAYTYPEMATCHCONFIG_OFFSET))(composeConfigs, vConfig);
		}
	};
}
