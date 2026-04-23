#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGCamera/CameraStateData.h"
#include "unitysdk/System/Object.h"

namespace RPGCamera { class CameraStateBlender; }
namespace RPGCamera { class CameraStatePostModule; }
namespace RPGCamera { class ICameraState; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPGCAMERA_CAMERASTATEPOSTPROCESSER_COLLECT_OFFSET UNITYSDK_OFFSET(0x8DF41E0)
#define RPGCAMERA_CAMERASTATEPOSTPROCESSER_FLUSH_OFFSET UNITYSDK_OFFSET(0x8DF43F0)
#define RPGCAMERA_CAMERASTATEPOSTPROCESSER_GET_DATA_OFFSET UNITYSDK_OFFSET(0x8DF4170)
#define RPGCAMERA_CAMERASTATEPOSTPROCESSER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x8DF3840)
#define RPGCAMERA_CAMERASTATEPOSTPROCESSER_INIT_OFFSET UNITYSDK_OFFSET(0x8DF41D0)
#define RPGCAMERA_CAMERASTATEPOSTPROCESSER_REFRESHBLENDER_OFFSET UNITYSDK_OFFSET(0x8DF41C0)
#define RPGCAMERA_CAMERASTATEPOSTPROCESSER_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x8DF41B0)
#define RPGCAMERA_CAMERASTATEPOSTPROCESSER_TICK_OFFSET UNITYSDK_OFFSET(0x8DF4280)
#define RPGCAMERA_CAMERASTATEPOSTPROCESSER__CTOR_OFFSET UNITYSDK_OFFSET(0x8DF40D0)

namespace RPGCamera
{
	inline static constexpr unsigned int CameraStatePostProcesser_TypeDefinitionIndex = 40951;

	class CameraStatePostProcesser : public ::System::Object
	{
	public:
		::RPGCamera::ICameraState* _activeState; // 0x10
		::RPGCamera::CameraStateBlender* _activeBlender; // 0x18
		::System::Collections::Generic::List_1<::RPGCamera::CameraStatePostModule*>* _modules; // 0x20
		::RPGCamera::CameraStateData _retData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEPOSTPROCESSER__CTOR_OFFSET))(this);
		}

		::RPGCamera::CameraStateData get_Data()
		{
			return ((::RPGCamera::CameraStateData(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEPOSTPROCESSER_GET_DATA_OFFSET))(this);
		}

		::System::Void RefreshState(::RPGCamera::ICameraState* activeState)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::ICameraState*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEPOSTPROCESSER_REFRESHSTATE_OFFSET))(this, activeState);
		}

		::System::Void RefreshBlender(::RPGCamera::CameraStateBlender* blender)
		{
			return ((::System::Void(*)(::PVOID, ::RPGCamera::CameraStateBlender*))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEPOSTPROCESSER_REFRESHBLENDER_OFFSET))(this, blender);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEPOSTPROCESSER_GET_ISVALID_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEPOSTPROCESSER_INIT_OFFSET))(this);
		}

		::System::Void Collect(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEPOSTPROCESSER_COLLECT_OFFSET))(this, deltaTime);
		}

		::System::Void Tick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEPOSTPROCESSER_TICK_OFFSET))(this, deltaTime);
		}

		::System::Void Flush(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPGCAMERA_CAMERASTATEPOSTPROCESSER_FLUSH_OFFSET))(this, deltaTime);
		}
	};
}
