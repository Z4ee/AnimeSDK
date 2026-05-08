#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/BangbooAdjustmentCameraOverriddenConfig.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace System { class String; }

#define MOLEMOLE_CAMERAS_BANGBOOCAMERAENTRY_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1742B430)
#define MOLEMOLE_CAMERAS_BANGBOOCAMERAENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1742B4B0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int BangbooCameraEntry_TypeDefinitionIndex = 55245;

	class BangbooCameraEntry : public ::System::Object
	{
	public:
		::System::Int32 priority; // 0x10
		::MoleMole::Cameras::BangbooAdjustmentCameraOverriddenConfig setting; // 0x14
		::System::String* tag; // 0x20
		::Il2CppArray<::System::String*>* clearTags; // 0x28
		::System::Boolean ignoreLocalAvatar; // 0x30
		::System::Single duration; // 0x34
		::MoleMole::Cameras::CameraTrackBlending* blendIn; // 0x38
		::MoleMole::Cameras::CameraTrackBlending* blendOut; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_BANGBOOCAMERAENTRY__CTOR_OFFSET))(this);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_BANGBOOCAMERAENTRY_GET_TAG_OFFSET))(this);
		}
	};
}
