#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Cameras { class CameraOverrideTrackEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xDB875A0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ConfigCameraOverrideTrack_TypeDefinitionIndex = 79041;

	class ConfigCameraOverrideTrack : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::CameraOverrideTrackEntry*>* config; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK__CTOR_OFFSET))(this);
		}
	};
}
